#include <iostream>
#include "array.h"
using namespace std;

int main() {
    const int size{5};
    int array[size]{5, 1, 2, 6, 1};

    cout << "Максимальное число: " << max(2, 6) << "\n";
    cout << "Минимальное число: " << min(2, 6) << "\n";
    
    cout << "Индекс минимального элемента: " << min_index(array, size) << "\n";
    cout << "Индекс максимального элемента: " << max_index(array, size) << "\n";

    int i_min = min_index(array, size);
    int i_max = max_index(array, size);
    cout << "i_min: " << i_min << "\ti_max: " << i_max << '\n';

    int begin = min(i_min, i_max);
    int end = max(i_min, i_max);
    int _sum = sum(array, size, begin, end);
    cout << "Сумма элементов между i_min и i_max: " << _sum << '\n';

    return 0;
}