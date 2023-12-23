//  统计给定的n个数中，负数、零和正数的个数。 
//  输入的第一个数是整数n（n<100），表示需要统计的数值的个数，然后是n个整数。
//  输出一行a,b和c，分别表示给定的数据中负数、零和正数的个数。 
#include <stdio.h>
int main(void){
    int n;
    int a = 0, b = 0, c = 0;
    scanf("%d", &n);
    int set[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &set[i]);
    }
    for (int i = 0; i < n; i++){
        if (set[i] < 0){
            a++;
        }
        else if (set[i] == 0){
            b++;
        }
        else {
            c++;
        }
    }
    printf("%d %d %d", a, b, c);
    return 0;
}

// “=”是赋值符号，判断是否相等用的是“==”。