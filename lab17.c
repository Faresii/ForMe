#include <stdio.h>
#include <locale.h> //Здесь объявлена функция setlocale()
#include <stdlib.h> //Здесь объявлена функция system()
#include <math.h>
#include <string.h>

#define LEN  50

//объявление переменных
char str[] = "";
int max = 0;



int main()
{



    char str[LEN] = "";
    char *pFirst, *pLast = str;               
    int  len, max_len = 1;  

     



    printf( "Введите строку : \n " );
    fgets( str, LEN, stdin);

    while( *pLast )
    {
        while( *pLast != '\0' && *pLast == ' ' )    pLast++;
        

        pFirst = pLast;
        while( *pLast != '\0' && *pLast != ' ' )
        {
            pLast++;
            if (*pLast == '\n') *pLast = '\0';
        }
 
        len = pLast - pFirst;
        if( len > max_len )    max_len = len ;
        
        
    } 
    
    printf( "Максимальная длина слова : %d\n", max_len );

system("pause"); //пауза для фиксации консоли
return 0;
}

