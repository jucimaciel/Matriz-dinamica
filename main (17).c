#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n, m;
int **mat;
int **transposta;
int n2, m2;
int maior=0, maior2=0, maior3=0;

printf("Informe a quantidades de linhas e colunas\n");
scanf("%d %d", &n, &m);
mat= (int**) malloc(n*(sizeof(int)));

for(int i=0; i<n; i++){
  mat[i] = (int*) malloc(m*(sizeof(int)));
}

for(int i=0; i<n; i++){
  for(int j=0; j<m; j++){
    printf("valores da matriz [%d] [%d]\n", i, j);
        scanf("%d", &mat[i][j]);
}
printf("\n");
}
printf("quantidade de linhas da matriz transposta:\n");
scanf("%d", &n2);
printf("quantidade de colunas da matriz transposta:\n");
scanf("%d", &m2);

transposta= (int**) malloc(n2*(sizeof(int)));
for(int i=0; i<n2; i++){
    transposta[i] = (int*) malloc(m2*(sizeof(int)));
}
for(int i=0; i<n2; i++){
  for(int j=0; j<m2; j++){
    transposta[j][i]=mat[i][j];
  }
}
printf("\na matriz primaria e\n");
for(int i=0; i<n; i++){
  for(int j=0; j<m; j++){
     printf("%d ", mat[i][j]);
  }
    printf("\n");
}
//printf ("quantidade de linha e coluna da matriz transposta");
//scanf("%d %d", &n2,&m2);

    printf("\nmatriz transposta\n");
  for(int i=0; i<m2; i++){
      for(int j=0; j<n2; j++){
        printf("%d ", transposta[i][j]);

  }
  printf("\n");
  }
  
maior = mat[0][0]; 
for (int i=0; i<n; i++){
  for(int j=0; j<m; j++){
      if (mat[i][j]>maior){
        maior = mat[i][j];  

      }
      else {
        if (mat[i][j]<maior){
        maior2 = mat[i][j];  
        }
        else if (mat[i][j]<maior2){
        maior3 = mat[i][j];  
      }
      }
  }
}
printf("o maior valor é: %d  o segundo maior: %d o terceiro maior: %d\n", maior, maior2, maior2);

for (int i=0; i<n; i++){
  free(mat[i]);
}
free(mat);
for (int i=0; i<n2; i++){
  free(transposta[i]);
}
free(transposta);
  return 0;
}
