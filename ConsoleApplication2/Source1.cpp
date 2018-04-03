#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include <time.h>
#include <string.h>

void fillArray(int *pt, int len, int len2)
{
	for (int i = 0;i < len;i++)
	{
		for (int j = 0;j < len2;j++)
		{
			*(pt + i*len + j) = 1 + rand() % 100;
		}
	}
}

void fillArray2(int *pt, int len)
{
	for (int i = 0;i < len;i++)
	{
			*(pt + i) = 1 + rand() % 100;
	}
}


void printArray(int *pt, int len, int len2)
{
	for (int i = 0;i < len;i++)
	{
		for (int j = 0;j < len2;j++)
		{
			printf("A[%d][%d]=%d", i, j, *(pt + i*len + j));
		}
		printf("\n");
	}
}

void realocc(int *pt, int *pt2, int len, int len2)
{
	int min = *pt;
	int count=0;
	for (int i = 0;i < len;i++)
	{
		 min = 9999;
			for (int j = 0;j < len2;j++)
			{
				if (*(pt + i*len + j) < min)
				{
					min = *(pt + i*len + j);
				}
			}
			*(pt2 + count) = min;
			count++;
			(int*)realloc(pt2, sizeof(int)*(count+1));
	}
}

void PrintMass(int *pt, int len)
{
	for (int i = 0;i < len;i++)
	{
			printf("A[%d]=%d\t", i, *(pt + i));
	}
	printf("\n");
}

void Ruchkami(int *pt, int len)
{
	for (int i = 0; i < len; i++)
	{
		scanf("%d", (pt + i));
	}
}