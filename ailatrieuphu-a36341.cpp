#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;
struct Questions
{
   char  Hoi[255];
   char  A[50];
   char  B[50];
   char  C[50];
   char  D[50];
   char  Dapan[3];
   int Thuong;
};
int main() 
{
  fstream f; 
  struct Questions Cauhoi[15];
  char temp[10];
  int n;
  char Traloi[3];

  f.open("cauhoi.txt",ios::in);
  if(f.fail())
  {
    cout<<"Mở file bị lỗi";
    return -1;
  }
  f>>n;
  f.getline(temp,10);
  for(int i=0;i<n;i++)
  {
    //Đọc từ file ra mảng
    f.getline(Cauhoi[i].Hoi,255);
    f.getline(Cauhoi[i].A,50);
    f.getline(Cauhoi[i].B,50);
    f.getline(Cauhoi[i].C,50);
    f.getline(Cauhoi[i].D,50);
    f.getline(Cauhoi[i].Dapan,3);
    f>>Cauhoi[i].Thuong;
    f.getline(temp,10);
    //In ra màn hình
    cout<<Cauhoi[i].Hoi<<endl;
    cout<<Cauhoi[i].A<<endl;
    cout<<Cauhoi[i].B<<endl;
    cout<<Cauhoi[i].C<<endl;
    cout<<Cauhoi[i].D<<endl;
    cout<<"Theo bạn phương án trả lời là:";
    cin.getline(Traloi,3);
    //strcmp(s1,s2) - Hàm so sánh 2 xâu s1,s2 nằm trong thư viên cstring
    if(strcmp(Cauhoi[i].Dapan,Traloi)==0)
    {
      cout<<"Chúc mừng bạn đã trả lời đúng! Câu trả lời có số điểm là"<<Cauhoi[i].Thuong<<endl;
    }
    else
    {
      cout<<"Chúc bạn may mắn lần sau! Dừng cuộc chơi!"<<endl;
      break;
    }
  }
  f.close();
  return 0;
}
