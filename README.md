<h1>Домашняя работа к лабораторной №15</h1>
<h2>Выполнил: Кравченко А.С.</h2>

<h1>Вариант 14</h1>
<h2>Условие</h2>
В двумерном массиве хранится информация о количестве студентов в той или иной группе каждого курса института с первого по пятый (в первом столбце — информация о группах первого курса, во втором — второго и т. д.). На каждом курсе имеется 8 групп. Определить среднее число студентов в одной группе на третьем курсе.

<h2>Алгоритм</h2>

```
1. Начало.
2. Инициализируем переменные COURS = 5 и GRUP = 8.
3. Создаем массив элементов a[GRUP][COURS].
4. Пока i = 0; i < GRUP; i++:
        Пока j = 0; j < COURS; j++:
            Вводим a[i][j].
5. Пока p = 1; p <= COURS; p++:
        Печатаем p.
6. Пока i = 0; i < GRUP; i++:
        Печатаем i+1;
        Пока j = 0; j < COURS; j++:
            Печатаем a[i][j].
7. инициализируем переменную count3 = 0.
8. Пока i = 0; i < GRUP; i++:
        Пока j = 0; j < COURS; j++:
            Если j == 2: count3 += a[i][j].
9. Выводим count3 / 8.
10. Конец.
```

<h2>Код программы</h2>

```
#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#define COURS 5      
#define GRUP 8   

int main() {
    setlocale(LC_ALL, "RUS");
    int a[GRUP][COURS];  
    printf("строка — группа (1-8), столбец — курс (1–5)\n");
    printf("введите количество студентов в группах:\n");
    for (int i = 0; i < GRUP; i++) {
        for (int j = 0; j < COURS; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nтаблица курсов:\n");
    printf("курс:   ");
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
```

<h2>Схема</h2>
<img width="338" height="680" alt="image" src="https://github.com/user-attachments/assets/beceaf2c-ea38-410a-9536-12559baa60ea" /><br>
<img width="338" height="411" alt="image" src="https://github.com/user-attachments/assets/e5379f42-5c09-4b42-8c93-e42aea6a6bb0" /><br>
<img width="338" height="683" alt="image" src="https://github.com/user-attachments/assets/b358aa88-e77d-4a2d-a1d5-2574e8bdc417" /><br>

<h2>Консоль</h2>
<img width="538" height="509" alt="image" src="https://github.com/user-attachments/assets/edcc48bc-b273-431a-8100-e8141809365a" /><br>
<img width="633" height="643" alt="image" src="https://github.com/user-attachments/assets/c50deddc-1d2e-4dfa-bec6-854f72badff7" />
