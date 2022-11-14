#include <stdio.h>
#include <locale.h> //Здесь объявлена функция setlocale()
#include <stdlib.h> //Здесь объявлена функция system()
#include <math.h>

//объявление переменных
char str[] = "";
int max = 0;

int main()
{

int size = 0;

printf ("Ведите числа от 0 до 9 \n");
scanf("%s", &str);

while(str[size] != '\0') size++; // длина строки

for (int i = 0;i < size; i++){
    if (str[i] > 47 && str[i] < 58){
    int digit = str[i] - '0';
       if(max < digit) max = digit;
    }
    
}
printf("Максимальный элемент : %d \n", max);


system("pause"); //пауза для фиксации консоли
return 0;
}

