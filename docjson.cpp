#include "docjson.h"
#include <fstream>
#include "json.hpp"

using namespace std;
using json = nlohmann::json;

vector<CauHoi> docFileJSON(const string& tenFile) {

    vector<CauHoi> ds;
    ifstream file(tenFile);

    json j;
    file >> j;

    for (auto& item : j) {

        CauHoi ch;

        ch.setNoiDung(item["noi_dung"]);
        ch.setA(item["dap_an_a"]);
        ch.setB(item["dap_an_b"]);
        ch.setC(item["dap_an_c"]);
        ch.setD(item["dap_an_d"]);

        string ans = item["dap_an_dung"];
        ch.setDapAnDung(ans[0]);
        ch.setDoKho(item["muc_do_kho"]);

        ds.push_back(ch);
    }

    return ds;
}
