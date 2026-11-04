#include "task8.h"
#include "input.h"
#include <list>
#include <deque>
#include <string>
#include <numeric>
#include <iterator>
#include <iostream>

void task8() {
    std::cout << "\n=== Задание 8, задача 2 ===\n";
    int n = readInt("Количество слов в списке L (не менее 2): ", 2, 1000000);
    std::list<std::string> L;
    for (int i = 0; i < n; ++i) {
        std::string w = readLine("  слово: ");
        L.push_back(w);
    }

    std::deque<std::string> D;

    std::adjacent_difference(
        L.begin(), L.end(),
        std::back_inserter(D),
        [](const std::string& prev, const std::string& cur) {
            std::string res;
            res += prev[0];
            res += cur[cur.size() - 1];
            return res;
        });

    if (!D.empty()) D.erase(D.begin());

    std::cout << "Полученный дек D: ";
    for (std::deque<std::string>::iterator it = D.begin(); it != D.end(); ++it)
        std::cout << *it << ' ';
    std::cout << '\n';
}