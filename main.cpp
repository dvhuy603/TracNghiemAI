#include <iostream>
#include <vector>
#include <ctime>

#include "docjson.h"
#include "lambai.h"
#include "danhgia.h"

using namespace std;

int main() {

    srand(time(0));

    vector<CauHoi> ds = docFileJSON("cau_hoi.json");
    vector<char> userAns;
    vector<int> idxList;

    int chon;

    do {
        cout << "\n=====================\n";
        cout << "  TRAC NGHIEM AI\n";
        cout << "=====================\n";
        cout << "1. Lam bai ngau nhien\n";
        cout << "2. Lam bai theo do kho\n";
        cout << "3. Xem ket qua\n";
        cout << "0. Thoat\n";
        cout << "Chon: ";
        cin >> chon;

        if (chon == 1) {
            userAns.clear();
            idxList.clear();
            lamBaiNgauNhien(ds, userAns, idxList);
        }
        else if (chon == 2) {
            userAns.clear();
            idxList.clear();

            int level;
            cout << "Nhap do kho (1-3): ";
            cin >> level;

            lamBaiTheoDoKho(ds, userAns, idxList, level);
        }
        else if (chon == 3) {
            if (userAns.empty())
                cout << "\nBan chua lam bai!\n";
            else
                hienThiDanhGia(ds, userAns, idxList);
        }

    } while (chon != 0);

    return 0;
}
