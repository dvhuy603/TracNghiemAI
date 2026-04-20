#include "danhgia.h"
#include <iostream>
#include <fstream>
#define RESET  "\033[0m"
#define GREEN  "\033[32m"
#define RED    "\033[31m"

using namespace std;

void hienThiDanhGia(const vector<CauHoi>& ds,
                    const vector<char>& userAns,
                    const vector<int>& idxList) {

    int diem = 0;
    ofstream file("ketqua.txt");

    cout << "\n===== KET QUA =====\n";
    file << "===== KET QUA =====\n";

    for (int i = 0; i < userAns.size(); i++) {

        char dung = ds[idxList[i]].getDapAnDung();

        cout << "Cau " << i + 1 << ": ";

        if (userAns[i] == dung) {
            cout << GREEN << "DUNG" << RESET << endl;
            file << "Cau " << i + 1 << ": DUNG\n";
            diem++;
        } else {
            cout << RED << "SAI (Dung: " << dung << ")" << RESET << endl;
            file << "Cau " << i + 1 << ": SAI (Dung: " << dung << ")\n";
        }
    }

    float t = (float)diem / userAns.size();

    cout << "\nDIEM: " << diem << "/" << userAns.size() << endl;
    file << "\nDIEM: " << diem << "/" << userAns.size() << endl;

    string xl;

    if (t >= 0.9) xl = "Xuat sac";
    else if (t >= 0.75) xl = "Gioi";
    else if (t >= 0.5) xl = "Trung binh";
    else xl = "Yeu";

    cout << "Xep loai: " << xl << endl;
    file << "Xep loai: " << xl << endl;

    file.close();
}
