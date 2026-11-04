#include "task10.h"
#include "input.h"
#include <vector>
#include <map>
#include <string>
#include <iostream>

void task10() {
    std::cout << "\n=== Задание 10, задача 4 ===\n";
    int n = readInt("Количество слов в векторе V: ", 1, 1000000);
    std::vector<std::string> V;
    for (int i = 0; i < n; ++i) {
        std::string w = readLine("  слово заглавными: ");
        V.push_back(w);
    }

    std::multimap<char, std::string> M;
    std::vector<std::string>::reverse_iterator rit;
    for (rit = V.rbegin(); rit != V.rend(); ++rit) {
        std::string w = *rit;
        char key = w[w.size() - 1];
        M.insert(std::pair<char, std::string>(key, w));
    }

    std::cout << "Результат группировки:\n";
    std::multimap<char, std::string>::iterator it;
    for (it = M.begin(); it != M.end(); ++it)
        std::cout << it->first << " : " << it->second << '\n';
}