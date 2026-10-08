#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> numbers = {10, 17, 24, 31, 40};
    cout<<"Почаковий список"<<endl;
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    cout<<" "<<endl;
    numbers.push_front(1);
    numbers.push_back(80);
    cout<<"Додано елемент попереду і ззаду"<<endl;
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    cout<<" "<<endl;
    numbers.pop_front();
    cout<<"Видалено перший елемент"<<endl;
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    return 0;
}