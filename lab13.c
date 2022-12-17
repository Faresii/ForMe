#include <stdio.h>
#include <malloc.h>
#include <locale.h> //Здесь объявлена функция setlocale()
#include <stdlib.h> //Здесь объявлена функция system()
#include <math.h>


//объявление переменных


struct persone{
    char firstname[20];
    char lastname[20];
    char patronymic[20];
    char position[20];
    char gender[20];
    int year;

};

void func(struct persone *n){

    printf("Введите имя ");
    scanf("%s", n->firstname);
    printf("Введите фамилию ");
    scanf("%s",n->lastname);
    printf("Введите отчество ");
    scanf("%s",n->patronymic);
    printf("Введите Должность ");
    scanf("%s", n->position);
    printf("Введите пол ");
    scanf("%s", n->firstname);
    printf("Введите год приема на работу ");
    scanf("%d", &n->year);

    
}


int main(){

struct persone nums[5];

for (int i = 0; i < 5; i++)
{
    func(&(nums[i]));
}

//Ответ
printf("Сведения о сотрудниках, стаж которых не превышает 10 \n");

for (int i = 0; i < 5; i++)
{
    if (2022 - nums[i].year < 10){
        printf("\n");
    printf("имя: %s \n", nums[i].firstname);
    printf("фамилия : %s \n", nums[i].lastname);
    printf("отчество : %s \n ", nums[i].patronymic);
    printf("Должность :%s \n ", nums[i].position);
    printf("пол : %s \n", nums[i].gender);
    printf("год приема на работу : %d \n ", nums[i].year);
    

    }
}


system("pause"); //пауза для фиксации консоли
return 0;
}

