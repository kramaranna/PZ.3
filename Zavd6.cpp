#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> numbers = {10, 17, 24, 31, 40};
    int sum = 0;
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        sum += *it;
    }
    cout << "Сума: " << sum << endl;
    cout << "Список у зворотному порядку: ";
    for (auto it = numbers.rbegin(); it != numbers.rend(); ++it) {
        cout << *it << " ";
    }
    return 0;
}