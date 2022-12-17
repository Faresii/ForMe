#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define F(a) 5-a

//Главная программа
int main()
{
setlocale(LC_ALL, "Russian");
setlocale(LC_NUMERIC, "C");
int i = 0;
int x = 0;
int y = 0;

//Ввод данных с клавиатуры
while(1){
printf("Введите 1, чтобы вычислить функцию\nВведите 2, чтобы выйти из программы\n");
printf("Ввод: ");
scanf("%d", &i);

if (i == 1)
{
printf("Введите целочисленное значение x :");
scanf("%d", &x);
y = -5 * (F(x))*(F(x))*(F(x))*(F(x)) + 5 * (F(x))*(F(x)) + 5;
printf("%d\n", y);

}
if (i == 2)  break;

}
system("pause");//пауза для фиксации консоли
return 0;
}