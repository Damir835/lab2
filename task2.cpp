#include "task2.h"
#include "input.h"
#include <vector>
#include <deque>
#include <iterator>
#include <iostream>

void task2() {
    std::cout << "\n=== Задание 2, задача 6 ===\n";
    int n = readInt("Чётный размер вектора V: ", 2, 1000000);
    while (n % 2) n = readInt("Чётное число: ", 2, 1000000);
    int m = readInt("Чётный размер дека D: ", 2, 1000000);
    while (m % 2) m = readInt("Чётное число: ", 2, 1000000);

    std::vector<int> V = readVector(n, "V");
    std::deque<int>  D = readDeque(m, "D");

    std::vector<int> secondHalfRev;
    for (int i = n - 1; i >= n / 2; --i)
        secondHalfRev.push_back(V[i]);

    std::deque<int>::iterator dmid = D.begin();
    std::advance(dmid, m / 2);
    V.insert(V.end(), D.begin(), dmid);

    D.insert(D.begin(), secondHalfRev.begin(), secondHalfRev.end());

    printVector(V, "V после вставки");
    printDeque(D, "D после вставки");
}