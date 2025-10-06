# Домашнее задание к работе 2


## Условие задачи
Определить путь, который проедут санки с горки высотой h метров, углом наклона А радиан и коэффициентом трения k. 

## 1. Алгоритм и блок-схема

### Алгоритм
1. **Начало**
2. Задать исходные данные:
   - `h` — Высота горки (метр)
   - `a_deg` — Угол наклона (град.)
   - `k` - Коэффициент трения
3. Перевести значения угла в градусах в радианы:
   - `double A_rad = A_deg * 3.14159 / 180.0`
4. Вычислить путь санок:
   -` double L = h / (sin(A_rad) - k * cos(A_rad))`
5. Вывести результаты расчетов с подстановкой всех значений в текст.
6. **Конец**

### Блок-схема 
<img width="1636" height="2684" alt="image" src="https://github.com/user-attachments/assets/c8b109bb-0fff-46ad-ae16-c03b2cbac546" />


https://viewer.diagrams.net/index.html?tags=%7B%7D&lightbox=1&target=blank&highlight=0000ff&edit=_blank&layers=1&nav=1&title=Алгоритм.drawio&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22Страница%20—%201%22%20id%3D%22CwXrRb5TbqtLb5-TzxPD%22%3E7VlLc5swEP41vmQmGSTxPPqZTJLOZCaHtL1kKKhAw8MDOLb76ytAAiFh13GxySS9yNKi5%2B73rbTrEZpGm%2BvUXvpfEheHI6i4mxGajSAEigrJTyHZUomJjEripYFLZY3gMfiN2VAqXQUuzlod8yQJ82DZFjpJHGMnb8nsNE3W7W4%2Fk7C96tL2sCR4dOxQlj4Fbu5XUhMajfwGB57PVga6VX2JbNaZniTzbTdZcyI0H6FpmiR5VYs2UxwW2mN6qcYtdnytN5biOD9kwO0t%2Fh6HSh7Fxq%2B76%2Bhu8nTjXQKzmubVDlf0xHS3%2BZapAMfuuNAkaTmhnWWBM0ITP49CIgCkmiar2MXFKgppkd2k269F4wohiwm%2B8V9nm1Zry7cecBpEOMcpFVa7wa5kpebYDBZ26uF8z1k5rRO84oQsk27JwHVjV43ayudMymQpDu08eG3vw6bw8urp6hUekoDsECqUC0hVqyGUCZdIV9pzZMkqdTAdxhtSmAlaSnsmaAozVaqQZiIV7uCNqATKW0AjY4bYypoV5UQZEVCYBquTclKWcwlXbdys%2FSDHj0vbKb6uiTdpg4wuidMcb%2FYjQTYws4Cut%2FVmIKo3DgGWLiMAKbuN3dLtWxWJ%2BibfoWwZigQqEEhgKEeSQJpJF%2Bl0YhKo3SSYl2AHJQnGZbkoJZCjglaWFV1MKoEVVxasAxmocJ2n0sBZ2WdSlmS4HhJLTdzglVS9ouqPIDmYMn52sVdVX1gvcl6u4x5egvPwUvSMtSk5UAJ1Dyp7J6bx6Ympg76IqRnCbk5MzI4XTUFMyNGwIqnKSKdyl1UnuYa%2BuAxJpTJBzA5wnOzisiQdj59TuxhR%2BpsLdAVUoJFeC8D2NaSDQaL%2BlA4Ho59TgeD%2F1a%2BpvXkY8RFx6vdvx93%2F0Y2H2ipXjaONJ84Ez2w8TTJeFsSV%2B4K6HRXup3wXvVw4SUblogPzk%2BjHKhvmdVQr7G%2BvIyBqtj%2FvJfv%2Fj04As6%2FovXZ7Q0XvDBWc8e7JD4kXFgzwlzz2pciCC1TmXFRTv5lI3eLiGSJEZQnLcvpOoxDIMCzZhecZgLsh1jvNoJxoYZZqXNbAalMt9RC1dWRVTqe2jrcVjQBqgLbjADQm3e%2BZI3tXOSpgyersylGJj6n%2BtNn7Y6fJEL8lO3zoDXFIIhgNeZUgKDJGjDIOvUqkuPDsV4l%2BMmyAT4mNOpL5Z2xo2tDPjMFyaIdY2RzSylIMBMS78OhoCohpu1NbeUe2bczdrzMup63vuWHPlAwylCtth9L4dJohm%2F%2BIbBBpNv%2FwVkpv%2FihH8z8%3D%3C%2Fdiagram%3E%3C%2Fmxfile%3E#%7B%22pageId%22%3A%22CwXrRb5TbqtLb5-TzxPD%22%7D


## 2. Реализация программы

```
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
```

## 3. Результаты работы программы

```
Высота горки (м): 10
Угол наклона (градусы): 100
Коэффициент трения: 0.1
Путь: 10,15 м
```

## 4. Информация о разработчике

Прохорова Виктория, бТИИ-251
