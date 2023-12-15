#include <stdio.h>
#include <ctype.h> // 用于字符分类函数

void countCharacters(int n, char *strings[]) {
    int letterCount = 0;
    int digitCount = 0;
    int spaceCount = 0;
    int otherCount = 0;

    for (int i = 0; i < n; i++) {
        char *str = strings[i];
        for (int j = 0; str[j] != '\0'; j++) {
            if (isalpha(str[j])) {
                letterCount++;
            } else if (isdigit(str[j])) {
                digitCount++;
            } else if (isspace(str[j])) {
                spaceCount++;
            } else {
                otherCount++;
            }
        }
    }

    printf("字母个数：%d\n", letterCount);
    printf("数字个数：%d\n", digitCount);
    printf("空格个数：%d\n", spaceCount);
    printf("其他字符个数：%d\n", otherCount);
}

int main() {
    int n;
    printf("请输入字符串的数量 (不超过5)：");
    scanf("%d", &n);

    if (n > 5) {
        printf("字符串数量超过限制。\n");
        return 1;
    }

    char strings[5][100]; // 假设每个字符串的最大长度为100

    for (int i = 0; i < n; i++) {
        printf("请输入第 %d 个字符串：", i + 1);
        scanf("%s", strings[i]);
    }

    countCharacters(n, strings);

    return 0;
}
