#include"GioPhutGiay.h"
int main() {
	GioPhutGiay a;
	a.Nhap();
	cout << "Gio hien tai: ";
	a.Xuat();
	cout << endl;
	cout << "Gio sau khi cong them 1 giay: ";
	a.TinhCongThemMotGiay();
}
