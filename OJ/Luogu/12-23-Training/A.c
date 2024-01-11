#include <stdio.h>
int main(void){
    int n, m;
    scanf("%d", &n);
    int pile[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &pile[i]);
    }
    scanf("%d", &m);
    int label[m];
    for (int i = 0; i < m; i++){
        scanf("%d", &label[i]);
    }
    for (int i = 0; i < m; i++){
        int sum = 0;
        int target;
        for (int j = 0; j < n; j++){
            sum += pile[j];
            if (label[i] <= sum){
                target = j + 1;
                break;
            }
        }
        printf("%d\n", target);
    }
    return 0;
}

// 代码时间复杂度为O(n * m), 提交后TLE.