// 输入一个字符，若是小写字母，则变为大写输出，否则，原样输出。
// 输入为一个字符。
// 按题目要求输出一个字符，单独占一行。
#include <stdio.h>
#include <ctype.h>
int main(void){
    char ch;
    scanf("%c", &ch);
    if (islower(ch)){
        printf("%c", ch - 32);
    }
    else{
        printf("%c", ch);
    }
    return 0;
}

// 对于字符常量的操作就是这么简单。注意，printf()的返回值是打印字符的个数，而不是打印内容。所以用 code = printf("%d", ch) 就非常蠢。