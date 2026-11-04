#include "task6.h"
#include "input.h"
#include <vector>
#include <algorithm>
#include <iterator>
#include <iostream>

void task6() {
    std::cout << "\n=== Задание 6, задача 10 ===\n";
    int n = readInt("Чётный размер вектора V: ", 2, 1000000);
    while (n % 2) n = readInt("Чётное число: ", 2, 1000000);
    std::vector<int> V = readVector(n, "V");

    std::vector<int>::iterator mid = V.begin();
    std::advance(mid, n / 2);

    std::replace_if(V.begin(), mid, [](int x) { return x < 0; }, -1);
    std::replace_if(mid, V.end(), [](int x) { return x > 0; }, 1);

    printVector(V, "V после замен");
}