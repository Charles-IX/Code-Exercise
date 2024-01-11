#include <stdio.h>

int maxBooks(int n, int t, int *books) {
    int left = 0, right = 0;
    int totalTime = 0, maxBooksRead = 0;

    while (right < n) {
        totalTime += books[right];

        while (totalTime > t) {
            totalTime -= books[left];
            left++;
        }

        int currentBooksRead = right - left + 1;
        maxBooksRead = (currentBooksRead > maxBooksRead) ? currentBooksRead : maxBooksRead;

        right++;
    }

    return maxBooksRead;
}

int main(void) {
    int n, t;
    scanf("%d %d", &n, &t);

    int books[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &books[i]);
    }

    int result = maxBooks(n, t, books);
    printf("%d", result);

    return 0;
}
