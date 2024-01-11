#include <stdio.h>

int binarySearch(int pile[], int n, int target) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (pile[mid] >= target)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return left + 1;
}

int main(void) {
    int n, m;
    scanf("%d", &n);
    int pile[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &pile[i]);
    }

    scanf("%d", &m);
    int label[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &label[i]);
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += pile[i];
        pile[i] = sum;
    }

    for (int i = 0; i < m; i++) {
        int target = binarySearch(pile, n, label[i]);
        printf("%d\n", target);
    }

    return 0;
}
