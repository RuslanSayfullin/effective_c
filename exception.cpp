#include <iostream>

using namespace std;

int main() {
    int x = -1;

    cout << "Before try \n";

    try {
        cout << "In try \n";
        if (x < 0) {
            throw x;
            cout << "After throw (Never ) \n";
        }
    }

    catch (int x) {
        cout << "Exception catch \n";
    }

    cout << "After catch ";

    return 0;
}