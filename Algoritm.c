#include <math.h>
void CopyMatrix(double**AMatrix, double**CMatrix, int M);
void GetNewValues(double**AMatrix, double**BMatrix, double**CMatrix, int M){
	CopyMatrix(AMatrix,CMatrix,M);
	for (int i = 0; i<M; i++){
		double max=BMatrix[i][0];
		for (int j = 0; j<M; j++){
			if(max<BMatrix[i][j]){
			max=BMatrix[i][j];
			}
			}
		for (int j = 0; j<M; j++){
			CMatrix[i][j]=CMatrix[i][j]*max;
			}
		}
	
}

void CopyMatrix(double**AMatrix, double**CMatrix, int M){
for (int i=0; i<M; i++){
		for (int j= 0; j<M; j++){
			CMatrix[i][j]=AMatrix[i][j];
		}
}}
