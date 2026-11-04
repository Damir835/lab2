#include "task7.h"
#include "input.h"
#include <vector>
#include <algorithm>
#include <functional>
#include <iterator>
#include <iostream>

void task7() {
    std::cout << "\n=== Задание 7, задача 3 ===\n";
    int n = readInt("Размер вектора V (не менее 3): ", 3, 1000000);
    std::vector<int> V = readVector(n, "V");

    std::partial_sort(V.begin(), V.begin() + 3, V.end(), std::greater<int>());

    std::cout << "Три последних после сортировки по возрастанию (в порядке убывания): ";
    std::copy(V.begin(), V.begin() + 3, std::ostream_iterator<int>(std::cout, " "));
    std::cout << '\n';
}