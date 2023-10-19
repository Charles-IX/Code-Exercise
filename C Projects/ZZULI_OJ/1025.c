// 给你三个ASCII字符(不含空白字符:包括空格、制表符\t、回车换行符\n)，找出其中最大的那个
// 输入包含三个字符，之间有一个空格隔开。
// 输出ASCII码最大的那个字符，占一行。
// Hint: 注意对输入序列中空格的处理，空格也是合法的字符。
#include <stdio.h>
int max(int x, int y, int z);
int main(void){
    char a, b, c;
    scanf("%c %c %c", &a, &b, &c);
    printf("%c", max(a, b, c));
    return 0;
}

int max(int x, int y, int z){
    if (x >= y){
        if (x >= z){
            return x;
        }
        else{
            return z;
        }
    }
    else{
        if (y >= z){
            return y;
        }
        else{
            return z;
        }
    }
}