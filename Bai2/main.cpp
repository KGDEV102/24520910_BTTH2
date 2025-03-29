#include"PhanSo.h"
#include<iostream>
int main() {
	PhanSo a, b;
	a.Nhap();
	a.Xuat();
	cout << endl;
	b.Nhap();
	b.Xuat();
	cout << endl;
	PhanSo res1 = a.Tong(b);
	a.Xuat(); cout << " + "; b.Xuat(); cout << " = "; res1.Xuat(); cout << endl;
	PhanSo res2 = a.Hieu(b);
	a.Xuat(); cout << " - "; b.Xuat(); cout << " = "; res2.Xuat(); cout << endl;
	PhanSo res3 = a.Tich(b);
	a.Xuat(); cout << " * "; b.Xuat(); cout << " = "; res3.Xuat(); cout << endl;
	PhanSo res4 = a.Thuong(b);
	a.Xuat(); cout << " / "; b.Xuat(); cout << " = "; res4.Xuat(); cout << endl;
	a.SoSanh(b);
	
}
