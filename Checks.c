#include <stdio.h>//����������� ���������
#include <stdbool.h>
#include "Checks.h"
double GetDouble(void)
{
    char temprem;
    double input  = 0;
    while(true)
    {
        temprem = 0;
        if((!scanf("%lf%c",&input ,&temprem))|| temprem != '\n')
        {
            printf("������ �����.\n������� �����: ");
               while (getchar() != '\n'); //������ ����� �-��� getchar()
        }
    else
        return input;
    }
}
int GetInt(void){
    char temprem;
    int input  = 0;
    while(true)
    {
        temprem = 0;
        if((!scanf("%d%c",&input ,&temprem))|| temprem != '\n')
        {
            printf("������ �����.\n������� �����: ");
               while (getchar() != '\n'); //������ ����� �-��� getchar()
        }
    else
        return input;
    }
}
int GetUserChoice(void){
	char temprem;
    int input  = 0;
    while(true)
    {
        temprem=0;
        if((!scanf("%d%c",&input ,&temprem))|| temprem != '\n')
        {
            printf("������ �����.\n������� �����: ");
                while (getchar() != '\n');
        }
    else if(input==HandInput||input==RandomInput||input==Exit){
        return input;
		}
		else{
		printf("������ �����.\n������� �����: ");
		}

    }
}
