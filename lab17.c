#include <stdio.h>
#include <locale.h> //Здесь объявлена функция setlocale()
#include <stdlib.h> //Здесь объявлена функция system()
#include <math.h>
#include <string.h>



//объявление переменных
char str[] = "";
int max = 0;



int main()
{

int LEN = 50;

    char str[LEN] = "";
    char *pFirst = str;
    char *pLast = str;               
    int  len = 1;
    int max_len = 0;  

     



    printf( "Введите строку : \n " );
    fgets( str, LEN, stdin);

    int size_str = strlen(str);  
    printf( "%d \n ", size_str );
    while ( size_str > LEN){
    printf( "Введите строку : \n " );
    fgets( str, LEN, stdin);
        if (size_str < LEN) break;
        else printf( "Некорректный ввод \n " );
    }

    while( *pLast )
    {
        while( *pLast != '\0' && *pLast == ' ' )    pLast++;
        

        pFirst = pLast;
        while( *pLast != '\0' && *pLast != ' ' )
        {
            pLast++;
            
        }
 
        len = pLast - pFirst;
        if( len > max_len )    max_len = len;
        
    } 
    printf( "Максимальная длина слова : %d\n", max_len );

system("pause"); //пауза для фиксации консоли
return 0;
}

