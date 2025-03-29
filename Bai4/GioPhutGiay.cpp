#include "GioPhutGiay.h"
void GioPhutGiay::Nhap() {
	do {
		cout << "Nhap vao gio: ";
		cin >> iGio;
	} while (iGio < 0 || iGio >25);
	do {
		cout << "Nhap vao phut: ";
		cin >> iPhut;
	} while (iPhut < 0 || iPhut>60);
	do {
		cout << "Nhap vao giay: ";
		cin >> iGiay;
	} while (iGiay < 0 | iGiay>60);
};
void GioPhutGiay::Xuat() {
	cout << iGio << " : " << iPhut << " : " << iGiay;
};
void GioPhutGiay::TinhCongThemMotGiay() {
	GioPhutGiay res;
	if (iGiay == 59) {
		if (iPhut == 59) {
			if (iGio == 23) {
				res.iGio = 0;
				res.iPhut = 0;
				res.iGiay = 0;
			}
			else {
				res.iGiay = 0;
				res.iPhut = 0;
				res.iGio = iGio + 1;
			}
		}
		else {
			res.iGio = iGio;
			res.iPhut = iPhut + 1;
			res.iGiay = 0;
		}
	}
	else {
		res.iGio = iGio;
		res.iPhut = iPhut;
		res.iGiay = iGiay + 1;
	}
	cout << res.iGio << " : " << res.iPhut << " : " << res.iGiay;
};
