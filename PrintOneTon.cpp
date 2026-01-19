#include <iostream>

using namespace std;

template<int N>
class PrintOneToN {
    public:
        static void print() {
            // Обратите внимание, что это не рекурсия
            PrintOneToN<N-1>::print();
            cout << N << endl;
        }
};

template<>
class PrintOneToN<1> {
    public:
        static void print() {
            cout << 1 << endl;
        }
};

int main() {
    const int N = 100;
    PrintOneToN<N>::print();

    return 0;
}
