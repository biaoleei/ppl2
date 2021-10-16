#ifndef SANVUON_H
#define SANVUON_H
#include <iostream>
#include <string>
using namespace std;
class nhavuon{
    private:
       string DiaDiem;
       double GiaBan;
       double DienTichXayDung;
       double DienTichSanVuon;

    public:
        void NhapDiaDiem(string );
        void NhapGiaBan(double );
        void NhapDienTichXayDung(double );
        void NhapDienTichSanVuon(double );
};
#endif