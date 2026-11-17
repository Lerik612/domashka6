#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, ".UTF-8");

    double x, y, a, b, min, result;

    printf("Введите значение x: ");
    scanf("%lf", &x);
    printf("Введите значение y: ");
    scanf("%lf", &y);

    a = x * x + y * y;
    b = y * y * y - 2 * x * x;

    if (a < b) {
        min = a;
    }
    else {
        min = b;
    }

    result = min - 4;

    printf("Результат: %lf\n", result);

    return 0;
}