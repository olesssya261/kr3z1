//Кутькина Олеся, гр.№ 4303, вариант 13, Контрольная работа №1, задача №2.
#include <stdio.h>//Подключение Библиотек
#include <locale.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Checks.h"
#include "RandomInput.h"
#include "HandInput.h"
#include "Algoritm.h"

int main(void)// определяем функцию main
{

	setlocale(LC_CTYPE, "RU");//Подключение русской локализации
	int M = 0;
	int userChoice = 0;
	printf("Кутькина Олеся, гр.№ 4303, вариант 13, Контрольная работа №2, задача №3. \n");
	while(true) {	
		
		printf("Нажмите 1, если хотите ввести значения вручную\n");
		printf("Нажмите 2, если хотите ввести значения рандомно\n");
		printf("Нажмите 3, если хотите выйти\n");
		userChoice = GetUserChoice(); //вызов ф-ции
		switch(userChoice){
			case Exit:
			{
				return EXIT_SUCCESS;
			}
			default:{
			printf("Введите размерность матрицы\n");
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
			printf("Итоговые данные: \n");
			printf("Вывод матрицы A: \n");
			for (int i = 0; i < M; i++) {
				for (int j = 0; j < M; j++) {

					printf(" %f \t", AMatrix[i][j]);
				}
			}
			printf("\n");
			printf("Вывод матрицы B: \n");
			for (int i = 0; i < M; i++) {
				for (int j = 0; j < M; j++) {
					printf(" %f \t", BMatrix[i][j]);
				}
			}
			printf("\n");
			printf("Вывод матрицы C: \n");
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
	
		printf("Введите любой символ, чтобы продолжить работу.\n");
		getchar();
	} ;
	return 0;

}

