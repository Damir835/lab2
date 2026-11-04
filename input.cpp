#include "input.h"

int readInt(const std::string& prompt, int minValue, int maxValue) {
    while (true) {
        std::cout << prompt;
        std::string s;
        std::getline(std::cin, s);

        bool ok = !s.empty();
        int pos = 0;
        if (ok && (s[0] == '-' || s[0] == '+')) pos = 1;
        if (ok && pos == (int)s.size()) ok = false;
        for (int i = pos; ok && i < (int)s.size(); ++i)
            if (s[i] < '0' || s[i] > '9') ok = false;

        if (ok) {
            int x = 0;
            bool neg = (s[0] == '-');
            for (int i = pos; i < (int)s.size(); ++i)
                x = x * 10 + (s[i] - '0');
            if (neg) x = -x;
            if (x >= minValue && x <= maxValue) return x;
        }
        std::cout << "Ошибка ввода. Повторите.\n";
    }
}

std::string readLine(const std::string& prompt) {
    std::cout << prompt;
    std::string s;
    std::getline(std::cin, s);
    return s;
}

std::vector<int> readVector(int n, const std::string& name) {
    std::vector<int> v;
    std::cout << "Ввод вектора " << name << " (" << n << " элементов):\n";
    for (int i = 0; i < n; ++i) {
        std::cout << "  элемент " << i + 1 << ": ";
        int x;
        std::cin >> x;
        std::cin.ignore();
        v.push_back(x);
    }
    return v;
}

std::deque<int> readDeque(int n, const std::string& name) {
    std::deque<int> d;
    std::cout << "Ввод дека " << name << " (" << n << " элементов):\n";
    for (int i = 0; i < n; ++i) {
        std::cout << "  элемент " << i + 1 << ": ";
        int x;
        std::cin >> x;
        std::cin.ignore();
        d.push_back(x);
    }
    return d;
}

std::list<int> readList(int n, const std::string& name) {
    std::list<int> l;
    std::cout << "Ввод списка " << name << " (" << n << " элементов):\n";
    for (int i = 0; i < n; ++i) {
        std::cout << "  элемент " << i + 1 << ": ";
        int x;
        std::cin >> x;
        std::cin.ignore();
        l.push_back(x);
    }
    return l;
}

void printVector(const std::vector<int>& v, const std::string& name) {
    std::cout << name << ": ";
    for (std::vector<int>::const_iterator it = v.begin(); it != v.end(); ++it)
        std::cout << *it << ' ';
    std::cout << '\n';
}

void printDeque(const std::deque<int>& d, const std::string& name) {
    std::cout << name << ": ";
    for (std::deque<int>::const_iterator it = d.begin(); it != d.end(); ++it)
        std::cout << *it << ' ';
    std::cout << '\n';
}

void printList(const std::list<int>& l, const std::string& name) {
    std::cout << name << ": ";
    for (std::list<int>::const_iterator it = l.begin(); it != l.end(); ++it)
        std::cout << *it << ' ';
    std::cout << '\n';
}