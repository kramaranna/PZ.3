#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
    list<int> numbers = {10, 17, 24, 31, 40};
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    return 0;
}
