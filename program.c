#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define rows 5
#define cols 3
int main (){
int A[rows][cols];
srand (time (NULL));
for (int i=0;i<rows;i++){
    for (int j=0;j<cols;j++){
        A[i][j]=-10+rand()%21;
    }
}

puts("-----------------");
printf("Matrix %dx%d\n",rows,cols);
for (int i=0;i<rows;i++){
  for (int j=0;j<cols;j++){
    printf("%4d",A[i][j]);
}
puts("");
}
puts("--------------");


puts("-----------------");
printf("Matrix %dx%d\n",rows,cols);
for (int i=0;i<rows;i++){
    int largest=A[i][0];
  for (int j=0;j<cols;j++){
    if(largest<A[i][j]){
        largest=A[i][j];
    }
}
printf("rows%d largest is  %d",i,largest);
puts("");
}
puts("--------------");
   puts("-----------------");
printf("Matrix %dx%d\n",rows,cols);
for (int j=0;j<cols;j++){
    int largest=A[0][j];
  for (int i=0;i<rows;i++){
    if(largest<A[i][j]){
        largest=A[i][j];
    }
}
printf("cols%d largest is  %d",j,largest);
puts("");
}
puts("--------------"); 
    return 0;
}
