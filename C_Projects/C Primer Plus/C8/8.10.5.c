// 猜用户所想的一个数。这个数应该是大于0小于100的整数。
// 每次猜到后会问用户是猜大了还是猜小了还是刚刚好，通过二分法最终找到答案。
#include <stdio.h>
#include <string.h>
int judge(char arr[], int *n, int *max, int *min);

int main(void){
    int n = 50, max = 100, min = 0;
    int ans;
    char arr[10];
    printf("Pick an integer from 1 to 100. I will try to guess it.\n");
    printf("Tell me if my answer is too great or too small.\n");
    printf("Is it 50 ?\n");
    while (1){
        printf("Tell me, is my answer 'greater' or 'smaller' or 'hit'?\n");
        scanf("%s", arr);
        ans = judge(arr, &n, &max, &min);
        if (ans == n){
            printf("I know it's %d !\n", ans);
            break;
        }
        else if (ans == 114){
            printf("I can only recognize 'greater', 'smaller', 'hit'.\n");
            continue;
        }
        else{
            printf("Well then, is it %d ?\n", ans);
        }
        n = ans;
    }
    return 0;
}

int judge(char arr[], int *n, int *max, int *min){
    if (strcmp(arr, "greater") == 0){
        *max = *n;
        return (*min + *n) / 2;
    }
    else if (strcmp(arr, "smaller") == 0){
        *min = *n;
        return (*max + *n) / 2;
    }
    else if (strcmp(arr, "hit") == 0){
        return *n;
    }
    else return 114;
}
