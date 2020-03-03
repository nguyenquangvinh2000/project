#include <iostream>
#include <fstream>
#include<string.h>
using namespace std;
#include <stdlib.h>
/*
Cau truc du lieu cua chuong trinh
*/
#define MAX 200

char ten[MAX][50]; //Mang hai chieu luu tru ten nguoi toi da MAX nguoi, moi ten nguoi dai khong qua 50 ki tu
char sdt[MAX][11]; //Mang hai chieu luu tru so dien thoai, toi da MAX nguoi, moi sdt dai khong qua 11 ki tu
int N; //Luu tru so nguoi danh ba dang qua ly

int main()
{
	N = 0; //Mac dinh khi khoi dong khong co nguoi nao trong danh ba

	/*
	Doc du lieu tu file danhba.txt
	*/

	fstream fin("danhba.txt");
	fin>>N;
	char temp[100];
	fin.getline(temp, 100);

	for(int i = 0; i<N; i++)
	{
		fin.getline(ten[i], 50);
		fin.getline(sdt[i], 11);
	}
	fin.close();
	//-------------------------------

	/*
	Xu ly thuc don
	*/
	int chon,p,o; //pp : v? trí truoc , op : vi tri luc dau
	string ht,dt;
	do
	{
		cout<<"\t\t\tQUAN LY DANH BA\n";
		cout<<"\t\tViet boi: Nguyen Duc Dan\n";
		cout<<"\t\tVersion: TLU.DanhBa.1.0\n";
		cout<<"\t1. Them lien he\n";
		cout<<"\t2. Hien thi toan danh ba\n";
		cout<<"\t3. Sua lien he\n";
		cout<<"\t4. Xoa lien he\n";
		cout<<"\t5. Tim lien he\n";
		cout<<"\t0. Thoat\n";
		cout<<"\tMoi chon chuc nang: ";
		cin>>chon;
		/*
		Xu ly chon thi lam gi
		*/
		if (chon == 1)
		{
			cout<<"Moi nhap ten: ";
			cin.ignore();
			cin.getline(ten[N], 50);

            cout<<"Moi so dien thoai: ";
			cin.getline(sdt[N], 11);
			N++;
		}
		else if (chon == 2)
		{
			cout<<"Danh ba la: \n";
			cout<<"STT\tTen\t\tSo DT\n";
			for(int i = 0; i<N; i++)
			{
				cout<<i+1<<"\t"<<ten[i]<<"\t\t"<<sdt[i]<<endl;
			}
		}
		else if (chon == 3)
		{
			char ht[50];
			cout<<"nhap ten can sua: ";
			cin.ignore();
			cin.getline(ht,50);
			int x;
			for(int i = 0;i < N;i++){
				x = strcmp(ten[i], ht);
				if( x == 0){
					cout<<"so dien thoai cu: "<<sdt[i]<<endl;
					cout<<"sdt moi la: ";
					cin.getline(sdt[i],11);
				}
			}
		}
		else if (chon == 4)
		{
			char ht[50];
			cout<<"nhap ten can xoa: ";
			cin.ignore();
			cin.getline(ht,50);
			int x;
			for(int i = 0;i < N;i++){
				x = strcmp(ten[i],ht);
				int j;
				if(x == 0){
					j = i;
					cout<<j<<endl;
					for(j;j < N-1;j++){
						strcpy(ten[j],ten[j+1]);
						strcpy(sdt[j],sdt[j+1]);
					}
				}
			}
			N = N -1;
		}
		else if (chon == 5)
		{
			char ht[50];
			cout<<"nhap ten can tim: ";
			cin.ignore();
			cin.getline(ht,50);
			int x;
			for(int i = 0;i < N;i++){
				x = strcmp(ten[i],ht);
				cout<<x<<endl;
				if(x == 0){
					cout<<"so can tim la: "<<sdt[i]<<endl;
				}
			}
		}
		else if (chon == 0)
		{
			/*
			Ghi du lieu xuong file danhba.txt
			*/
			ofstream fout("danhba.txt");
			fout<<N<<endl;
			for(int i = 0; i<N; i++)
			{
				fout<<ten[i]<<endl<<sdt[i]<<endl;
			}
			fout.close();
		}
		if (chon != 0)
		{
			cout<<"Nhan Enter de tro ve: ";
			cin.ignore();
			cin.get();
			system("clear");
		}
	}while (chon != 0);

	return 0;
}
