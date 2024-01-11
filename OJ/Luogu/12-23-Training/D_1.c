#include <stdio.h>
#include <stdlib.h>

// 比较函数用于排序
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // 将数组按升序排序
    qsort(a, n, sizeof(int), compare);

    int i = 0, j = 0;
    long long count = 0;

    while (i < n && j < n) {
        if (a[i] == a[j]) {
            j++;
        } else {
            // 累加数对数量
            count += (long long)(j - i);
            i++;
        }
    }

    // 由于每对数对被计算两次，需要除以2
    printf("%lld\n", count / 2);

    return 0;
}
