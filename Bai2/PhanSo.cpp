#include "PhanSo.h"
void PhanSo::Nhap() {
	cout << "Nhap vao tu: ";
	cin >> iTu;
	do {
		cout << "Nhap vao mau: ";
		cin >> iMau;
	} while (iMau == 0);
};
void PhanSo::Xuat() {
	if (iMau < -1) {
		cout << -iTu << "/" << iMau ;
	}
	else if (iMau == -1) {
		cout << -iTu ;
	}
	else if (iMau == 1) {
		cout << iTu ;
	}
	else if (iTu == 0){
		cout << 0;
	}
	else {
		cout << iTu << "/" << iMau ;
	}
};
int gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}
void PhanSo::RutGon() {
	int ucln = gcd(iTu, iMau);
	iTu /= ucln;
	iMau /= ucln;
}
PhanSo PhanSo::Tong(const PhanSo& P) {
	PhanSo res;
	res.iTu = iTu * P.iMau + iMau*P.iTu;
	res.iMau = iMau * P.iMau;
	return res;
}
PhanSo PhanSo::Hieu(const PhanSo& P) {
	PhanSo res;
	res.iTu = iTu * P.iMau - iMau * P.iTu;
	res.iMau = iMau * P.iMau;
	return res;
}
PhanSo PhanSo::Tich(const PhanSo& P) {
	PhanSo res;
	res.iTu = iTu * P.iTu;
	res.iMau = iMau * iMau;
	return res;
}
PhanSo PhanSo::Thuong(const PhanSo& P) {
	PhanSo res;
	if (P.iTu == 0) {
		cout << "Khong the chia";
	}
	else {
		res.iTu = iTu * P.iMau;
		res.iMau = iMau * P.iTu;
		return res;
	}
}
void PhanSo::SoSanh( PhanSo P) {
	float p1 = (float)iTu / iMau;
	float p2 = (float)P.iTu / P.iMau;
	if (p1 < p2) {
		this->Xuat(); cout << " < "; P.Xuat();
	}
	else if (p1 > p2) {
		this->Xuat(); cout << " > "; P.Xuat();
	}
	else {
		this->Xuat(); cout << " = "; P.Xuat();
	}
	cout << endl;
}
