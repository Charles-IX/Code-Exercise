#include <stdio.h>
#include <string.h>

// 定义学生结构体
struct Student {
    char name[20];
    int height;
};

// 定义教室的行和列
#define NUM_ROWS 5
#define NUM_COLS 4

// 定义函数用于升序排序学生数组
void sortStudents(struct Student students[], int n) {
    struct Student temp;
    int i, j;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (students[j].height > students[j + 1].height) {
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

int main() {
    struct Student students[20];
    char newStudentName[20];
    int newStudentHeight;

    // 输入学生信息并排序
    printf("请输入20位学生的身高（单位：厘米）和姓名：\n");
    for (int i = 0; i < 20; i++) {
        printf("学生 %d 身高：", i + 1);
        scanf("%d", &students[i].height);
        printf("学生 %d 姓名：", i + 1);
        scanf("%s", students[i].name);
    }

    sortStudents(students, 20);

    // 输出排序后的学生信息
    printf("\n学生按照身高升序排列：\n");
    for (int i = 0; i < 20; i++) {
        printf("学生 %d：姓名：%s 身高：%d厘米\n", i + 1, students[i].name, students[i].height);
    }

    // 输入新插班的学生信息
    printf("\n请输入新插班学生的姓名和身高：\n");
    printf("学生姓名：");
    scanf("%s", newStudentName);
    printf("学生身高：");
    scanf("%d", &newStudentHeight);

    // 找到新学生的位置
    int newRow = 0;
    int newCol = 0;
    for (int i = 0; i < NUM_ROWS; i++) {
        for (int j = 0; j < NUM_COLS; j++) {
            if (students[i * NUM_COLS + j].height > newStudentHeight) {
                newRow = i;
                newCol = j;
                break;
            }
        }
    }

    // 输出新学生的座位位置
    printf("\n新插班学生 %s 的座位位置为：第 %d 行，第 %d 列\n", newStudentName, newRow + 1, newCol + 1);

    // 统计不同字母开头的小朋友的个数
    int letterCount[26] = {0}; // 26个字母
    for (int i = 0; i < 20; i++) {
        char firstLetter = students[i].name[0];
        if (firstLetter >= 'A' && firstLetter <= 'Z') {
            letterCount[firstLetter - 'A']++;
        }
    }

    // 输出统计结果
    printf("\n不同字母开头的小朋友个数统计：\n");
    for (int i = 0; i < 26; i++) {
        if (letterCount[i] > 0) {
            printf("%c 开头的小朋友有 %d 个\n", 'A' + i, letterCount[i]);
        }
    }

    return 0;
}
