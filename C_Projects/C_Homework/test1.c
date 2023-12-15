#include <stdio.h>
int main(void){
    int time, mood[24];
    for (int i = 0; i < 24; i++){
        scanf("%d", &mood[i]);
    }
    while ((scanf("%d", &time)) == 1 && time >= 0 && time < 24){
        printf("%d", mood[time]);
        if (mood[time] > 50){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}