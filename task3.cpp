#include "task3.h"
#include "input.h"
#include <list>
#include <iterator>
#include <iostream>

void task3() {
    std::cout << "\n=== Задание 3, задача 6 ===\n";
    int n2 = readInt("Чётный размер списка L2: ", 2, 1000000);
    while (n2 % 2) n2 = readInt("Чётное число: ", 2, 1000000);
    int n1 = readInt("Размер списка L1: ", 1, 1000000);

    std::list<int> L1 = readList(n1, "L1");
    std::list<int> L2 = readList(n2, "L2");

    std::list<int>::iterator mid = L2.begin();
    std::advance(mid, n2 / 2);

    L1.splice(L1.begin(), L2, L2.begin(), mid);

    printList(L1, "L1 после переноса");
    printList(L2, "L2 после переноса");
}