#pragma once
#include "CanBo.h"
class BaoVe : public CanBo{
	string khuVuc;
public:
	BaoVe();
	BaoVe(string ten, int tuoi, string gioiTinh, string diaChi, string sdt, string que, int heSo, int soNgay, string khuVuc);
	string getArea();
	void setArea(string khu);
	void setCode(int i);
	void tinhLuong();
};
