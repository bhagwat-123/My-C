#include<stdio.h>

void main()
{
int i,j,n;

printf("Enter n number\n");
scanf("%d",&n);

for(i=0;i<n;i++)
{
  for(j=0;j<n;j++)
  {
	  if(i==0 || i==n-1 || j==0 || j==n<0 )
		  printf("*");
	  else
	  {
	   printf(" ");
	   
	  }  
	  
	  printf("\n");
  }

}


}