#include <stdio.h>
#include <locale.h>
#include "Header.h"
#include<iostream>
#include<time.h>
#include<string.h>

using namespace std;
char f;
void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "RUS");

	do
	{
		int N;
		printf("������� ����� �������\n");
		scanf("%d", &N);
		switch (N)
		{
		
		case 1:
		{
			/*1.	2.	� ������������� ������� ����� ���������� �� ����������� ��������� ����� �������*/
			 
			int N;
			int M;
			printf("������� ������� M-N");
			scanf("%d-%d", &M, &N);
			int *pt = NULL;
			pt = (int*)malloc(sizeof(int)*M*N);
			if (pt == NULL)
			{
				printf("����������");
				exit(0);
			}
			fillArray(pt,M, N);
			printArray(pt, M, N);
			int *pt2;
			pt2 = (int*)calloc(1,sizeof(int));
			if (pt2 == NULL)
			{
				printf("����������");
				exit(0);
			}
			realocc(pt, pt2, M, N);
			PrintMass(pt2, M);
			//int min = *pt;
			//int count = 0;
			//for (int i = 0;i < M;i++)
			//{
			//	int min = 9999;
			//	for (int j = 0;j < N;j++)
			//	{
			//		if (*(pt + i*M + j) < min)
			//		{
			//			min = *(pt + i*M + j);
			//		}
			//	}
			//	*(pt2 + count) = min;
			//	count++;
			//	pt2 = (int*)realloc(pt2, sizeof(int)*(count + 1));
			
			

		}
		break;
		case 2:
		{
			/*5.	6.	����� ������������� ������. ������� ������� ��� ���������, �������� ������� ������, ��� � ������� ������ �� ����. ���������� ���������� ����� �����.*/
			int *pt = NULL;
			pt = (int*)malloc(sizeof(int) * 1);
			int *mass = NULL;
			mass= (int*)malloc(sizeof(int) * 15);
			fillArray2(mass, 15);
			PrintMass(mass, 15);
			int count=0;
			for (int i = 0;i < 14;i++)
			{
				if (*(mass + i) > *(mass + i + 1))
				{
					*(pt + count) = i;
					count++;
					pt = (int*)realloc(pt, sizeof(int)*(count + 1));
				}
			}
			PrintMass(pt, count);
		
		}
		break;
		case 7:
		{
			/*7.	����� ������������� ������. ����������, �������� �� �������� ��� ��������� �������������� ����������. 
			���� ��� � ������� �������� ����������, ���� ���� � ����� ��� ��������.*/
			int *pt = NULL;
			pt = (int*)malloc(sizeof(int) * 5);
			Ruchkami(pt, 5);
			PrintMass(pt, 5);
		}
		break;
		case 8:
		{
			//8.	��� ������ ������������ �����. ���������� ������� ������� (�������� � ������), ������� �������� ������ � ��������� ������������� ����� R.

		}
		}
		printf("������ ���������� ��������� �������\n");
		scanf("%c", &f);
	} while (f == 'y');

}