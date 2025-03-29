#include "SoPhuc.h"
void SoPhuc::Nhap() {
    cout << "Phan thuc: ";
    cin >> iThuc;
    cout << "Phan ao: ";
    cin >> iAo;
}
void SoPhuc::Xuat() {
    cout << "(";
    if (iThuc == 0 && iAo == 0) {
        cout << 0;
    }
    else if (iAo == 0) {
        cout << iThuc;
    }
    else if (iThuc == 0) {
        cout << iAo << "i";
    }
    else {
        if (iAo > 0) {
            cout << iThuc << " + " << iAo << "i";

        }
        else {
            cout << iThuc << " - " << -iAo << "i";
        }
    }
    cout << ")";
}
SoPhuc SoPhuc::Tong(const SoPhuc& P) {
    SoPhuc res;
    res.iThuc = iThuc + P.iThuc;
    res.iAo = iAo + P.iAo;
    return res;
}

SoPhuc SoPhuc::Hieu(const SoPhuc& P) {
    SoPhuc res;
    res.iThuc = iThuc - P.iThuc;
    res.iAo = iAo - P.iAo;
    return res;
}
SoPhuc SoPhuc::Tich(const SoPhuc& P) {
    SoPhuc res;
    res.iThuc = iThuc * P.iThuc - iAo * P.iAo;
    res.iAo = iThuc * P.iAo + iAo * P.iThuc;
    return res;
}

SoPhuc SoPhuc::Thuong(const SoPhuc& P) {
    SoPhuc res;
    double mau = P.iThuc * P.iThuc + P.iAo * P.iAo; // Mẫu số không được bằng 0
    if (mau == 0) {
        throw runtime_error("Lỗi: Không thể chia cho số phức 0.");
    }
    res.iThuc = (iThuc * P.iThuc + iAo * P.iAo) / mau;
    res.iAo = (iAo * P.iThuc - iThuc * P.iAo) / mau;
    return res;
}
