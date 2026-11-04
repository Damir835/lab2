#include "task5.h"
#include "input.h"
#include <vector>
#include <list>
#include <algorithm>
#include <iterator>
#include <iostream>

void task5() {
    std::cout << "\n=== Задание 5, задача 6 ===\n";
    int n = readInt("Чётный размер вектора V: ", 2, 1000000);
    while (n % 2) n = readInt("Чётное число: ", 2, 1000000);
    int m = readInt("Размер списка L: ", 1, 1000000);

    std::vector<int> V = readVector(n, "V");
    std::list<int>   L = readList(m, "L");

    std::vector<int>::iterator vmid = V.begin();
    std::advance(vmid, n / 2);

    std::list<int>::reverse_iterator rit =
        std::find_first_of(L.rbegin(), L.rend(), V.begin(), vmid);

    if (rit == L.rend()) {
        std::cout << "Подходящих элементов в списке нет — L не изменяется.\n";
        printList(L, "L");
        return;
    }

    std::list<int>::iterator it = rit.base();
    --it;

    int value = *it;
    ++it;
    L.insert(it, value);

    printList(L, "L после дублирования");
}