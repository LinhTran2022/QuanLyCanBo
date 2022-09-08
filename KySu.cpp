#include "KySu.h"
KySu::KySu() {}
KySu::KySu(string ten, int tuoi, string gioiTinh, string diaChi, string sdt, string que, int heSo, int soNgay, int soNamKinhNghiem, string nganhDaoTao)
	: CanBo(ten, tuoi, gioiTinh, diaChi, sdt, que, heSo, soNgay) {
	this->nganhDaoTao = nganhDaoTao;
	this->soNamKinhNghiem = soNamKinhNghiem;
}
int KySu::getYear() {
	return soNamKinhNghiem;
}
void KySu::setYear(int nam) {
	soNamKinhNghiem = nam;
}
string KySu::getMajor() {
	return nganhDaoTao;
}
void KySu::setMajor(string nganh) {
	nganhDaoTao = nganh;
}
void KySu::setCode(int i) {
	string cs = to_string(i);
	while (cs.length() < 3) {
		cs = '0' + cs;
	}
	maCanBo = "KS" + cs;
}
void KySu::tinhLuong() {
	luong = soNamKinhNghiem * soNgay * heSo;
}