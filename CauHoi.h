#ifndef CAUHOI_H
#define CAUHOI_H

#include <string>
using namespace std;

struct CauHoiData {
    string noi_dung;
    string dap_an_a, dap_an_b, dap_an_c, dap_an_d;
    char dap_an_dung;
    int muc_do_kho;
};

class CauHoi {
private:
    CauHoiData data;

public:
    CauHoi();

    void setNoiDung(string s);
    void setA(string s);
    void setB(string s);
    void setC(string s);
    void setD(string s);
    void setDapAnDung(char c);
    void setDoKho(int k);

    string getNoiDung() const;
    string getA() const;
    string getB() const;
    string getC() const;
    string getD() const;
    char getDapAnDung() const;
    int getDoKho() const;
};

#endif
