#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define F(a) 5-a

#define MAC 1
#define FUNC 2
#define W 1


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


printf("Введите целочисленное значение x: ");
scanf("%d", &x);


#if(W == MAC)
y = -5 * (F(x))*(F(x))*(F(x))*(F(x)) + 5 * (F(x))*(F(x)) + 5;
printf("Ответ : %d\n", y);


#else if (W == FUNC)
{
printf("%d\n", sch(x));
}
#endif



system("pause");
return 0;

}

void sch(int x)
{
int k = 0;
k = -5 * (5 - x) * (5 - x) * (5 - x) * (5 - x) + 5 * (x - 5) * (x - 5) + 5;
printf("Ответ: %d\n", k);

system("pause");//пауза для фиксации консоли
}
