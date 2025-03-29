#pragma once
#include<iostream>
using namespace std;
class SoPhuc
{
private:
	float iThuc, iAo;
public:
	void Nhap();
	void Xuat();
	SoPhuc Tong(const SoPhuc&);
	SoPhuc Hieu(const SoPhuc&);
	SoPhuc Tich(const SoPhuc&);
	SoPhuc Thuong(const SoPhuc&);
};

