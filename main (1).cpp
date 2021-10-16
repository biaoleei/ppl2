#include<iostream>
#include<string>
#include"nhadat.h"

int main()
{
    nhapho *nd= new nhapho;
    
    nd->nhap();
    nd->xuat();
    delete nd;
    
    return 0;
}
#ifndef NHADAT_H
#define NHADAT_H
#include<string>

class nhapho
{
    
    
        std::string loca; // địa điểm
        double pri, are; // giá bán, diện tích
        int hi; // số tầng

    
    public:
     
     void nhap();
     void xuat();
     void luu();


};
#endif

#include"nhadat.h"
#include<iostream>
using namespace std;
void nhapho::nhap()
{
  cout<<"Nhap dia chi nha : ";
  getline(cin, loca);
  cout<<"Nhap dien tich: ";
  cin>> are;
  cout<<"Nhap so tang:";
  cin>> hi;
  cout<<" Nhap gia ban:";
  cin>> pri;


}
void nhapho::xuat()
{
    cout<<" Dia chi nha :"<<loca<<endl;
    cout<<" Dien tich nha:"<<are<<endl;
    cout<<" So tang:"<<hi<<endl;
    cout<<" Gia ban:"<<pri<<endl;
}