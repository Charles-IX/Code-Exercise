// 从键盘输入一个字符，判断该字符是否大写字母、小写字母、数字字符或其他字符。分别输出对应的提示信息。
// 输入一个字符。
// 如果该字符是大写字母，则输出“upper”；若是小写字母，则输出“lower”；若是数字字符，则输出“digit”；若是其他字符，则输出“other”。（输出不含双引号）。
#include <stdio.h>
#include <ctype.h>
int main(void){
    char ch;
    scanf("%c", &ch);
    if (isupper(ch)){
        printf("upper");
    }
    else if (islower(ch)){
        printf("lower");
    }
    else if (isdigit(ch)){
        printf("digit");
    }
    else{
        printf("other");
    }
    return 0;
}

// 头文件是个好东西，一定要善用。