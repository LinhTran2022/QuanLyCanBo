#pragma once
#include "CanBo.h"
class KySu : public CanBo{
	int soNamKinhNghiem;
	string nganhDaoTao;
public :
	KySu();
	KySu(string ten, int tuoi, string gioiTinh, string diaChi, string sdt, string que, int heSo, int soNgay, int soNamKinhNghiem, string nganhDaoTao);
	int getYear();
	void setYear(int nam);
	string getMajor();
	void setMajor(string nganh);
	void setCode(int i);
	void tinhLuong();
};