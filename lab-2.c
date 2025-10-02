#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RUS"); //Подключение локализации
    //Объявляем переменные
    double h; 
    double A_deg; 
    double k; 
    //Ввод данных пользователя
    printf("Высота горки (м): "); //Введение высоты горки в метрах
    scanf("%lf", &h); 

    printf("Угол наклона (градусы): "); //Введение укла наклона в градусах 
    scanf("%lf", &A_deg);

    printf("Коэффициент трения: "); //Введение коэффициента трения
    scanf("%lf", &k);
    //Вычисления
    double A_rad = A_deg * 3.14159 / 180.0; //Создаем переменную для угла в радианах и вычисляем угол в радианах
    double L = h / (sin(A_rad) - k * cos(A_rad)); //Вычисляем путь санок (переменная L - найденный путь)
    //Вывод результата
    printf("Путь: %.2f м\n", L);

    return 0; //завершение программы
}