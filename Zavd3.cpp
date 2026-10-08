#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> numbers = {10, 17, 24, 31, 40};
    for (auto it = numbers.rbegin(); it != numbers.rend(); ++it) {
        cout << *it << " ";
    }
    return 0;
}