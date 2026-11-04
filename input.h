#pragma once
#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <string>

int readInt(const std::string& prompt, int minValue, int maxValue);
std::string readLine(const std::string& prompt);

std::vector<int> readVector(int n, const std::string& name);
std::deque<int>  readDeque(int n, const std::string& name);
std::list<int>   readList(int n, const std::string& name);

void printVector(const std::vector<int>& v, const std::string& name);
void printDeque(const std::deque<int>& d, const std::string& name);
void printList(const std::list<int>& l, const std::string& name);