#pragma once
#include "CanBo.h"
#include "CongNhan.h"
#include "KySu.h"
#include "BaoVe.h"
class QLCB {
	vector<CongNhan> congNhan;
	vector<BaoVe> baoVe;
	vector<KySu> kySu;
public:
	void themCanBo();
	void timCanBo(string Ten);
	void tinhLuong(string Ten);
};
