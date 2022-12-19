#include <stdio.h>
#include <locale.h> //Здесь объявлена функция setlocale()
#include <stdlib.h> //Здесь объявлена функция system()
#include <math.h>

//объявление переменных
int valfct = 1;

float Range3(float x,int n)
{

    float ans = x;
    int sizeN = 2 * n + 1;
    for (int i=1;i<= sizeN; i++) valfct = valfct*i;
    ans -= pow(x, sizeN) / valfct ;



    return ans;
}

//главная программа
int main()
{
    float x1;
    int n1;
    int N = 0;
    float _range;

    
    printf("Введите x: \n");
    scanf("%f", &x1);
    printf("x = %.2f \n", x1);

    for (int i = 0; i < 6; i++){
    printf("Введите n : \n");
    scanf("%d", &n1); 

    if (n1 <= 0){
        i--;
    printf("НЕКОРРЕКТНЫЙ ВВОД \n");
    }

    if (n1 > 0){
    printf("n № %d = %d \n \n",i + 1, n1);

     _range = Range3(x1, n1);
    
    printf("Ответ = %f \n", _range);
    }
    }
    



system("pause"); //пауза для фиксации консоли
return 0;
}

#include <stdio.h>
#include <locale.h> //Здесь объявлена функция setlocale()
#include <stdlib.h> //Здесь объявлена функция system()
#include <math.h>

//объявление переменных
int valfct = 1;

float Range3(float x,int n)
{

    float ans = x;
    int sizeN = 2 * n + 1;
    for (int i=1;i<= sizeN; i++) valfct = valfct*i;
    ans -= pow(x, sizeN) / valfct ;



    return ans;
}

//главная программа
int main()
{
    float x1;
    int n1;
    int N = 0;
    float _range;

    
    printf("Введите x: \n");
    scanf("%f", &x1);
    printf("x = %.2f \n", x1);

    for (int i = 0; i < 6; i++){
    printf("Введите n : \n");
    scanf("%d", &n1); 

    if (n1 <= 0){
        i--;
    printf("НЕКОРРЕКТНЫЙ ВВОД \n");
    }

    if (n1 > 0){
    printf("n № %d = %d \n \n",i + 1, n1);

     _range = Range3(x1, n1);
    
    printf("Ответ = %f \n", _range);
    }
    }
    



system("pause"); //пауза для фиксации консоли
return 0;
}

