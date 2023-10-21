// 从键盘输入三个整数x,y和z，求出其中最大的数。
// 输入三个整数，用空格隔开。
// 输出最大整数。
#include <stdio.h>
#include <math.h>
int max(int a, int b, int c);

int main(void){
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    printf("%d", max(x, y, z));
    return 0;
}

int max(int a, int b, int c){
    if (a >= b){
        if (a >= c){
            return a;
        }
        else{
            return c;
        }
    }
    else{
        if (b >= c){
            return b;
        }
        else{
            return c;
        }
    }
}

// 如果使用除main()以外的函数，不要忘记写入ANSI C要求的函数原型(Prototype)。