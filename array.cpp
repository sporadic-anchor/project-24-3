#include "array.h"

int max(int left, int right) {
    return (left > right) ? left : right;
}
int min(int left, int right) {
    return (left < right) ? left : right;
}
int min_index(int* massive, int size) {
    if (size <= 0) return -1;

    int minIdx = 0;
    for (int i = 1; i < size; i++) {
        if (massive[i] < massive[minIdx]) {
            minIdx = i;
        }
    }
    return minIdx;
}
int max_index(int* massive, int size) {
    if (size <= 0) return -1;

    int maxIdx = 0;
    for (int i = 1; i < size; i++) {
        if (massive[i] > massive[maxIdx]) {
            maxIdx = i;
        }
    }
    return maxIdx;
}