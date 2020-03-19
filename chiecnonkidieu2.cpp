#include <iostream>
#include <string.h>
#include <cstring>
#include <string.h>
#include <cstdlib>
#include <ctime>

#define MAX 100

using namespace std;

int main2()
{
    char ochu[11]="ILOVEYOU";
    char odoan[11]="########";
    char traloi; 
    int point = 0;
   
    do
    {
        cout<<"Cau nay hay noi khi to tinh"<<endl;
        cout<<"Gom 8 o chu can doan:\n"<<odoan<<endl;
        cout<<"Hay nhap vao ki tu co trong o tren?"; 
        cin>>traloi;
        system("clear"); //Xóa màn hình 
        srand(time(NULL));
        int dem=0,r =rand() % 100;
        for(int i=0;i<strlen(ochu);i++)
            if(ochu[i]==traloi)
            {
                odoan[i]=ochu[i];
                dem++;
            }

        if(dem>0)
        {
            cout<<"Ban da doan dung so ki tu o lan doan vua roi la:"<<dem<<endl;
            cout<<"so diem ban nhan duoc trong lan doan vua roi la: "<<r<<endl;
            point = point + r ;
            getchar();
        }
        else
        {
            cout<<"Ban da doan sai roi! Hay doan lai!"<<endl;
            getchar();
        }
    }
    while (strcmp(ochu,odoan)!=0);
    if(strcmp(ochu,odoan)==0)
    {
        system("clear");
        cout<<"Chuc mung ban da doan dung o chu:"<<ochu<<endl;
        cout<<"tong diem ban nhan duoc la: "<<point<<endl;
    }
    return 0;
}
// /*
// BÀI T?P V? NHÀ:
//     Bài 2. Nâng c?p bài này có thêm ph?n tính di?m b?ng hàm rand() trong kho?ng 100 (int r =rand() % 100). Khi k?t thúc c?n thông báo ra s? di?n c?a ngu?i choi.
//     Bài 3. Nâng c?p Bài 2 d? t? ch?c cho 2 ngu?i cùng choi 1 lúc (Ngu?i A, Ngu?i B)
//     Bài 4. Nâng c?p ti?p bài 3 d? tr? l?i h?t các câu h?i trong file cauhoi.txt
//     File cauhoi.txt nhu sau: 
//     2 
//     Câu hay nói trong khi t? tình là? 
//     ILOVEYOU
//     Dòng song l?n nh?t mi?n B?c là gì? 
//     SONGHONG 
// */



