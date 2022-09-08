#include "CanBo.h"
CanBo::CanBo() {}
CanBo::CanBo(string ten, int tuoi, string gioiTinh, string diaChi, string sdt, string que, int heSo, int soNgay) {
	this->ten = ten;
	this->tuoi = tuoi;
	this->gioiTinh = gioiTinh;
	this->diaChi = diaChi;
	this->sdt = sdt;
	this-> que = que;
	this->heSo = heSo;
	this->soNgay = soNgay;
}
string CanBo::getName() {
	return ten;
}
void CanBo::setName(string ten) {
	this->ten = ten;
}
int CanBo::getAge() {
	return tuoi;
}
void CanBo::setAge(int tuoi) {
	this->tuoi = tuoi;
}
string CanBo::getSex() {
	return gioiTinh;
}
void CanBo::setSex(string gioiTinh) {
	this->gioiTinh = gioiTinh;
}
string CanBo::getAddress() {
	return diaChi;
}
void CanBo::setAddress(string diaChi) {
	this->diaChi = diaChi;
}
string CanBo::getNumber() {
	return sdt;
}
void CanBo::setNumber(string sdt) {
	this->sdt = sdt;
}
string CanBo::getHomeTown() {
	return que;
}
void CanBo::setHomeTown(string que) {
	this->que = que;
}
string CanBo::getCode() {
	return maCanBo;
}
int CanBo::getHeSo() {
	return heSo;
}
void CanBo::setHeso(int heSo) {
	this->heSo = heSo;
}
int CanBo::getDay() {
	return soNgay;
}
void CanBo::setDay(int soNgay) {
	this->soNgay = soNgay;
}
int CanBo::getSalary() {
	return luong;
}