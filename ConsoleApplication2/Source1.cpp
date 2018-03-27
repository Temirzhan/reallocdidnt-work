#include <stdio.h>
#include <locale.h>
#include "Header.h"
#include<iostream>
#include<time.h>
#include<string.h>


void SumProzMassiv(const int *Massiv, int *summ, int *proiz,int len)
{
	for (int i = 0 ;i< len;i++)
	{
		*summ += *(Massiv + i);
	}
	for (int i = 0;i< len;i++)
	{
		*proiz *= *(Massiv + i);
	}
}

void massivShow(int *Massiv, int len)
{
	for (int i = 0;i< len;i++)
	{
		printf("A[%d]=%d\n",len, *(Massiv + i));
	}

	//зачем я здесь исполбзую безопасную работа, потоучто не обходимо получить сумму и произведение элементов массива без его изменения; 
}
void SumProzMassivMnogomer( int *Massiv, int *summ, int *proiz, int len)
{
	for (int i = 0;i< len;i++)
	{
		for(int j=0;j<len;j++)
		*summ += *(Massiv + i*2+j);
	}
	for (int i = 0;i< len;i++)
	{
		for (int j = 0;j<len;j++)
			*summ += *(Massiv + i * 2 + j);
	}
}

void random(int*Massiv, int len)
{
	
	for (int i = 0;i< len;i++)
	{
		 *(Massiv + i)=1+rand()%10;
	}
}

void  MassivInd(int *Start, int*End, MyEnum t)
{
	int chet = 0;
	int i = 0;
	switch (t)
	{
	case 0:
		{
		while (Start < End)
		{
			if (*(Start + i) < 0)
				chet++;
			i++;
		}
		printf("Отрицательные элементы %d\n", chet);
	}
		break;
	case 1:
	{
		while (Start < End)
		{
			if (*(Start++) > 0)
				chet++;
		}
		printf("Положительные элементы %d\n", chet);
	}
	break;
	case 2:
	{
		while (Start < End)
		{
			if (*(Start + i) == 0)
				chet++;
			i++;
		}
		printf("Нулевые элементы %d\n", chet);
	}
	break;
	}
}
void massivShowMnogomer(int *Massiv, int len,int len2)
{
	for (int i = 0;i< len;i++)
	{
		for(int j=0;j<len2;j++)
		printf("A[%d][%d]=%d", len,len2, *(Massiv + i * 2 + j));
	}
	printf("\n");
	//зачем я здесь исполбзую безопасную работа, потоучто не обходимо получить сумму и произведение элементов массива без его изменения; 
}

int *MassiSrednee(int *Massiv, int len, int len2, int *chet, int *nechet, int *srednee)
{
	for (int i = 0;i< len;i++)
	{
		for (int j = 0;j < len2;j++)
		{
			if (*(Massiv + i * 2 + j) % 2 == 0)
				*nechet=*nechet+1;

			else
				*chet=*chet+1;

			*srednee += *(Massiv + i * 2 + j);
		}
	}
	*srednee = *srednee / (len*len2);
	return &*srednee;
}

int MyCurs(int A, int B)
{
	if (A <= B)
	{
		return A+= MyCurs(A+1,B );
	}
	return 0;
}