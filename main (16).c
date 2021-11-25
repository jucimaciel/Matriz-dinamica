#include <stdio.h>
#include <stdlib.h>

int main(void){

double **mat;
double **mat2;
int n, m;
int n2, m2;
double soma;


printf("Informe a quantidades de linhas e colunas A\n");
scanf("%d %d", &n, &m);

mat = (double**) malloc(n*(sizeof(double)));

for(int i=0; i<n; i++){
  mat[i] = (double*) malloc(m*(sizeof(double)));
}

for(int i=0; i<n; i++){
  for(int j=0; j<m; j++){
    printf("insira os valores %d %d\n", i,j );
    scanf("%lf", &mat[i][j]);

}
}
for(int i=0; i<n; i++){
  for(int j=0; j<m; j++){
    printf("%.2lf\t", mat[i][j]);
  soma=soma+mat[i][j];
  }
  printf("\n");

}
printf("Informe a quantidades de linhas e colunas da matriz B\n");
scanf("%d %d", &n2, &m2);
mat2 = (double**) malloc(n2*(sizeof(double)));

for(int i=0; i<n; i++){
  mat2[i] = (double*) malloc(m2*(sizeof(double)));
}
for(int i=0; i<n2; i++){
  for(int j=0; j<m2; j++){
    printf("insira os valores %d %d\n", i, j);
    scanf("%lf", &mat2[i][j]);
}
}


for(int i=0; i<n2; i++){
  for(int j=0; j<m2; j++){
    printf("%.2lf\t", mat2[i][j]);
  soma=soma+mat2[i][j];
  }
  printf("\n");
 
}
printf("a soma das duas matrizes é %lf", soma);
for (int i=0; i<n; i++){
  free(mat[i]);
}
free(mat);
for (int i=0; i<n2; i++){
  free(mat2[i]);
}
free(mat2);
  return 0; 

}

