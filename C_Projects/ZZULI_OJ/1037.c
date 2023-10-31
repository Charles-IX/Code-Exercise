// 给你一个简单的四则运算表达式，包含两个实数和一个运算符，请编程计算出结果。
// 表达式的格式为：s1 op s2， s1和s2是两个实数，op表示的是运算符(+,-,*,/)，也可能是其他字符。注意运算符两侧各有一个空格。
// 如果运算符合法，输出表达式的值；若运算符不合法或进行除法运算时除数是0，则输出"Wrong input!"。最后结果小数点后保留两位。
// Hint: 除数是0,用|s2|＜1e-10(即10的-10次方）判断。
#include <stdio.h>
int main(void){
    double s1, s2;
    char op;
    if (scanf("%lf %c %lf", &s1, &op, &s2)!=3){
        printf("Wrong input!");
    }
    else{
    switch (op){
    case '+':
        printf("%.2f", s1 + s2);
        break;
    case '-':
        printf("%.2f", s1 - s2);
        break;
    case '*':
        printf("%.2f", s1 * s2);
        break;
    case '/':
        if (s2 < 10e-10){
            printf("Wrong input!");
        }
        else{
            printf("%.2f", s1 / s2);
        }
        break;
    default:
        printf("Wrong input!");
        break;
    }
    }
    return 0;
}

// switch()的每一个case结束后都要加break; 否则会直接进入default （乐）