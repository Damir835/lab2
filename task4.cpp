#include "task4.h"
#include "input.h"
#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>

void task4() {
    std::cout << "\n=== Задание 4, задача 3 ===\n";
    int n = readInt("Количество вещественных чисел: ", 2, 1000000);
    std::vector<double> src;
    for (int i = 0; i < n; ++i) {
        std::cout << "  число " << i + 1 << ": ";
        double x; std::cin >> x; std::cin.ignore();
        src.push_back(x);
    }

    std::ostream_iterator<double> out(std::cout, " ");

    int index = 0;
    std::remove_copy_if(src.begin(), src.end(), out,
        [&index](double) { return (index++ % 2) == 0; });

    std::cout << '\n';
}