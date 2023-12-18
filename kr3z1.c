//�������� �����, ��.� 4303, ������� 13, ����������� ������ �1, ������ �2.
#include <stdio.h>//����������� ���������
#include <locale.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Checks.h"
#include "RandomInput.h"
#include "HandInput.h"
#include "Algoritm.h"

int main(void)// ���������� ������� main
{

	setlocale(LC_CTYPE, "RU");//����������� ������� �����������
	int M = 0;
	int userChoice = 0;
	printf("�������� �����, ��.� 4303, ������� 13, ����������� ������ �2, ������ �3. \n");
	while(true) {	
		
		printf("������� 1, ���� ������ ������ �������� �������\n");
		printf("������� 2, ���� ������ ������ �������� ��������\n");
		printf("������� 3, ���� ������ �����\n");
		userChoice = GetUserChoice(); //����� �-���
		switch(userChoice){
			case Exit:
			{
				return EXIT_SUCCESS;
			}
			default:{
			printf("������� ����������� �������\n");
			M = GetInt();
			double** AMatrix = (double**)malloc(M * sizeof(double*));
			for (int i = 0; i < M; i++) {
				AMatrix[i] = (double*)malloc(M * sizeof(double));
			}

			double** BMatrix = (double**)malloc(M * sizeof(double*));
			for (int i = 0; i < M; i++) {
				BMatrix[i] = (double*)malloc(M * sizeof(double));
			}
			double** CMatrix = (double**)malloc(M * sizeof(double*));
			for (int i = 0; i < M; i++) {
				CMatrix[i] = (double*)malloc(M * sizeof(double));
			}
			switch (userChoice){
				case HandInput:
				{
				ManualInput(AMatrix,BMatrix, M);
				break;
				}
				case RandomInput:
				{
				GetRandomDouble(AMatrix,BMatrix, M);
				break;
				}
				}
			GetNewValues(AMatrix, BMatrix, CMatrix, M);
			printf("�������� ������: \n");
			printf("����� ������� A: \n");
			for (int i = 0; i < M; i++) {
				for (int j = 0; j < M; j++) {

					printf(" %f \t", AMatrix[i][j]);
				}
			}
			printf("\n");
			printf("����� ������� B: \n");
			for (int i = 0; i < M; i++) {
				for (int j = 0; j < M; j++) {
					printf(" %f \t", BMatrix[i][j]);
				}
			}
			printf("\n");
			printf("����� ������� C: \n");
			for (int i = 0; i < M; i++) {
				for (int j = 0; j < M; j++) {
					printf(" %f \t", CMatrix[i][j]);
				}
			}
			printf("\n");
			for (int i = 0; i < M; i++) {
				free(AMatrix[i]);
				free(BMatrix[i]);
				free(CMatrix[i]);
			}
			free(AMatrix);
			free(BMatrix);
			free(CMatrix);
			}
		}
	
		printf("������� ����� ������, ����� ���������� ������.\n");
		getchar();
	} ;
	return 0;

}

