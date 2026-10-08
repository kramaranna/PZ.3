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
<img width="820" height="398" alt="image" src="https://github.com/user-attachments/assets/fd8ea09a-13e9-4a15-ab5a-22b803942fd9" />
<img width="1437" height="797" alt="image" src="https://github.com/user-attachments/assets/ec8c616a-162f-4b86-9bcb-bc9736f5764a" />
<img width="723" height="310" alt="image" src="https://github.com/user-attachments/assets/09507294-aacc-4abe-966e-48f34a16b636" />
<img width="1455" height="833" alt="image" src="https://github.com/user-attachments/assets/dfb451c4-39c5-414d-9b7e-b87efb3132c5" />
<img width="1469" height="787" alt="image" src="https://github.com/user-attachments/assets/3c535ece-5c1b-4b27-a9d5-cb8d4043d42d" />
<img width="1450" height="788" alt="image" src="https://github.com/user-attachments/assets/3aa03f68-83e2-422b-906a-7ad2d67d1b2f" />
<img width="724" height="349" alt="image" src="https://github.com/user-attachments/assets/e56dca15-d316-4c92-a470-5066bb5a6abb" />
<img width="1455" height="814" alt="image" src="https://github.com/user-attachments/assets/5c5908bf-fc5f-4d87-bba2-9a129db9b44b" />
<img width="1461" height="780" alt="image" src="https://github.com/user-attachments/assets/f1d82400-43c2-435c-85b3-caa80066bd85" />
<img width="1470" height="806" alt="image" src="https://github.com/user-attachments/assets/10360656-72f9-4880-bb11-8ec48dd8b288" />
<img width="1497" height="753" alt="image" src="https://github.com/user-attachments/assets/a6770417-c5e0-4f54-8102-754dde4c7b5d" />
<img width="1415" height="809" alt="image" src="https://github.com/user-attachments/assets/ff6f3d00-b89a-4cec-8aba-a109f4011ec5" />
<img width="1495" height="808" alt="image" src="https://github.com/user-attachments/assets/2e323496-6702-420c-9ebd-f2b2005c6ce2" />
<img width="1492" height="857" alt="image" src="https://github.com/user-attachments/assets/fad812fe-bbf9-487c-b34b-e4857f25397a" />
<img width="1472" height="824" alt="image" src="https://github.com/user-attachments/assets/d3bd8a71-19b5-4245-8164-e0688de0599d" />


### Висновок.
Під час виконання практичної роботи я успішно реалізувала усі поставлені завдання, увесь написаний код працює коректно. Робота з двозв'язним списком дала змогу краще зрозуміти принципи його побудови та ефективного маніпулювання даними в обидва боки. Візуалізувати памʼять повністю вдалося, скріншоти прикріплені.
