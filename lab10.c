#include <stdio.h>
#include <locale.h> //Здесь объявлена функция setlocale()
#include <stdlib.h> //Здесь объявлена функция system()
#include <math.h>
#include <ctime>

//объявление переменных
int nums[7][7];

int a = 0;

int min1= 1000000;
int pos = 0;
int tmp = 0;
//главная программа
int main()
{

srand(time(NULL));

for (int i = 0; i < 7; i++)
{
    for (int j = 0; j < 7; j++)
    {
        
        nums[i][j] =  rand() % 100;

        printf("%d\t", nums[i][j]);
        }
        printf("\n");
}

printf("\n");

while (true){

printf ("1 - Заполнение массива случайными значениями\n");
printf ("2 - Сортировка 1-ым методом по убыванию\n");
printf ("3 - Сортировка 1-ым методом по возрастанию\n");
printf ("4 - Сортировка 2-ым методом по убыванию\n");
printf ("5 - Сортировка 2-ым методом по возрастанию\n");
printf ("6 - Выход из программы\n");

printf ("Введите число а : \n");
scanf("%d", &a);

//рандомные числа
if(a == 1){
    for (int i = 0; i < 7; i++)
{
    for (int j = 0; j < 7; j++)
    {
        
        nums[i][j] =  rand() % 100;

        printf("%d\t", nums[i][j]);
        }
        printf("\n");
}
}

//сортировка пузырьком в порядке по убыванию
if (a == 2){

for (int m = 0; m < (7 * 7 - 1) ;m++){
for (int i = 0; i < 7; i++)
{
    for (int j = 0; j < 7; j++)
    {
        if (i == 6 && j == 6) continue;
        
        if (nums[i][j] < nums[i][j + 1])
        {
            int tmp = nums[i][j];
            nums[i][j] = nums[i][j + 1];
            nums[i][j + 1] = tmp;

        }
        }
        
}
}

printf ("НОВАЯ МАТРИЦА \n");
for (int i = 0; i < 7; i++)
{
    for (int j = 0; j < 7; j++)
    {
        printf("%d\t", nums[i][j]);
        }
        printf("\n");
}
}

//сортировка пузырьком в порядке возрастания
if (a == 3){

for (int m = 0; m < (7 * 7 - 1) ;m++){
for (int i = 0; i < 7; i++)
{
    for (int j = 0; j < 7; j++)
    {
        if (i == 6 && j == 6) continue;
        
        if (nums[i][j] > nums[i][j + 1])
        {
            int tmp = nums[i][j];
            nums[i][j] = nums[i][j + 1];
            nums[i][j + 1] = tmp;

        }
        }
        
}
}

printf ("НОВАЯ МАТРИЦА \n");
for (int i = 0; i < 7; i++)
{
    for (int j = 0; j < 7; j++)
    {
        printf("%d\t", nums[i][j]);
        }
        printf("\n");
}
}
if(a == 5) {
     for(int i = 0; i < 7; ++i){ // i - номер текущей строки
    for(int j = 0; j < 7; ++j) // j - номер текущего шага
{ 
        pos = j; 
        tmp = nums[i][j];
        for(int h = j + 1; h < 7 ; ++h) // цикл выбора наименьшего элемента
        {
            if (nums[i][h] < tmp) 
            {
               pos = h; 
               tmp = nums[i][h]; 
            }
        }
        nums[i][pos] = nums[i][j]; 
        nums[i][j] = tmp; // меняем местами наименьший с a[i]
    }
}

    printf ("НОВАЯ МАТРИЦА \n");
for (int i = 0; i < 7; i++)
{
    for (int j = 0; j < 7; j++)
    {
        printf("%d\t", nums[i][j]);
        }
        printf("\n");
}
}
// сортировка вставками по убывванию
if(a == 4) {
     for(int i = 0; i < 7; ++i){ // i - номер текущей строки
    for(int j = 0; j < 7; ++j) // j - номер текущего шага
{ 
        pos = j; 
        tmp = nums[i][j];
        for(int h = j + 1; h < 7 ; ++h) // цикл выбора наименьшего элемента
        {
            if (nums[i][h] > tmp) 
            {
               pos = h; 
               tmp = nums[i][h]; 
            }
        }
        nums[i][pos] = nums[i][j]; 
        nums[i][j] = tmp; // меняем местами наименьший с a[i]
    }
}

    printf ("НОВАЯ МАТРИЦА \n");
for (int i = 0; i < 7; i++)
{
    for (int j = 0; j < 7; j++)
    {
        printf("%d\t", nums[i][j]);
        }
        printf("\n");
}
}

// сортировка вставками по возрастанию 
if(a == 5) {
     for(int i = 0; i < 7; ++i){ // i - номер текущей строки
    for(int j = 0; j < 7; ++j) // j - номер текущего шага
{ 
        pos = j; 
        tmp = nums[i][j];
        for(int h = j + 1; h < 7 ; ++h) // цикл выбора наименьшего элемента
        {
            if (nums[i][h] < tmp) 
            {
               pos = h; 
               tmp = nums[i][h]; 
            }
        }
        nums[i][pos] = nums[i][j]; 
        nums[i][j] = tmp; // меняем местами наименьший с a[i]
    }
}

    printf ("НОВАЯ МАТРИЦА \n");
for (int i = 0; i < 7; i++)
{
    for (int j = 0; j < 7; j++)
    {
        printf("%d\t", nums[i][j]);
        }
        printf("\n");
}
}

//Выход из программы
if (a == 6) break;

}
system("pause"); //пауза для фиксации консоли
return 0;
}