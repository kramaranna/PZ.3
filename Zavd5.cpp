#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> numbers = {10, 17, 24, 31, 40};
    // Видалення першого елемента, більшого за 30
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        if (*it > 30) {
            numbers.erase(it);
            break;
        }
    }
    // Вставка -1 перед кожним елементом, який ділиться на 4
    auto it = numbers.begin();
    while (it != numbers.end()) {
        if (*it % 4 == 0) {
            numbers.insert(it, -1);
            ++it;
            ++it;
        } else {
            ++it;
        }
    }
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }

    return 0;
}