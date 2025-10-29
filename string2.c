//Write a C program to read a square matrix (a 2D array) from the user. You will first need to ask the user for the dimension of the matrix

#include <stdio.h>
#include <math.h>

#define MAX 10

int main(){

int n;
int i,j;
int array[MAX][MAX];

printf("Enter the dimension(from 1 to %d): ",MAX);
scanf("%d", &n);

if(n<=0 || n>MAX){
    printf("Error: Enter a valid dimension");
}

for(i =0; i<n;i++){
      for(j=0;j<n;j++){
        printf("Enter the matrix element [%d][%d]: ",i+1,j+1);
        scanf("%d", &array[i][j]);
        printf("\n");
      }
  printf("---END OF THE ROW---\n");
}

printf("The matrix is: \n");
for(i =0; i<n;i++){
      for(j=0;j<n;j++){
        printf("%d ",array[i][j]);
      }
  printf("\n");
}
int trace = 0;
for(i =0; i<n;i++){
      for(j=0;j<n;j++){
        if(i == j){
            trace = trace + array[i][j];
        }
      }
  
}
printf("The trace is: %d \n", trace);

int norm=0;
for(i =0; i<n;i++){
      for(j=0;j<n;j++){
        norm = norm + (array[i][j] * array[i][j]);
      }
}
double normfinal = 0;
normfinal = sqrt(norm);
printf("The norm is: %f \n",normfinal);



return 0;

}