#pragma once
#include<iostream>
using namespace std;

class PhanSo
{
private:
	int iTu, iMau;
public:
	void Nhap();
	void Xuat();
	void RutGon();
	PhanSo Tong(const PhanSo&);
	PhanSo Hieu(const PhanSo&);
	PhanSo Tich(const PhanSo&);
	PhanSo Thuong(const PhanSo&);
	void SoSanh(const PhanSo&);
};
