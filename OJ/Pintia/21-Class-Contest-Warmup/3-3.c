// 请编写程序检查C语言源程序中下列符号是否配对：/*与*/、(与)、[与]、{与}。

// 输入格式:
// 输入为一个C语言源程序。当读到某一行中只有一个句点.和一个回车的时候，标志着输入结束。程序中需要检查配对的符号不超过100个。

// 输出格式:
// 首先，如果所有符号配对正确，则在第一行中输出YES，否则输出NO。然后在第二行中指出第一个不配对的符号：如果缺少左符号，则输出?-右符号；如果缺少右符号，则输出左符号-?。

#include <stdio.h>
int main(void){
    char source[10000];
    int symbol[8] = {0};  // 这8个空依次是/*与*/、(与)、[与]、{与}的数量
    int dot = 0;
    int breakpoint = 0;
    for (int i = 0; i < 10000; i++){
        scanf("%c", &source[i]);
        if (source[i] == '\n'){
            if (dot == 1){
                breakpoint = i;
                break;
            }
        }
        if (source[i] == '.'){
            if (source[i - 1] == '\n'){
                dot = 1;
            }
        }
    }
    
    for (int i = 0; i <= breakpoint; i++){
        switch (source[i]){
            case '/':
                if (source[i + 1] == '*'){
                    symbol[0] += 1;
                    i += 1;
                    continue;
                }
                break;
            case '*':
                if (source[i + 1] == '/'){
                    symbol[1] += 1;
                    i += 1;
                    continue;
                }
                break;
            case '(':
                symbol[2] += 1;
                continue;
                break;
            case ')':
                symbol[3] += 1;
                continue;
                break;
            case '[':
                symbol[4] += 1;
                continue;
                break;
            case ']':
                symbol[5] += 1;
                continue;
                break;
            case '{':
                symbol[6] += 1;
                continue;
                break;
            case '}':
                symbol[7] += 1;
                continue;
                break;
            default:
                continue;
                break;
        }
    }
    if (symbol[0] > symbol[1]){
        printf("NO\n");
        printf("/*-?");
        return 0;
    }
    else if (symbol[0] < symbol[1]){
        printf("NO\n");
        printf("?-*/");
        return 0;
    }
    else if (symbol[2] > symbol[3]){
        printf("NO\n");
        printf("(-?");
        return 0;
    }
    else if (symbol[2] < symbol[3]){
        printf("NO\n");
        printf("?-)");
        return 0;
    }
    else if (symbol[4] > symbol[5]){
        printf("NO\n");
        printf("[-?");
        return 0;
    }
    else if (symbol[4] < symbol[5]){
        printf("NO\n");
        printf("?-]");
        return 0;
    }
    else if (symbol[6] > symbol[7]){
        printf("NO\n");
        printf("{-?");
        return 0;
    }
    else if (symbol[6] < symbol[7]){
        printf("NO\n");
        printf("?-}");
        return 0;
    }
    else{
        printf("YES\n");
        return 0;
    }
}

// 30分的题含泪怒拿26分，有一个测试点不通过：“左右符号个数相同，达到最大值，但不匹配”
// 推测问题是不能很好地检测“哪个符号是第一个不匹配的”。
// 看了一下这道题用时40分钟不到，在考试阶段为了省时间直接写if else打表也不是不行。