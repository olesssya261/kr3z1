#include <stdio.h>
#include "Checks.h"
void ManualInput(double**FirstMatrix,double**SecondMatrix, int M){
	printf("¬ведите матрицу A. \n");
	for (int i=0; i<M; i++){
		for (int j= 0; j<M; j++){
			printf("Matrix[%d][%d] = \n", i+1, j+1);
			FirstMatrix[i][j] = GetDouble();
		}
	}
	printf("¬ведите матрицу B. \n");
	for (int i=0; i<M; i++){
			for (int j= 0; j<M; j++){
				printf("Matrix[%d][%d] = \n", i+1, j+1);
				SecondMatrix[i][j] = GetDouble();
			}
		}
}
