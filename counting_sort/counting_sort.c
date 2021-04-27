#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_VALUE 10

int n, m;
int a[MAX_VALUE];

int main() {
    //scanf("%d", &n);
    int n = 8;
    int m[8] = {4, 7, 2, 1, 5, 1, 6, 2};

    for (int i = 0; i < n; i++) { a[m[i]]++; }
    for (int i = 0; i < n; i++) {
    	while (a[i] != 0) { printf("%d ", i); a[i]--; }
    }
    return 0;
}