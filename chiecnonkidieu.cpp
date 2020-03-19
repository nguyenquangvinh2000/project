// #include <iostream>
// #include <string.h>
// #include <cstring>
// #include <string.h>

// #define MAX 100

// using namespace std;

// int main1()
// {
//   char ochu[11]="ILOVEYOU";
//   char odoan[11]="########";
//   char tl; 
   
//   do
//   {
//     system("clear"); //Xóa màn hình 
//     cout<<"Câu này hay nói khi t? tình"<<endl;
//     cout<<"G?m 10 ô ch? c?n doán:\n"<<odoan<<endl;
//     cout<<"Hãy nh?p vào kí t? có trong ô ch? trên?"; 
//     cin>>tl;
    
//     int dem=0;
//     for(int i=0;i<strlen(ochu);i++)
//       if(ochu[i]==tl)
//       {
//         odoan[i]=ochu[i];
//         dem++;
//       }

//     if(dem>0)
//     {
//       cout<<"B?n dã doán dúng s? kí t? là:"<<dem<<endl;
//       getchar();
//     }
//     else
//     {
//       cout<<"B?n dã doán sai r?i! Hãy doán l?i!"<<endl;
//       getchar();
//     }
//   }while (strcmp(ochu,odoan)!=0);
//   if(strcmp(ochu,odoan)==0)
//   {
//     system("clear");
//     cout<<"Chúc m?ng b?n dã doán dúng ô ch?:"<<ochu<<endl;
//   }
//   return 0;
// }
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



