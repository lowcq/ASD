#include <iostream>
#include <list>
using namespace std;

int main() {
    int q;  // колво запросов
    cin >> q;

    list<int> lst;  // двусвязный список

    while (q--) {
        int type;  
        cin >> type;

        if (type == 1) {  
            int x, y;
            cin >> x >> y;

            auto it = lst.begin();  // Итератор на начало списка
            advance(it, x);  
            lst.insert(it, y);  

        }
        else if (type == 2) {  // вывод элемента
            int x;
            cin >> x;

            auto it = lst.begin();  // Итератор на начало списка
            advance(it, x - 1);  
            cout << *it << endl;  

        }
        else if (type == 3) {  // удаление элемента
            int x;
            cin >> x;

            auto it = lst.begin();  // Итератор на начало списка
            advance(it, x - 1);  
            lst.erase(it);  
        }
    }

    return 0;
}
