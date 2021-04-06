#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#define SIZE 5

int a[SIZE] = {9, 8, 7, 5, 10};

int swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void) {
    int min, index;

    for(int i = 0; i < SIZE; i++) {
        min = INT_MAX;
        for (int j = i; j < SIZE; j++) {
            if(min > a[j]) {
                min = a[j];
                index = j;
            }
        }
        swap(&a[i], &a[index]);
    }

    for (int i = 0; i < SIZE; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
