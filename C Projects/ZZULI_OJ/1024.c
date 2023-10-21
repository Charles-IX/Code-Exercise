// 输入一个英文字母（可能是大写，也可能是小写），输出该字母在字母表中的序号（’a’和’A’的序号为1）。
//  输入只有一个英文字母。
// 输出一个整数，表示该字母在字母表的序号，输出单独占一行。
#include <stdio.h>
#include <ctype.h>
int main(void){
    char ch;
    scanf("%c", &ch);
    if (islower(ch)){
        printf("%d", ch - 96);
    }
    else{
        printf("%d", ch + 32 - 96);
    }
    return 0;
}

// 同一个字母的大小写的ASCII码差值为32，且在ASCII码表中大写在前。