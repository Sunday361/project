#include <iostream>
#include <mysort.h>
using namespace std;

int main() {
<<<<<<< HEAD
    cout << "hello world\n";
=======
    vector<int> v(10);
    for (int i = 0; i < 10; i++) {
        cin >> v[i];
    }
    myQuickSort(v, 0, v.size() - 1);
    return 0;
>>>>>>> 1708ee0... add input from keyboard
}