#include <stdio.h>

typedef long long ll;

ll countDistinctPairs(int n, int arr[]) {
    int *lastOccurrence = (int *)calloc(n + 1, sizeof(int));
    int totalPairs = 0;

    for (int i = 0; i < n; i++) {
        totalPairs += i - lastOccurrence[arr[i]];
        lastOccurrence[arr[i]] = i + 1;
    }

    free(lastOccurrence);

    return totalPairs;
}

int main() {
    int n;
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    ll result = countDistinctPairs(n, arr);
    printf("%lld\n", result);

    free(arr);

    return 0;
}
