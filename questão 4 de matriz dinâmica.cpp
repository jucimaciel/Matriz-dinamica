#include <stdio.h>
#include <stdlib.h>
int main(){

  	FILE *arquivo;
    int l, c;
    int **mat=NULL;
    arquivo = fopen("aqrv.txt", "r");
    if(arquivo == NULL){
    printf("Erro na leitura do arquivo.\n");
    exit(1);
  }

    fscanf(arquivo, "%d %d", &l, &c);
    mat=(int**)malloc(l*(sizeof(int)));

    for(int i=0; i<l; i++){
    	mat[i]=(int*)malloc(c*(sizeof(int)));

}
printf("linha: %d coluna: %d\n", l,c);
    for(int i=0; i<l; i++){
    for(int j=0; j<c; j++){
    	fscanf(arquivo,"%d", &mat[i][j]);
    }
}
for(int i=0; i<l; i++){
	for(int j=0; j<c; j++){
		printf("%d", mat[i][j]);
	}
	printf("\n");
}
fclose(arquivo);
for (int i=0; i<n; i++){
  free(mat[i]);
}
free(mat);
return 0;
}
