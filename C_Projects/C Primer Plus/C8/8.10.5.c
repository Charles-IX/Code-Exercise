// 猜用户所想的一个数。这个数应该是大于0小于100的整数。
// 每次猜到后会问用户是猜大了还是猜小了还是刚刚好，通过二分法最终找到答案。
#include <stdio.h>
#include <string.h>
int judge(char arr[], int n);

int main(void){
    int n = 50;
    int judge;
    char arr[10];
    printf("Pick an integer from 1 to 100. I will try to guess it.\n");
    printf("Tell me if my answer is too great or too small.\n");
    printf("Is it 50?\n");
    while (1){
        printf("Tell me, is my answer 'greater' or 'smaller' or 'hit'?\n");
        scanf("%s", arr);
        judge(arr, n) = judge;
        

        
    }
    
}

int judge(char arr[], int n){
    if (strcmp(arr, "greater") == 0){
        return (n + 100) / 2;
    }
    else if (strcmp(arr, "smaller") == 0){
        return (100 - n) / 2;
    }
    else if (strcmp(arr, "hit") == 0){
        return 0;
    }
    else return 114;
}
