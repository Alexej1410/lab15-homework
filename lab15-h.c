#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#define COURS 5      
#define GRUP 8   

int main() {
    setlocale(LC_ALL, "RUS");
    int a[GRUP][COURS];  
    printf("строка Ч группа (1-8), столбец Ч курс (1Ц5)\n");
    printf("введите количество студентов в группах:\n");
    for (int i = 0; i < GRUP; i++) {
        for (int j = 0; j < COURS; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nтаблица курсов:\n");
    printf("        ");
    for (int p = 1; p <= COURS; p++) {
        printf("%4d", p);
    }
    printf("\n");
    for (int i = 0; i < GRUP; i++) {
        printf("группа %d", i+1);
        for (int j = 0; j < COURS; j++) {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    int count3 = 0;
    for (int i = 0; i < GRUP; i++) {
        for (int j = 0; j < COURS; j++) {
            if (j == 2) count3 += a[i][j];
        }
    }
    printf("среднее число студентов в группах 3 курса равно %d\n", count3 / 8);
    return 0;
}