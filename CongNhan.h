#pragma once
#include "CanBo.h"
class CongNhan : public CanBo {
	int bac;
public:
	CongNhan();
	/*CongNhan(string ten, int tuoi, string gioiTinh, string diaChi, string sdt, string que, int heSo, int soNgay, int bac)
		: CanBo(ten, tuoi, gioiTinh, diaChi, sdt, que, heSo, soNgay);*/
	int getLevel();
	void setLevel(int bac);
	void setCode(int i);
	void tinhLuong();
};