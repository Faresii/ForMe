#include <stdio.h>
#include <locale.h> //Здесь объявлена функция setlocale()
#include <stdlib.h> //Здесь объявлена функция system()
#include <math.h>

//объявление переменных
int TriagleP(float a,float h)
{
    float b = sqrt(pow(a/2, 2) + pow(h, 2));
    int P = b + b + a;

    return P;
}

//главная программа
int main()
{
    float a1, h1;
    int n = 0;

    while (n != 3){
    printf("Введите a : \n");
    scanf("%f", &a1);
    printf("a = %.2f \n", a1);

    printf("Введите h : \n");
    scanf("%f", &h1);
    printf("h = %.2f \n \n", h1);

    int Per = TriagleP(a1, h1);

    printf("ПЕРИМЕТР ТРЕУГОЛЬНИКА № %d \n", n + 1);
    printf("Per = %d \n", Per);
    n++;
    }


system("pause"); //пауза для фиксации консоли
return 0;
}

