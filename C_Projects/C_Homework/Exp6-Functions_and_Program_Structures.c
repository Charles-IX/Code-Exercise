#include <stdio.h>
#include <math.h>

#define MAX_STUDENTS 100 // 最大学生人数
#define MAX_COURSES 10   // 最大课程数

void inputScores(int L, int M, double scores[MAX_STUDENTS][MAX_COURSES]) {
    printf("请输入每个学生的成绩：\n");
    for (int i = 0; i < L; i++) {
        printf("请输入第%d个学生的成绩：\n", i + 1);
        for (int j = 0; j < M; j++) {
            printf("请输入第%d门课的成绩：", j + 1);
            scanf("%lf", &scores[i][j]);
        }
    }
}

void calculateStudentAverages(int L, int M, double scores[MAX_STUDENTS][MAX_COURSES], double studentAverages[MAX_STUDENTS]) {
    for (int i = 0; i < L; i++) {
        double sum = 0.0;
        for (int j = 0; j < M; j++) {
            sum += scores[i][j];
        }
        studentAverages[i] = sum / M;
    }
}

void calculateCourseAverages(int L, int M, double scores[MAX_STUDENTS][MAX_COURSES], double courseAverages[MAX_COURSES]) {
    for (int j = 0; j < M; j++) {
        double sum = 0.0;
        for (int i = 0; i < L; i++) {
            sum += scores[i][j];
        }
        courseAverages[j] = sum / L;
    }
}

void findCourseMinMax(int L, int M, double scores[MAX_STUDENTS][MAX_COURSES], int courseMin[MAX_COURSES], int courseMax[MAX_COURSES]) {
    for (int j = 0; j < M; j++) {
        double min = scores[0][j];
        double max = scores[0][j];
        int min_student = 1, max_student = 1;
        for (int i = 1; i < L; i++) {
            if (scores[i][j] < min) {
                min = scores[i][j];
                min_student = i + 1;
            }
            if (scores[i][j] > max) {
                max = scores[i][j];
                max_student = i + 1;
            }
        }
        courseMin[j] = min_student;
        courseMax[j] = max_student;
    }
}

double calculateVariance(int L, int M, double scores[MAX_STUDENTS][MAX_COURSES]) {
    double mean = 0.0;
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < M; j++) {
            mean += scores[i][j];
        }
    }
    mean /= (L * M);

    double variance = 0.0;
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < M; j++) {
            variance += pow(scores[i][j] - mean, 2);
        }
    }
    variance /= (L * M);

    return variance;
}

int main(void) {
    int L, M;
    printf("请输入学生人数：");
    scanf("%d", &L);
    printf("请输入课程数：");
    scanf("%d", &M);

    double scores[MAX_STUDENTS][MAX_COURSES];
    double studentAverages[MAX_STUDENTS];
    double courseAverages[MAX_COURSES];
    int courseMin[MAX_COURSES];
    int courseMax[MAX_COURSES];

    inputScores(L, M, scores);
    calculateStudentAverages(L, M, scores, studentAverages);
    calculateCourseAverages(L, M, scores, courseAverages);
    findCourseMinMax(L, M, scores, courseMin, courseMax);
    double variance = calculateVariance(L, M, scores);

    printf("\n每个学生的平均分：\n");
    for (int i = 0; i < L; i++) {
        printf("学生%d的平均分：%lf\n", i + 1, studentAverages[i]);
    }

    printf("\n每门课的平均分：\n");
    for (int j = 0; j < M; j++) {
        printf("第%d门课的平均分：%lf\n", j + 1, courseAverages[j]);
    }

    printf("\n每门课的最高分和最低分所对应的学生：\n");
    for (int j = 0; j < M; j++) {
        printf("第%d门课的最低分对应学生%d\n", j + 1, courseMin[j]);
        printf("第%d门课的最高分对应学生%d\n", j + 1, courseMax[j]);
    }

    printf("\n平均分方差：%lf\n", variance);

    return 0;
}
