#include <stdio.h>
#include <conio.h>

int main() {
    int m[4][4], f, c, x, y;

    printf("Introduce un numero:\n");

    for (f = 0; f < 4; f++) {
        for (c = 0; c < 4; c++) {
            scanf("%d", &m[f][c]);
        }
    }

    gotoxy(5, 2);
    printf("Matriz impresa");
    y = 4;
    for (f = 0; f < 4; f++) {
        x = 5;
        for (c = 0; c < 4; c++) {
            gotoxy(x, y);
            printf("%d", m[f][c]);
            x = x + 5;
        }
        y = y + 2;
    }

    gotoxy(30, 1);
    printf("Matriz Diagonal");
    y = 4;
    for (f = 0; f < 4; f++) {
        for (c = 0; c < 4; c++) {
            if (f == c) {
                m[f][c] = 1;
            } else {
                m[f][c] = 0;
            }
        }
    }

    for (f = 0; f < 4; f++) {
        x = 30;
        for (c = 0; c < 4; c++) {
            gotoxy(x, y);
            printf("%d", m[f][c]);
            x = x + 5;
        }
        y = y + 2;
    }

    return 0;
}






 