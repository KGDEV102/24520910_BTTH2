#include "NgayThangNam.h"
int ngayOfthang(int thang, int nam) {
    switch (thang) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        return 31;
    case 4: case 6: case 9: case 11:
        return 30;
    case 2:
        if (nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0)) {
            return 29;
        }
        else {
            return 28;
        }
    }
}
void NgayThangNam::Nhap() {
    while (1) {
        cout << "Nhap vao ngay thang nam: ";
        cin >> iNgay >> iThang >> iNam;
        if (iNgay > 0 && iNgay <= ngayOfthang(iThang, iNam) && iThang > 0 && iThang <= 12 && iNam > 0) break;
        cout << "Ngay thang nam khong hop le. Vui long nhap lai!\n";
    }

};
void NgayThangNam::Xuat() {
	cout << iNgay << " / " << iThang << " / " << iNam;
};

void NgayThangNam::NgayTiepTheo() {
    NgayThangNam* Next = new NgayThangNam;
    if (iNgay == ngayOfthang(iThang, iNam)) {
        if (iThang == 12) {
            Next->iNgay = 1;
            Next->iThang = 01;
            Next->iNam = iNam + 1;
        }
        else {
            Next->iNgay = 1;
            Next->iThang = iThang + 1;
            Next->iNam = iNam;

        }
    }
    else {
        Next->iNgay = iNgay + 1;
        Next->iThang = iThang;
        Next->iNam = iNam;
    }
    cout << "Ngay tiep theo la: " << Next->iNgay << " / " << Next->iThang << " / " << Next->iNam << endl;
};
