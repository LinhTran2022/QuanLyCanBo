#include "QLCB.h"
void QLCB::themCanBo() {
	int pick;
	cout << "1. Cong Nhan\n2. Ky Su\n3. Bao Ve\n";
	cin >> pick;
	string ten, gioiTinh, diaChi, que, sdt;
	int tuoi, heSo, soNgay;
	cout << "Nhap ten : ";
	cin.ignore();
	getline(cin, ten);
	cout << "Nhap tuoi :";
	cin >> tuoi;
	cout << "Nhap gioi tinh : ";
	cin.ignore();
	getline(cin, gioiTinh);
	cout << "Nhap dia chi: ";
	cin.ignore();
	getline(cin, diaChi);
	cout << "Nhap so dien thoai : ";
	cin >> sdt;
	cout << "Nhap que quan : ";
	cin.ignore();
	getline(cin, que);
	cout << "Nhap he so luong : ";
	cin >> heSo;
	cout << "Nhap so ngay cong : ";
	cin >> soNgay;
	if (pick == 1) {
		CongNhan cn;
		int bac;
		cout << "Nhap bac : ";
		cin >> bac;
		int i = QLCB::congNhan.size() + 1;
		cn.setName(ten);
		cn.setAge(tuoi);
		cn.setAddress(diaChi);
		cn.setNumber(sdt);
		cn.setDay(soNgay);
		cn.setSex(gioiTinh);
		cn.setHomeTown(que);
		cn.setCode(i);
		cn.setHeso(heSo);
		cn.setLevel(bac);
		QLCB::congNhan.push_back(cn);
	}
	else if (pick == 2) {
		KySu ks;
		int nam;
		string nganh;
		cout << "Nhap so nam kinh nghiem : ";
		cin >> nam;
		cout << "Nhap nganh dao tao : ";
		cin.ignore();
		getline(cin, nganh);
		int i = QLCB::kySu.size() + 1;
		ks.setName(ten);
		ks.setAge(tuoi);
		ks.setAddress(diaChi);
		ks.setNumber(sdt);
		ks.setDay(soNgay);
		ks.setSex(gioiTinh);
		ks.setHomeTown(que);
		ks.setHeso(heSo);
		ks.setCode(i);
		ks.setMajor(nganh);
		ks.setYear(nam);
		QLCB::kySu.push_back(ks);
	}
	else if (pick == 3) {
		BaoVe bv;
		string khu;
		cout << "Nhap khu vuc : ";
		cin.ignore();
		getline(cin, khu);
		int i = QLCB::baoVe.size() + 1;
		bv.setName(ten);
		bv.setAge(tuoi);
		bv.setAddress(diaChi);
		bv.setNumber(sdt);
		bv.setDay(soNgay);
		bv.setSex(gioiTinh);
		bv.setHomeTown(que);
		bv.setHeso(heSo);
		bv.setArea(khu);
		bv.setCode(i);
		QLCB::baoVe.push_back(bv);
	}
}
void QLCB::timCanBo(string Ten) {
	for (int i = 0; i < QLCB::congNhan.size(); i++) {
		if (congNhan[i].getName() == Ten) {
			cout << "Ten : " << congNhan[i].getName() << endl;
			cout << "Tuoi : " << congNhan[i].getAge() << endl;
			cout << "Gioi Tinh : " << congNhan[i].getSex() << endl;
			cout << "SDT : " << congNhan[i].getNumber() << endl;
			cout << "Dia chi : " << congNhan[i].getAddress() << endl;
			cout << "Que quan : " << congNhan[i].getHomeTown() << endl;
			cout << "Ma can bo : " << congNhan[i].getCode() << endl;
			cout << "He so luong : " << congNhan[i].getHeSo() << endl;
			cout << "So ngay cong : " << congNhan[i].getDay() << endl;
			cout << "Bac : " << congNhan[i].getLevel() << endl;
			cout << "\n";
		}
	}
	for (int i = 0; i < QLCB::kySu.size(); i++) {
		if (kySu[i].getName() == Ten) {
			cout << "Ten : " << kySu[i].getName() << endl;
			cout << "Tuoi : " << kySu[i].getAge() << endl;
			cout << "Gioi Tinh : " << kySu[i].getSex() << endl;
			cout << "SDT : " << kySu[i].getNumber() << endl;
			cout << "Dia chi : " << kySu[i].getAddress() << endl;
			cout << "Que quan : " << kySu[i].getHomeTown() << endl;
			cout << "Ma can bo : " << kySu[i].getCode() << endl;
			cout << "He so luong : " << kySu[i].getHeSo() << endl;
			cout << "So ngay cong : " << kySu[i].getDay() << endl;
			cout << "Nganh dao tao : " << kySu[i].getMajor() << endl;
			cout << "So nam kinh nghiem : " << kySu[i].getYear() << endl;
			cout << "\n";
		}
	}
	for (int i = 0; i < QLCB::baoVe.size(); i++) {
		if (baoVe[i].getName() == Ten) {
			cout << "Ten : " << baoVe[i].getName() << endl;
			cout << "Tuoi : " << baoVe[i].getAge() << endl;
			cout << "Gioi Tinh : " << baoVe[i].getSex() << endl;
			cout << "SDT : " << baoVe[i].getNumber() << endl;
			cout << "Dia chi : " << baoVe[i].getAddress() << endl;
			cout << "Que quan : " << baoVe[i].getHomeTown() << endl;
			cout << "Ma can bo : " << baoVe[i].getCode() << endl;
			cout << "He so luong : " << baoVe[i].getHeSo() << endl;
			cout << "So ngay cong : " << baoVe[i].getDay() << endl;
			cout << "Khu vuc bao ve : " << baoVe[i].getArea() << endl;
			cout << "\n";
		}
	}
}
void QLCB::tinhLuong(string Ten) {
	for (int i = 0; i < QLCB::congNhan.size(); i++) {
		if (congNhan[i].getName() == Ten) {
			congNhan[i].tinhLuong();
			cout << congNhan[i].getCode() << " : " << congNhan[i].getSalary() << endl;
		}
	}
	for (int i = 0; i < QLCB::kySu.size(); i++) {
		if (kySu[i].getName() == Ten) {
			kySu[i].tinhLuong();
			cout << kySu[i].getCode() << " : " << kySu[i].getSalary() << endl;
		}
	}
	for (int i = 0; i < QLCB::baoVe.size(); i++) {
		if (baoVe[i].getName() == Ten) {
			baoVe[i].tinhLuong();
			cout << baoVe[i].getCode() << " : " << baoVe[i].getSalary() << endl;
		}
	}
}