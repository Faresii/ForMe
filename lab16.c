#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define F(a) 5-a

#define W 1
#define MAC 1

//Главная программа
int main()
{
setlocale(LC_ALL, "Russian");
setlocale(LC_NUMERIC, "C");
int i = 0;
int x = 0;
int y = 0;

//Ввод данных с клавиатуры

printf("Введите целочисленное значение x :");
scanf("%d", &x);

#if (W == MAC)
y = -5 * (F(x))*(F(x))*(F(x))*(F(x)) + 5 * (F(x))*(F(x)) + 5;


printf("%d\n", y);


#endif


system("pause");//пауза для фиксации консоли
return 0;
}
