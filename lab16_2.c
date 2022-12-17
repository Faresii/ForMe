#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define F(a) 5-a

void schet(int);

//Главная программа
int main()
{
setlocale(LC_ALL, "Russian");
setlocale(LC_NUMERIC, "C");
int i = 0;
int x = 0;
int y = 0;
int j = 0;

//Ввод данных с клавиатуры
while(1){
printf("Введите 1, чтобы вычислить функцию\nВведите 2, чтобы выйти из программы\n");
printf("Ввод: ");
scanf("%d", &i);
if (i == 1)
{
printf("Введите целочисленное значение x: ");
scanf("%d", &x);
printf("Введите 3, чтобы виспользовать макрофункцию\nВведите 4, чтобы использовать обычную функцию\n");
printf("Ввод: ");
scanf("%d", &j);

if (j == 3)
{
y = -5 * (F(x))*(F(x))*(F(x))*(F(x)) + 5 * (F(x))*(F(x)) + 5;
printf("%d\n", y);
}

else
{
schet(x);
}
}
if (i == 2) break;

}
}
void schet(int b)
{
int k = 0;
k = -5 * (5 - b) * (5 - b) * (5 - b) * (5 - b) + 5 * (b - 5) * (b - 5) + 5;
printf("Ответ: %d\n", k);

system("pause");//пауза для фиксации консоли
}