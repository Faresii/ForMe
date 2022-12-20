#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>

struct progmaker
{
char film[20];
char surname[20];
char name[20];
int year;
char country[20];
int cost;
int income;
int profit;

};

//главная программа
int main()
{


FILE* fp; //Указатель на файл
struct progmaker proger;

fp = fopen("test.txt", "r"); //открытие файла для чтения

//Проверка открытия файла
if (fp == NULL) //если файл не был открыт
{
printf("Error opening file for write");
getchar();
exit(EXIT_FAILURE); //аварийное завершение программы
}

int i = 0;
while (!feof(fp)) //Пока не конец файла
{
fscanf(fp, "%s %s %s %d %s %d %d %d", &proger.film, &proger.surname, &proger.name, &proger.year, &proger.country, &proger.cost, &proger.income, &proger.profit);
if ((strcmp(proger.surname, "Гофман") == 0) && (strcmp(proger.name, "Ежи") == 0))
printf("%s %s %s %d %s %d %d %d\n", proger.film, &proger.surname, proger.name, proger.year, proger.country, proger.cost, proger.income, proger.profit);

}

fclose(fp); //закрытие файла
system("pause"); //пауза для фиксации консоли
return 0;
}
