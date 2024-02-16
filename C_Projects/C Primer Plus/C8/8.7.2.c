// 一个很基础的菜单程序，意在读取一行中的首字母并依此来执行相应的操作。
// 为了方便，将所有的操作都设定为“打印出被激活的选项”。
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main(void){
    while (true){
        char x = -1, y = -1;
        bool head = true;
        printf("This is a menu with 4 available choices.\n"
        "Enter Ctrl+C to quit.\n");
        printf("A. [placeholder]\t B. [placeholder]\n");
        printf("C. [placeholder]\t D. [placeholder]\n");
        while (x != '\n'){
            scanf("%c", &x);
            if (head){
                y = x;
                head = false;
            }
            continue;
        }
    
        y = toupper(y);

        switch (y){
            case 'A':
                printf("You have chosen option A.\n");
                break;
            case 'B':
                printf("You have chosen option B.\n");
                break;
            case 'C':
                printf("You have chosen option C.\n");
                break;
            case 'D':
                printf("You have chosen option D.\n");
                break;
            default:
                printf("Wrong or empty imput.\n");
        }
        printf("\n");
    }
}