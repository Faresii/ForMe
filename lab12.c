#include <stdio.h>
#include <malloc.h>
#include <locale.h> //Здесь объявлена функция setlocale()
#include <stdlib.h> //Здесь объявлена функция system()
#include <math.h>


//объявление переменных
int size, elem;
int *nums;


int main(){



printf("Введите рамзер масиива : ");
scanf("%d", &size);


nums = (int*)malloc(size * sizeof(int));

printf("Введите массив : \n");

for (int i = 0; i < size;i++){
  scanf("%d", &elem);
  *(nums + i) = elem;
  printf("nums[%d] = %d \n", i, *(nums + i));
    
}

printf("Массив : ");

for (int i = 0; i < size;i++)  printf("%d ", *(nums + i));

//Решение
printf("\n Решение :\n");



int n_size = size;


  for(int i = 0;i < size;i++){
    
    if ( *(nums + i) % 2 != 0){
      n_size++;
      
    }
  }


int i = 0;

    while(i < n_size)
    {
        if(nums[i]%2 != 0)
        {
            for(int j = n_size ; j > i; j--) nums[j]=nums[j-1];          
            nums[i + 1]= 0 ;
        }
        i++;
    }
    
  for (int i = 0; i < n_size; i++)
  {
    if (nums[i] == 0)
    {
      nums[i] = 1;
    }
  }
  

 printf("Ответ : ");
  for (int j = 0; j < n_size; j++)
    printf("%d ", *(nums + j));

free(nums);

system("pause"); //пауза для фиксации консоли
return 0;
}