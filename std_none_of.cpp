#include <iostream>
#include <algorithm>   // for none_of()

using namespace std;

int main() {
    // инициализирующий массив
    int ar[6] = {1, 2, 3, 4, 5, 6};

    // проверка, нет ли отрицательного элемента
    none_of(ar, ar+6, [](int x) { return x<0; })?
        cout << "No negative elements":
        cout << "There are negative elements";
    
    
    return 0;
}