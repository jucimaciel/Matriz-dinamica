#include <stdio.h>
#include <stdlib.h>

int main(void) {
int **mat;
int n, m;

printf("Informe a quantidades de linhas e colunas\n");
scanf("%d %d", &n, &m);

mat = (int**) malloc(n*(sizeof(int)));

if (mat == NULL) {
     printf ("** Erro: Memoria Insuficiente **");
     exit(1);
     }

for(int i=0; i<n; i++){
  mat[i] = (int*) malloc(m*(sizeof(int)));
}
if (mat == NULL) {
     printf ("** Erro: Memoria Insuficiente **");
     exit(1);
     }
for(int i=0; i<n; i++){
  for(int j=0; j<m; j++){
    mat[i][j]=0;
    printf("%d", mat[i][j]);


}
printf("\n");
}
for (int i=0; i<n; i++){
  free(mat[i]);
}
free(mat);
  return 0;
}