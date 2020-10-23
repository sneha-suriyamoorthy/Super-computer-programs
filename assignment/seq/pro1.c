#include<stdio.h>    
#include<stdlib.h>  
int main(){  
int a[10][10],b[10][10],mat[10][10],r,c,i,j,k;    
system("cls");  
printf("Enter the number of rows=");    
scanf("%d",&r);    
printf("Enter the number of columns=");    
scanf("%d",&c);    
printf("Enter matrix A =\n");    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
scanf("%d",&a[i][j]);    
}    
}    
printf("Enter matrix B =\n");    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
scanf("%d",&b[i][j]);    
}    
}    
    
printf("Resultant matrix=\n");    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
mat[i][j]=0;    
for(k=0;k<c;k++)    
{    
mat[i][j]+=a[i][k]*b[k][j];    
}    
}    
}    
//for printing result    
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
printf("%d\t",mat[i][j]);    
}    
printf("\n");    
}    
return 0;  
}  
