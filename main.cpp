#include <iostream>
#include "array.h"
using namespace std;

int main() {
    const int size{5};
    int array[] = {5, 1, 2, 6, 1};
    
    cout << "Сумма элементов: " << sum(array, 5, 0, 5) << endl;

    cout << "Максимальное чисел: " << max(2, 6) << "\n";
    cout << "Минимальное чисел: " << min(2, 6) << "\n";
    
    cout << "Индекс минимального элемента: " << min_index(array, size) << "\n";
    cout << "Индекс максимального элемента: " << max_index(array, size) << "\n";

    return 0;
}