#include <stdio.h>
#include <ctype.h>

int main(void){
    int n;
    char buffer;
    scanf("%d", &n);
    char array[n][100];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < 100; j++){
            scanf("%c", &buffer);
            if (buffer != '\n'){
                array[i][j] = buffer;
            }
            else{
                break;
            }
        }
    }
    
}