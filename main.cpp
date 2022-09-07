#include "QLCB.h"
int main() {
	QLCB ql;
	int ip;
	string Ten;
	while (1) {
		cout << "================= MENU ==================\n";
		cout << "1. Them can bo\n2. Tim can bo\n3. Tinh luong cho can bo\n4. Thoat chuong trinh\n";
		cout << "=========================================\n";
		cin >> ip;
		switch (ip) {
		case 1:
			ql.themCanBo();
			break;
		case 2:
			cout << "Nhap ten can bo can tim : ";
			cin.ignore();
			getline(cin, Ten);
			ql.timCanBo(Ten);
			break;
		case 3:
			cout << "Tinh luong cho nhan vien ten : ";
			cin >> Ten;
			ql.tinhLuong(Ten);
			break;
		}
	}
}