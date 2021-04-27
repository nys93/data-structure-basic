#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 12

void radixSort(int *a, int n) {
    int res[MAX], maxValue = 0;
    int exp = 1;

    for (int i = 0; i <n; i++) {
        if(a[i] > maxValue) maxValue = a[i];
    }

    while (maxValue / exp > 0) {
        int bucket[10] = { 0 };
        for (int i = 0; i < n; i++) bucket[a[i] / exp % 10] ++; //자릿수 배열 처리
        for (int i = 1; i < 10; i++) bucket[i] += bucket[i -1]; //누적 계산
        for (int i = n - 1; i >= 0; i--){ //같은 자릿수 기리는 순서를 유지
          res[--bucket[a[i] / exp % 10]] = a[i];
        }
        for (int i = 0; i < n; i++) a[i] = res[i]; // 기본 배열 갱신
        exp *= 10;

    }

}

int main(void) {
    int a[MAX] = {17, 1, 83, 202, 55, 4, 88, 81, 15, 47, 19, 28};
    int n = 12;

    radixSort(a, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}