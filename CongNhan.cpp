#include "CongNhan.h"
CongNhan::CongNhan(){}
/*CongNhan::CongNhan(string ten, int tuoi, string gioiTinh, string diaChi, string sdt, string que, int heSo, int soNgay, int bac)
	: CanBo(ten, tuoi, gioiTinh, diaChi, sdt, que, heSo, soNgay) {
	this->bac = bac;
}*/
int CongNhan::getLevel() {
	return bac;
}
void CongNhan::setLevel(int bac) {
	this ->bac = bac;
}
void CongNhan::setCode(int i) {
	string cs = to_string(i);
	while (cs.length() < 3) {
		cs = '0' + cs;
	}
	maCanBo = "CN" + cs;
}
void CongNhan::tinhLuong() {
	luong = bac * soNgay * heSo;
}
