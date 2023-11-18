/* 这个程序需要用户输入一个大写字母，然后使用嵌套循环以下面金字塔型的格式来打印字母。
样例输入：E
样例输出：
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
 */
#include <stdio.h>
int main(void){
    char target;
    scanf("%c", &target);
    for (char i = 'A'; i <= target; i++){
        for (int j = target - i; j > 0; j--){   // 似乎写成 char j = target; j > 'A'; j-- 会更好一点？
            printf(" ");
        }
        for (char k = 'A'; k < i; k++){
            printf("%c", k);
        }
        for (char l = i; l >= 'A'; l--){
            printf("%c", l);
        }
        printf("\n");
    }
    return 0;
}

// 如果要写嵌套循环，一定要注意二级循环不应重新初始化一级循环中的变量，否则大概率会死循环。