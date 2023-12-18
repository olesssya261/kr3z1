#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
void GetRandomDouble(double**FirstMatrix,double**SecondMatrix, int M){
srand(time(NULL)); // установка базы геренратора случайных чисел
printf("—генирированна€ матрица A. \n");	
	for (int i = 0; i<M; i++){
		for (int j = 0; j<M; j++){
			FirstMatrix[i][j] = -100 + rand() % (100 + 1) + rand() / (RAND_MAX + 1.0);
			printf(" %f \t", FirstMatrix[i][j]);
		}
	}
printf("—генирированна€ матрица B. \n");	
	for (int i = 0; i<M; i++){
		for (int j = 0; j<M; j++){
			SecondMatrix[i][j] = -100 + rand() % (100 + 1) + rand() / (RAND_MAX + 1.0);
			printf(" %f \t", SecondMatrix[i][j]);
		}
	}
}
