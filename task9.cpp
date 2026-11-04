#include "task9.h"
#include "input.h"
#include <vector>
#include <set>
#include <algorithm>
#include <iostream>

void task9() {
    std::cout << "\n=== Задание 9, задача 2 ===\n";
    int n0 = readInt("Размер вектора V0: ", 1, 1000000);
    std::vector<int> V0 = readVector(n0, "V0");

    int N = readInt("Количество векторов N (>0): ", 1, 1000);

    std::multiset<int> s0(V0.begin(), V0.end());

    int count = 0;
    for (int i = 1; i <= N; ++i) {
        std::cout << "Вектор V" << i << ":\n";
        int ni = readInt("  размер (не меньше размера V0): ", n0, 1000000);
        std::vector<int> Vi = readVector(ni, "V" + std::string(i, ' '));

        std::multiset<int> si(Vi.begin(), Vi.end());
        if (std::includes(si.begin(), si.end(), s0.begin(), s0.end()))
            ++count;
    }

    std::cout << "Количество векторов, содержащих все элементы V0 с учётом повторений: "
              << count << '\n';
}