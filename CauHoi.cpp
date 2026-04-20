#include "cauhoi.h"

// constructor
CauHoi::CauHoi() {
    data.noi_dung = "";
    data.dap_an_a = "";
    data.dap_an_b = "";
    data.dap_an_c = "";
    data.dap_an_d = "";
    data.dap_an_dung = 'A';
    data.muc_do_kho = 1;
}

// setter
void CauHoi::setNoiDung(string s) { data.noi_dung = s; }
void CauHoi::setA(string s) { data.dap_an_a = s; }
void CauHoi::setB(string s) { data.dap_an_b = s; }
void CauHoi::setC(string s) { data.dap_an_c = s; }
void CauHoi::setD(string s) { data.dap_an_d = s; }

void CauHoi::setDapAnDung(char c) { data.dap_an_dung = c; }
void CauHoi::setDoKho(int k) { data.muc_do_kho = k; }

// getter
string CauHoi::getNoiDung() const { return data.noi_dung; }
string CauHoi::getA() const { return data.dap_an_a; }
string CauHoi::getB() const { return data.dap_an_b; }
string CauHoi::getC() const { return data.dap_an_c; }
string CauHoi::getD() const { return data.dap_an_d; }

char CauHoi::getDapAnDung() const { return data.dap_an_dung; }

int CauHoi::getDoKho() const {
    return data.muc_do_kho;
}
