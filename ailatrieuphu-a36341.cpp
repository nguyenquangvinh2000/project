#include <fstream>
#include <stdlib.h>
using namespace std;
#define MAX 100
#include <unistd.h>
#include <string.h>
#include<iostream>
char cauhoi[MAX][50];
char dapanA[MAX][10];
char dapanB[MAX][10];
char dapanC[MAX][10];
char dapanD[MAX][10];
char dapandung[MAX][5];
int N;
int main()
{
	N=0; // so cau hoi
	fstream fin("Cauhoi.txt");
	fin>>N;
	char temp[100];
	fin.getline(temp ,100);
	for(int i=0;i<N;i++)
	{
		fin.getline(cauhoi[i],50);
		fin.getline(dapanA[i],10);
		fin.getline(dapanB[i],10);
		fin.getline(dapanC[i],10);
		fin.getline(dapanD[i],10);
		fin.getline(dapandung[i],5);
	}
	fin.close();
    char ten[20];
    cout<<"Chào mừng quý vị đến với game show Ai là triệu phú "<<endl;
    sleep(2);
    cout<<"\t\tDo A36341 san xuat"<<endl;
    cout<<"\tBạn tên là: ";
    cin.getline(ten,20);
    cout<<"\tBạn sẵn sàng chưa ?"<<endl;
    cout<<"1.Tôi đã sẵn sàng"<<endl;
    cout<<"2.Tôi chưa sẵn sàng"<<endl;
    int chon;
    cin>>chon;
    sleep(2);
    cout<<"\tVà bây giờ chúng ta đi tìm : Ai là triệu phú"<<endl;
    int diem;
    diem=0;
    if(chon==1)
    {
        for(int i=0;i<N;i++)
        {
            char dapantraloi[MAX][10];
            cout<<"Cau "<<i+1<<":"<<cauhoi[i]<<endl;
            cout<<"A. "<<dapanA[i]<<endl;
            cout<<"B. "<<dapanB[i]<<endl;
            cout<<"C. "<<dapanC[i]<<endl;
            cout<<"D. "<<dapanD[i]<<endl;
            cout<<"Bạn có 5s suy nghĩ"<<endl;
            sleep(2);
            cout<<"Đáp án của bạn là: ";
            cin.ignore();
            cin.getline(dapantraloi[i],10);
            if(strcmp(dapantraloi[i],dapandung[i])==0)
            {
                cout<<"Chúc mừng bạn đã trả lời đúng"<<endl;
                diem+=1;
            }
            else
            {
                cout<<"Bạn đã trả lời sai"<<endl;
                cout<<"Chúc bạn may mắn"<<endl;
                break;
            }
        }
    }
    cout<<"Bạn có số điểm là:"<<diem<<endl;
    ofstream fout("Thống kê người chơi.txt");
    fout<<"ten: "<<ten<<endl<<"điểm: "<<diem<<endl;
    return 0;
}
//a36341 nguyen quang vinh 