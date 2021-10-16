#include "SanVuon.h"
#include <iostream>
#include <string>
using namespace std;
void nhavuon::NhapDiaDiem(string DiaDiem){
    cout << "Nhap dia diem: " << endl;
    this->DiaDiem = DiaDiem;
}
void nhavuon::NhapGiaBan(double GiaBan){
    cout << "Nhap gia ban: " << endl;
    this->GiaBan = GiaBan;
}
void nhavuon::NhapDienTichXayDung(double DienTichXayDung){
    cout << "Nhap dien tich xay dung: " << endl;
    this->DienTichXayDung = DienTichXayDung;
}
void nhavuon::NhapDienTichSanVuon(double DienTichSanVuon){
    cout << "Nhap dien tich san vuon: " << endl;
    this->DienTichSanVuon = DienTichSanVuon;
}

