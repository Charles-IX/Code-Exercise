#include <stdio.h>
#include <string.h>

void caesar_encrypt(char *str, int shift) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = 'A' + (str[i] - 'A' + shift) % 26;
        }
        else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = 'a' + (str[i] - 'a' + shift) % 26;
        }
        i++;
    }
}

int main(void) {
    char plaintext[10000];
    int shift;

    printf("Plaintext: ");
    fgets(plaintext, sizeof(plaintext), stdin);
    printf("Shift: ");
    scanf("%d", &shift);
    if (shift < 0) {
        shift += 26;
    }

    // plaintext[strcspn(plaintext, "\n")] = '\0';

    caesar_encrypt(plaintext, shift);

    printf("Encrypted: %s\n", plaintext);

    return 0;
}
