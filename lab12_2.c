#include <stdio.h>
#include <malloc.h>
#include <locale.h> //Здесь объявлена функция setlocale()
#include <stdlib.h> //Здесь объявлена функция system()
#include <math.h>
#include <ctime>

//объявление переменных
int size_row, size_col;

int **nums;


int main(){

srand(time(NULL));

printf("Введите рамзер строк : ");
scanf("%d", &size_row);

printf("Введите рамзер столбцов : ");
scanf("%d", &size_col);


nums = (int**)malloc(size_col * sizeof(int*));


for(int i=0;i< size_row;i++)
 nums[i]=(int*)malloc(sizeof(int)*size_col);

for(int i=0;i< size_row;i++) {
    for(int j=0;j< size_col;j++) 
    nums[i][j]=rand() % 100;
}

// Вывод матрицы
for(int i=0;i< size_row;i++){
    for(int j=0;j< size_col;j++){
        printf("%3d",nums[i][j]);
 }
  printf("\n");
  } 
  printf("\n");
  
// Решение
 int tmpCols; 
if (size_col%2==1)
    {
        tmpCols = size_col / 2 + 1;
    }
    else
    {
        tmpCols = size_col / 2;
    }

int count = 0;
int n = 1;

for(int i=0;i< size_row;i++){
    for(int j=0;j < size_col;j++){

    if (j % 2 == 0 && j > 0 && i == 0){
    count++;

    }
    for(int j=2;j < size_col;j+=2){
        nums[i][j-1] = nums[i][j];
        }
    }
  }

  for(int i=0;i< size_row;i++){
    for(int j=0;j < size_col;j++){
    if(j > count) {
        nums[i][j - count + 1] = nums[i][j];

    }
    }
  }


if (size_col % 2 == 0) count++;
// Перераспределение памяти
size_col -= count ;
for(int i=0;i< size_row;i++)
 nums[i]=(int*)realloc(nums[i], sizeof(int)*size_col);
 
 // Вывод 
for(int i=0;i< size_row;i++){
    for(int j=0;j< size_col;j++)
    printf("%3d",nums[i][j]);

    printf("\n");
    } 
    printf("\n");
  
for (int i = 0; i < size_row; i++)
{
    free(nums[i]);
}

free(nums);

system("pause"); //пауза для фиксации консоли
return 0;
}

