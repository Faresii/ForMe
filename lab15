#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>

struct telek
{
char name[20];
int inch; // Дюймы
int cost;
};


int main()
{

FILE * bfile = NULL;
const char filename[] = "text_15.bin";
unsigned int number = 0; // переменная для записи нового значения в файл
char wasCreated = 0; // флаг, был создан новый файл или работаем с существующим
int counter = 0; // переменная, храняющее в себе кол-во записей в файле
int choice = 0; // переменная для меню
int res = 0;
int yn = 0;

int _result = 0;

struct telek TV;




do
{
wasCreated = 0; // флаг, сообщающий, что новый файл не был создан, пытаемся работать с существующим файлом
bfile = fopen(filename, "r+b"); //попытка открытия бинарного файла для чтения и записи
if (bfile == NULL) // если файла нет, то создаем
{
printf("Try to create file...\n");
bfile = fopen(filename, "w+b");
if (bfile == NULL)
{
printf("Error opening file!!!\n");
system("pause");
exit(1);
}

printf("File created successfully...\n");
wasCreated = 1; // был создан новый файл
fwrite(&counter, sizeof(counter), 1, bfile);
fclose(bfile);
}
} while (wasCreated); //выполняется до тех пор пока истинно

do
{


printf("Input 1 for reading, 2 for writing, 3 for delete all data in a file, 4 for delete file, 5 for exit: ");
scanf("%d", &choice);

if (choice == 1) // чтение данных из файла
{
rewind(bfile); // перемещаемся в начало файла
fread(&counter,sizeof(counter),1,bfile); // узнаем сколько записей находится внутри файла
if (counter == 0) // если 0, то в файле данных нет
{
printf("File is empty.\n");
}
else // выводим в консоль данные из файла
{


    
    printf("Кол-во нужных телевизоров: %d \n", counter);
    
printf("Data from file: ");
for (int i = 0; i < counter; i++) // считываем все записи
{
fread(&TV.name, 20*sizeof(char), 1, bfile);
fread(&TV.inch, sizeof(int), 1, bfile);
fread(&TV.cost, sizeof(int), 1, bfile);
printf("%s %d %d ", TV.name, TV.inch, TV.cost);
}
printf("\n");

}
}
else if (choice == 2) // запись новых данных в файл
{

printf("Введите данные о телевизоре: ");
// функция scanf_s возвращает кол-во записанных элементов, т.е. в нашем случае должно в res оказаться 1(т.к. записываем в number 1 число)
for (int i = 0; i < 20; i++)
    TV.name[i] = '\0';
scanf("%s %d %d", &TV.name, &TV.inch, &TV.cost); // с клавиатуры вводим новые данные, которые хотим поместить в файл
fflush(stdin); // очищаем входной поток

if ((strcmp(TV.name, "Sony") == 0) && TV.inch < 15) {

rewind(bfile); //перемещаемся в начало файла
fread(&counter, sizeof(counter), 1, bfile); //узнаем кол-во записей в файле
fseek(bfile, 0, SEEK_END); //смещаемся относительно начало файла на размер counter + размер записей (оказывается в конце последних данных)
fwrite(&TV.name, 20*sizeof(char), 1, bfile);
fwrite(&TV.inch, sizeof(int), 1, bfile);
fwrite(&TV.cost, sizeof(int), 1, bfile); // записываем новые данные в файл
counter++; // увеличиваем число записей
rewind(bfile); //перемещаемся в наnumberчало файла
fwrite(&counter, sizeof(counter), 1, bfile); // обновляем поле, хранящее в себе кол-во записей в файле
}

}

else if (choice == 3) // удаление данных из файла
{
do
{
printf("Are you sure that you want to delete all data in this file? [yes - 1, no - 2] ");
res = scanf("%d", &yn);
fflush(stdin); // очищаем входной поток
if (res == 0 || (yn!=1 && yn!=2)) // пользователь ввел что-то отличное от целого числа
printf("Invalid input. Try again.\n");

} while ((yn!=1 && yn != 2) || res == 0);
if (yn == 1)
{
freopen(filename, "w+b", bfile); // закрываем файл и открываем в новом режиме, который удаляет всё, что уже есть в файле
counter = 0;
fwrite(&counter, sizeof(counter), 1, bfile); // помещаем в файл информацию, что данных в нем нет
printf("File has been cleaned! Counter = %d", counter);
printf("\n");
}
else // пользователь не захотел удалять данные в файле
{
printf("Good choice!\n");
}
}
else if (choice == 4) // удаление файла
{
do
{
printf("Are you sure that you want to delete the file? [yes - 1, no - 2] ");
res = scanf("%d", &yn);
fflush(stdin); // очищаем входной поток
if (res == 0 || (yn != 1 && yn != 2)) // пользователь ввел что-то отличное от целого числа
printf("Invalid input. Try again.\n");

} while ((yn != 1 && yn != 2) || res == 0);
if (yn == 1) // Удаление файла
{
fclose(bfile); // закрытие файла обязательно, иначе файл нельзя удалить
if (-1 == remove(filename))
{
printf("Error! File was not deleted!\n");
bfile = fopen(filename, "r+b"); // для продолжения программы заново открываем файл
if (bfile == NULL)
{
system("pause");
exit(1);
}
}
else
{
printf("File was deleted!\n");
system("pause");
return 0;
}

}
else // пользователь не захотел удалять файл
{
printf("Good choice!\n");
}
}
else if (choice == 5) // выход из программы
{
break;
}
else
{
printf("Choose one of the suggested values!\n"); //ввели значение отличное от 1,2,3
}
    
} while(1);



fclose(bfile); // закрытие файла
system("pause");
return 0;
}
