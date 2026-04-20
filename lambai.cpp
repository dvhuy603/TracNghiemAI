#include "lambai.h"
#include <iostream>
#include <cstdlib>
#include <cctype>

using namespace std;

vector<int> loc(vector<CauHoi>& ds, int level) {
    vector<int> kq;
    for (int i = 0; i < ds.size(); i++) {
        if (ds[i].getDoKho() == level)
            kq.push_back(i);
    }
    return kq;
}

void lamBaiNgauNhien(vector<CauHoi>& ds,
                     vector<char>& userAns,
                     vector<int>& idxList) {

    userAns.clear();
    idxList.clear();

    vector<bool> used(ds.size(), false);
    int soCau = min(10, (int)ds.size());

    for (int i = 0; i < soCau; i++) {

        int idx;
        do {
            idx = rand() % ds.size();
        } while (used[idx]);

        used[idx] = true;

        idxList.push_back(idx);

        cout << "\nCau " << i + 1 << ": " << ds[idx].getNoiDung() << endl;
        cout << "A. " << ds[idx].getA() << endl;
        cout << "B. " << ds[idx].getB() << endl;
        cout << "C. " << ds[idx].getC() << endl;
        cout << "D. " << ds[idx].getD() << endl;

        char tl;
        cin >> tl;

        userAns.push_back(toupper(tl));
    }
}

void lamBaiTheoDoKho(vector<CauHoi>& ds,
                     vector<char>& userAns,
                     vector<int>& idxList,
                     int level) {

    userAns.clear();
    idxList.clear();

    vector<int> pool = loc(ds, level);
    if (pool.empty()) {
        cout << "\nKhong co cau hoi do kho nay!\n";
        return;
    }

    vector<bool> used(pool.size(), false);
    int soCau = min(10, (int)pool.size());

    for (int i = 0; i < soCau; i++) {

        int r;
        do {
            r = rand() % pool.size();
        } while (used[r]);

        used[r] = true;

        int idx = pool[r];

        idxList.push_back(idx);

        cout << "\nCau " << i + 1 << ": " << ds[idx].getNoiDung() << endl;
        cout << "A. " << ds[idx].getA() << endl;
        cout << "B. " << ds[idx].getB() << endl;
        cout << "C. " << ds[idx].getC() << endl;
        cout << "D. " << ds[idx].getD() << endl;

        char tl;
        cin >> tl;

        userAns.push_back(toupper(tl));
    }
}
