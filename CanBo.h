#pragma once
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class CanBo {
protected:
	string ten;
	int tuoi;
	string gioiTinh;
	string diaChi;
	string sdt;
	string que;
	string maCanBo;
	int heSo;
	int soNgay;
	int luong;
public:
	CanBo();
	CanBo(string ten, int tuoi, string gioiTinh, string diaChi, string sdt, string que,int heSo, int soNgay);
	string getName();
	void setName(string ten);
	int getAge();
	void setAge(int tuoi);
	string getSex();
	void setSex(string gioiTinh);
	string getAddress();
	void setAddress(string diaChi);
	string getNumber();
	void setNumber(string sdt);
	string getHomeTown();
	void setHomeTown(string que);
	string getCode();
	int getHeSo();
	void setHeso(int heSo);
	int getDay();
	void setDay(int soNgay);
	int getSalary();
};