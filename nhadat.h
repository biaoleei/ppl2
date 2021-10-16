#ifndef nhadat_h
#define nhadat_h
#include <iostream>
#include <string>
using namespace std;
class nhadat
{
  protected:   
  struct nhapho
  { 
    nhapho( string l, double x, double y, int t)// Hàm khai báo đơn giản
    {
        loca = l;
        a = x;
        pri = y;
        h = t;
    };
  
    string loca;// Địa điểm
    double a, pri;// Diện tích và giá bán
    int h;// Số tầng
  };  
    int *data; //Mảng động chứa thông tin của nhà
  public:
   void Nhap();
   void xuat(); 
   void search();
   nhadat();
   ~nhadat();
    
};

#endif