# PZ.3
# Практична робота №3: Реалізація списків. Двозв’язний список.
**Виконав:** студент групи 4СОМ, Крамар Анна (Варіант № 4)

##  Завдання.
<img width="992" height="804" alt="image" src="https://github.com/user-attachments/assets/32b2ab10-ba1e-4a13-b6fe-f7264eab9234" />

### 💻 Код програми:
```cpp
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
```
---
```cpp
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
```
---
```cpp
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
```
---
```cpp
#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> numbers = {10, 17, 24, 31, 40};
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        *it = *it * 3;
    }
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    return 0;
}
```
---
```cpp
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
```
---
```cpp
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
```

### Результат виконання програм:
<img width="1488" height="471" alt="image" src="https://github.com/user-attachments/assets/f1cc989b-4fa4-47db-90ab-30483421b06d" />
<img width="1512" height="831" alt="image" src="https://github.com/user-attachments/assets/6a6a9e8e-8e92-404f-aa55-ef6004e414e0" />
<img width="1406" height="490" alt="image" src="https://github.com/user-attachments/assets/592587cf-b6cd-4dc4-bda6-aa5faa9c7fb8" />
<img width="1396" height="669" alt="image" src="https://github.com/user-attachments/assets/1a18f3ff-7162-4f7e-aa5c-8f42aed09a5f" />
<img width="1249" height="722" alt="image" src="https://github.com/user-attachments/assets/14900734-73d7-482d-bb16-0b5a57630c73" />
<img width="1256" height="583" alt="image" src="https://github.com/user-attachments/assets/a968b494-6b25-4b6d-b205-5417091a1022" />


### 👁️ Візуалізація пам'яті:

### Висновок.
