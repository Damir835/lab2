#include "task1.h"
#include "input.h"
#include <deque>
#include <vector>
#include <iterator>
#include <iostream>

void task1() {
    std::cout << "\n=== Задание 1, задача 4 ===\n";
    int n = readInt("Введите чётное количество элементов: ", 2, 1000000);
    while (n % 2 != 0)
        n = readInt("Количество должно быть чётным: ", 2, 1000000);

    std::vector<int> src;
    for (int i = 0; i < n; ++i) {
        std::cout << "  элемент " << i + 1 << ": ";
        int x; std::cin >> x; std::cin.ignore();
        src.push_back(x);
    }

    std::deque<int> D(src.begin(), src.end());

    std::deque<int>::iterator mid = D.begin();
    std::advance(mid, n / 2);

    std::cout << "Первая половина в обратном порядке: ";
    std::deque<int>::reverse_iterator r1(mid);
    for (; r1 != D.rend(); ++r1)
        std::cout << *r1 << ' ';
    std::cout << "\nВторая половина в обратном порядке: ";
    std::deque<int>::reverse_iterator r2(D.end());
    std::deque<int>::reverse_iterator r2end(mid);
    for (; r2 != r2end; ++r2)
        std::cout << *r2 << ' ';
    std::cout << '\n';
}