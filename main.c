#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h> //M vai ser coluna da matriz A e linha da matriz B//

int main() {
    int N,M,O;
    int i,j,l;
    N=0;
    M=0;
    O=0;
    scanf("%d",&N);
    scanf("%d",&M);
    scanf("%d",&O);
    int A[N][M], B[M][O];
    int C[N][O];
    for(i=0;i<N;i++){
     for(j=0;j<M;j++)
     scanf("%d",&A[i][j]);
    }
     for(i=0;i<M;i++){
     for(j=0;j<O;j++)
     scanf("%d",&B[i][j]);
     }
     //lógica da multiplicação//
     for(i=0;i<N;i++){
     for(j=0;j<O;j++){
         C[i][j]=0;
     for(l=0;l<M;l++){
        C[i][j]=C[i][j]+(A[i][l]*B[l][j]);
     }
     }
     }
     for(i=0;i<N;i++){
     for(j=0;j<O;j++)
        if(j!=O-1){
        printf("%d ",C[i][j]);
        }
     else{
        printf("%d",C[i][j]);
        printf("\n");
     }
     }








	return 0;
}

