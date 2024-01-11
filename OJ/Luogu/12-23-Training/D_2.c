#include <stdio.h>
#include <stdlib.h>

typedef long long ll;

ll countDistinctPairs(int n, int arr[]) {
    ll *frequency = (ll*)calloc(1000000001, sizeof(ll)); // 数字的范围在 1 到 1e9 之间

    ll totalPairs = 0;
    for (int i = 0; i < n; i++) {
        totalPairs += i - frequency[arr[i]];
        frequency[arr[i]]++;
    }

    free(frequency);

    return totalPairs;
}

int main(void) {
    int n;
    scanf("%d", &n);

    int *arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    ll result = countDistinctPairs(n, arr);
    printf("%lld", result);

    free(arr);

    return 0;
}
