// 输入一个正整数，将其逆序输出，每个数字后有一个空格。  
// 输入一个正整数n，你可以假设n在int范围内。
// 将n按其逆序输出，每个数字后有一个空格，输出占一行。例如，输入12354，输出4 5 3 2 1。
#include <stdio.h>
int main(void){
    int n;
    scanf("%d", &n);
    if (n > 9){
        
    }
}

int strip(int x){
    int remain;
    remain = x % 10;
    strip(remain)
}