#ifndef LAMBAI_H
#define LAMBAI_H

#include <vector>
#include "cauhoi.h"

void lamBaiNgauNhien(std::vector<CauHoi>& ds,
                     std::vector<char>& userAns,
                     std::vector<int>& idxList);

void lamBaiTheoDoKho(std::vector<CauHoi>& ds,
                     std::vector<char>& userAns,
                     std::vector<int>& idxList,
                     int level);

#endif
