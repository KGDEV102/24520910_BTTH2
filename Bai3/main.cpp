#include"SoPhuc.h"
#include<iostream>
int main() {
    SoPhuc P1, P2;
    cout << "Nhap vao so phuc thu 1: " << endl;
    P1.Nhap();
    cout << "Nhap vao so phuc thu 2: " << endl;
    P2.Nhap();
    SoPhuc res1 = P1.Tong(P2);
    P1.Xuat(); cout << " + "; P2.Xuat(); cout << " = "; res1.Xuat(); cout << endl;
    SoPhuc res2 = P1.Hieu(P2);
    P1.Xuat(); cout << " - "; P2.Xuat(); cout << " = "; res2.Xuat(); cout << endl;
    SoPhuc res3 = P1.Tich(P2);
    P1.Xuat(); cout << " * "; P2.Xuat(); cout << " = "; res3.Xuat(); cout << endl;
    SoPhuc res4 = P1.Thuong(P2);
    P1.Xuat(); cout << " : "; P2.Xuat(); cout << " = "; res4.Xuat(); cout << endl;
}
