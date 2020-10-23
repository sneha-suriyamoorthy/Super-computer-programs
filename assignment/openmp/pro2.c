#include<stdio.h>    
#include<stdlib.h>  
#include <sys/time.h>
int main(){  
int a[10][10],b[10][10],mat[10][10],r,c,i,j,k;    
system("cls");  
printf("Enter the number of rows=");    
scanf("%d",&r);    
printf("Enter the number of columns=");    
scanf("%d",&c);    
printf("Enter the matrix A element=\n");    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
scanf("%d",&a[i][j]);    
}    
}    
printf("Enter the matrix B element=\n");    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
scanf("%d",&b[i][j]);    
}    
}    
struct timeval t0, t1;
gettimeofday(&t0, 0);

printf("Result : \n");    


#pragma omp parallel for
for(int i=0; i<r; i++)
{
for(int j=0; j<c; j++)
{
for(int k=0; k<c; k++)
{
mat[i][j]+=a[i][k]*b[k][j];    
}
}
}



for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
printf("%d\t",mat[i][j]);    
}    
printf("\n");    
}    
gettimeofday(&t1, 0);
double t = (t1.tv_sec-t0.tv_sec) * 1.0f + (t1.tv_usec - t0.tv_usec) / 1000000.0f;
printf("\ntime required to run %lf",t);
return 0;  
}  
