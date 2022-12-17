#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h> //Здесь объявлена функция setlocale()
#include <stdlib.h> //Здесь объявлена функция system(), fflush()
#include <time.h> //Здесь объявлена структура tm


int main() {
FILE *file_in; //указатель на структуру FILE
FILE *file_out;
float x = 0, result = 0;

setlocale(LC_ALL, "Russian"); //переключение кодировки вывода на консоль
setlocale(LC_NUMERIC, "C"); //разделитель дробной части - точка

file_in = fopen("numbers.txt", "r"); //открытие файла для чтения
if (file_in == NULL) {
printf("Error opening file for read");
fflush(stdin); //очистка потока
getchar();
exit(EXIT_FAILURE); //аварийное завершение программы
}

file_out = fopen("result.txt", "w");
if (file_out == NULL) { //если файл не был открыт
printf("Error opening file for write");
getchar();
exit(EXIT_FAILURE); //аварийное завершение программы
}


while (!feof(file_in))
{
fscanf(file_in, "%f", &x);
printf("%.2f", result);
result -= x;
printf("-%.2f = %.2f\n", x, result);
}
printf("___________________________________\n");
printf("Результат работы программы: %.2f\nРезультат сохранён в файле result.txt в каталоге программы\n", result);
fprintf(file_out, "%.2f", result);

fclose(file_in); //закрытие файла
fclose(file_out);

system("pause"); //пауза для фиксации консоли
return 0;
}
