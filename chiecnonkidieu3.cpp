#include<bits/stdc++.h>
//#include <iostream>
//#include <string.h>
//#include <cstring>
//#include <string.h>
//#include <cstdlib>
//#include <ctime>

#define MAX 100
int CNKD(int x, char ten[],char odoan[],char ochu[]);
using namespace std;

int main()
{
    char ochu[50]="ILOVEYOU";
    char odoan[50]="########";
	char ten1[13] = "nguoi choi 1",ten2[13] = "nguoi choi 2";
	int point_nguoi1 = 0,point_nguoi2 = 0,j = 1;
	while(j > 0){
		if(j%2 != 0){
			point_nguoi1 = CNKD(point_nguoi1,ten2,odoan,ochu);
			if(strcmp(ochu,odoan)==0){
			    system("clear");
			    cout<<"Chuc mung "<<ten1<<" da doan dung o chu:"<<ochu<<endl;
			    cout<<"tong diem "<<ten1<<" nhan duoc la: "<<point_nguoi1<<endl;
			    cout<<"tong diem "<<ten2<<" nhan duoc la: "<<point_nguoi2<<endl;
			    break;
			}
	    
    }
		else{
			point_nguoi2 = CNKD(point_nguoi2,ten1,odoan,ochu);
	      	if(strcmp(ochu,odoan)==0){
		        system("clear");
		        cout<<"Chuc mung "<<ten2<<" da doan dung o chu:"<<ochu<<endl;
		        cout<<"tong diem "<<ten1<<" nhan duoc la: "<<point_nguoi1<<endl;
		        cout<<"tong diem "<<ten2<<" nhan duoc la: "<<point_nguoi2<<endl;
		        break;
	      	}
		}
		j++;
	}
  	
  	return 0;
}
int CNKD(int x, char ten[],char odoan[],char ochu[]){
  char tl; 
	while (strcmp(ochu,odoan)!=0){
    // if(strcmp(ochu,odoan)==0){
    //   break;
    // }
    	cout<<"Cau nay hay noi khi to tinh"<<endl;
    	cout<<"Gom 8 o chu can doan:\n"<<odoan<<endl;
    	cout<<"Hay nhap vao ki tu co trong o tren?"; 
    	cin>>tl;
    	system("clear"); //Xóa màn hình 
    	srand(time(NULL));
    	int point = 0;
    	int dem=0,r =rand() % 100;
    	for(int i=0;i<strlen(ochu);i++)
      	if(ochu[i]==tl)
      	{
       	 	odoan[i]=ochu[i];
      		point = point + r;
        	dem++;
      	}

    	if(dem>0)
    	{
      		cout<<"Ban da doan dung so ki tu la:"<<dem<<endl;
      		getchar();
      		cout<<"so diem ban nhan duoc trong lan doan nay la: "<<point<<endl;
      		x = x + point;
    	}
    	else
    	{
      		cout<<"Ban da doan sai roi! Den "<<ten<<"!"<<endl;
      		cout<<endl;
      		getchar();
      		break;
    	}
  	}

  	return x;
}
