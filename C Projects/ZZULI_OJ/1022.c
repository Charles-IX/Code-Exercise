// 从键盘输入三个整数x,y和z，按从大到小的顺序输出它们的值。
// 输入三个整数x,y和z。
// 按从大到小的顺序输出它们的值。
#include <stdio.h>
#include <math.h>
// int max(int a, int b, int c);

int main(void){
    int x, y, z, temp;
    scanf("%d %d %d", &x, &y, &z);
    if (x < y){
        temp = x;
        x = y;
        y = temp;
    }
    if (x < z){
        temp = x;
        x = z;
        z = temp;
    }
    if (y < z){
        temp = y;
        y = z;
        z = temp;
    }
    printf("%d %d %d", x, y, z);
    return 0;
}

// 冒泡排序：如果后面一个比前面大，就往前移。如果需要排的数字很多，应该要循环执行。
// 对于三项的冒泡排序来说，先把最大的放在最前面（需要两次if函数），然后比较后面两个的大小即可（一次if函数）。

/* 非常不推荐，暴力嵌套费时费力费空间
int max(int a, int b, int c){
    if (a >= b){
        if (a >= c){
            if (b >= c){
                printf("%d %d %d", a, b, c);
            }
            else{
                printf("%d %d %d", a, c, b);
            }
        }
        else{
            printf();
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
 */