#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#define HEADER ("������������ ������ �1\n���������: ����� �.�., �������� �.�.\n")
#define n 10

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	printf(HEADER);
	srand(time(NULL));
	/*������� 1
	int arr[n] = {0,1,2,3,4,5,6,7,8,9};
	int min = INT_MAX, max = INT_MIN;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("������� ����� ������������ � ����������� ��������� ������� ����� %d\n", max - min);*/
	/*������� 2
	int arr[n];
	printf("������, ������������ �� ��������� �����:");
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
		printf(" %d ", arr[i]);
	}
	*///������� 3//
	/*int size = 0;
	printf("������� ����������� �������: ");
	scanf("%d", &size);
	int* arr = (int*)malloc(size * sizeof(int));
	printf("��������� ������:\n");
	for (int i = 0; i < size; i++)
	{
		printf("%d �������: ", i + 1);
		scanf("%d", &arr[i]);
	}
	printf("���������� ������:");
	for (int i = 0; i < size; i++)
	{
		printf(" %d ", arr[i]);
	}*/
	//free(arr);*/
	//������� 4
	/*
	int arr[n][n];
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand() % 100;
			printf(" %-3d ", arr[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum = sum + arr[i][j];
		}
		printf("����� %d-�� ������ ����� %d\n", i + 1, sum);
		sum = 0;
	}*/
	///������� 5//
		setvbuf(stdin, NULL, _IONBF, 0);
		setvbuf(stdout, NULL, _IONBF, 0);
		int i ;
		struct student
		{
			char famil[20];
			char name[20], facult[20];
			int Nomzach;
		} stud[3],vvod;
		
		for (i = 0; i < 3; i++)
		{
			printf("������� ������� ��������\n"); scanf("%20s", stud[i].famil);
		}
		for (i = 0; i < 3; i++)
		{
			printf("������� ��� �������� %s\n", stud[i].famil); scanf("%20s", stud[i].name);
		}
		for (i = 0; i < 3; i++)
		{
			printf("������� �������� ���������� �������� %s %s\n", stud[i].famil, stud[i].name); scanf("%20s", stud[i].facult);
		}
		for (i = 0; i < 3; i++)
		{
			printf("������� ����� �������� ������ �������� %s %s\n", stud[i].famil, stud[i].name); scanf("%d", &stud[i].Nomzach);
		}

		for (i = 0; i < 3; i++)
		{
			printf("C������ %s %s ��������� �� ���������� %s, ����� �������� ������ %d \n", stud[i].famil, stud[i].name,
				stud[i].facult, stud[i].Nomzach);
		};
		
			printf("������� ������� ��������\n"); scanf("%20s", vvod.famil);
	
		
			printf("������� ��� �������� %s\n", vvod.famil); scanf("%20s", vvod.name);
		
		
			printf("������� �������� ���������� �������� %s %s\n", vvod.famil, vvod.name); scanf("%20s", vvod.facult);
		
		
			printf("������� ����� �������� ������ �������� %s %s\n", vvod.famil, vvod.name); scanf("%d", &vvod.Nomzach);
			for (i = 0; i < 3; i++) {
				if (strcmp(stud[i].famil, vvod.famil) == 0) {
					if (strcmp(stud[i].name, vvod.name) == 0) {
						if (strcmp(stud[i].facult, vvod.facult) == 0) {
							if (stud[i].Nomzach == vvod.Nomzach)
								printf("C������ %s %s ��������� �� ���������� %s, ����� �������� ������ %d \n", stud[i].famil, stud[i].name,
									stud[i].facult, stud[i].Nomzach);
						}
					}
				}
			}
	getch();
	return 0;
	}