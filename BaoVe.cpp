# include "BaoVe.h"
BaoVe::BaoVe(){}
/*BaoVe::BaoVe(string ten, int tuoi, string gioiTinh, string diaChi, string sdt, string que, int heSo, int soNgay, string khuVuc)
	: CanBo(ten, tuoi, gioiTinh, diaChi, sdt, que, heSo, soNgay) {
	this->khuVuc = khuVuc;
}*/
string BaoVe::getArea() {
	return khuVuc;
}
void BaoVe::setArea(string khu) {
	khuVuc = khu;
}
void BaoVe::setCode(int i) {
	string cs;
	cs = to_string(i);
	while (cs.length() < 3) {
		cs = '0' + cs;
	}
	maCanBo = "BV" + cs;
}
void BaoVe::tinhLuong() {
	luong = soNgay * heSo;
}