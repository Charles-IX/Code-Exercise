#include <stdio.h>

int main(void) {
    int X = 0;
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        char operation[4];
        scanf("%s", operation);

        if (operation[0] == 'X') {
            if (operation[1] == '+') {
                X++;
            } 
            else {
                X--;
            }
        } 
        else {
            if (operation[0] == '+' && operation[1] == '+') {
                ++X;
            } 
            else {
                --X;
            }
        }
    }

    printf("%d", X);

    return 0;
}
