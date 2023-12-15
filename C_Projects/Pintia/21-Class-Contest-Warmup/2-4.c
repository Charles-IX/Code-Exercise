// 为了防止信息被别人轻易窃取，需要把电码明文通过加密方式变换成为密文。输入一个以回车符为结束标志的字符串（少于80个字符），再输入一个整数offset，用凯撒密码将其加密后输出。
// 恺撒密码是一种简单的替换加密技术，将明文中的所有字母都在字母表上偏移offset位后被替换成密文，当offset大于零时，表示向后偏移；当offset小于零时，表示向前偏移。

// 输入格式:
// 输入第一行给出一个以回车结束的非空字符串（少于80个字符）；第二行输入一个整数offset。

// 输出格式:
// 输出加密后的结果字符串。

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void){
    char str[80];
    int offset;
    gets(str);
    scanf("%d", &offset);
    for (int i = 0; i < strlen(str); i++){
        if (isalpha(str[i])){
            str[i] += offset;
            if (str[i] > 'z'){
                str[i] -= 26;
            }
            if (str[i] < 'A'){
                str[i] += 26;
            }
        }
    }
    printf("%s", str);
    return 0;
}

// 这一版代码有问题，能通过 "Hello Hangzhou\n 2\n"的测试数据，但是通不过OJ。
// Pintia不提供输入输出报告，真他妈绝了。