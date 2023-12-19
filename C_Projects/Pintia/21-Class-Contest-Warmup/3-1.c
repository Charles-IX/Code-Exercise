// 本题要求你为初学数据结构的小伙伴设计一款简单的利用堆栈执行的计算器。计算器由两个堆栈组成，一个堆栈 S1​ 存放数字，另一个堆栈 S2​ 存放运算符。
// 计算器的最下方有一个等号键，每次按下这个键，计算器就执行以下操作：
//     从 S1​ 中弹出两个数字，顺序为 n1​ 和 n2​；
//     从 S2​ 中弹出一个运算符 op；
//     执行计算 n2​ op n1​；
//     将得到的结果压回 S1​。
// 直到两个堆栈都为空时，计算结束，最后的结果将显示在屏幕上。

// 输入格式：
// 输入首先在第一行给出正整数 N（1<N≤10^3），为 S1​ 中数字的个数。
// 第二行给出 N 个绝对值不超过 100 的整数；第三行给出 N−1 个运算符 —— 这里仅考虑 +、-、*、/ 这四种运算。一行中的数字和符号都以空格分隔。

// 输出格式：
// 将输入的数字和运算符按给定顺序分别压入堆栈 S1​ 和 S2​，将执行计算的最后结果输出。注意所有的计算都只取结果的整数部分。题目保证计算的中间和最后结果的绝对值都不超过 10^9。
// 如果执行除法时出现分母为零的非法操作，则在一行中输出：ERROR: X/0，其中 X 是当时的分子。然后结束程序。

#include <stdio.h>
int op(int x, char op, int y);

int main(void){
    int n;
    scanf("%d", &n);
    int nums[n];
    char ops[n - 1];
    for (int i = 0; i < n; i++){
        scanf("%d", &nums[i]);
    }
    for (int i = 0; i < n - 1; i++){
        scanf("%c", &ops[i]);
        if (ops[0] == '\n'){
            i = -1;
        }
    }
    scanf("%c");
    for (int i = 0; i < n - 1; i++){
        if (ops[i] == '/'){
            if (nums[i + 1] == 0){
                printf("Error: %d/0", nums[i]);
                return 1;
            }
        }
        else{
            nums[i + 1] = op(nums[i], ops[i], nums[i + i]);
        }
    }
    printf("%d", nums[n - 1]);
    return 0;
}

int op(int x, char op, int y){
    switch (op){
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case '/':
        return x / y;
    default:
        break;
    }
}