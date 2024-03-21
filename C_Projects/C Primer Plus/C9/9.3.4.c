// 使用递归来进行十进制向二进制的转换
#include <stdio.h>
int cal(int n);

int main(void){
    int n, ans[10000];
    printf("DEC:");
    scanf("%d", &n);
    cal(n);
    printf("BIN:%d", ans);
}

int cal(int n){
    if (n >= 2){
    int target;
    target = n % 2;
    cal(target);
    }

}