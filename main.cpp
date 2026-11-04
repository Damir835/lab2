#include <iostream>
#include "input.h"
#include "task1.h"
#include "task2.h"
#include "task3.h"
#include "task4.h"
#include "task5.h"
#include "task6.h"
#include "task7.h"
#include "task8.h"
#include "task9.h"
#include "task10.h"

int main() {
    while (true) {
        std::cout << "\n===== Лабораторная №2, вариант 6 =====\n"
                  << " 1 — Задание 1, задача 4\n"
                  << " 2 — Задание 2, задача 6\n"
                  << " 3 — Задание 3, задача 6\n"
                  << " 4 — Задание 4, задача 3\n"
                  << " 5 — Задание 5, задача 6\n"
                  << " 6 — Задание 6, задача 10\n"
                  << " 7 — Задание 7, задача 3\n"
                  << " 8 — Задание 8, задача 2\n"
                  << " 9 — Задание 9, задача 2\n"
                  << "10 — Задание 10, задача 4\n"
                  << " 0 — Выход\n";

        int choice = readInt("Выбор: ", 0, 10);
        if (choice == 0) break;

        switch (choice) {
            case 1: task1(); break;
            case 2: task2(); break;
            case 3: task3(); break;
            case 4: task4(); break;
            case 5: task5(); break;
            case 6: task6(); break;
            case 7: task7(); break;
            case 8: task8(); break;
            case 9: task9(); break;
            case 10: task10(); break;
        }
    }
    std::cout << "Готово.\n";
    return 0;
}