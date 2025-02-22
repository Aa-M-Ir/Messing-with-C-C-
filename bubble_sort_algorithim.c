/*Bubble Sort/pass-by-refrence/pointer demonstration*/

#include <stdio.h>
void sort(int *);
int main(int argc, char *argv[])
{
	int A[10], i;
	printf("Enter 10 numbers\n");
 fflush(stdin);
	for(i=0; i<=9; i++)
	{ 
  	scanf("%d", &A[i]);
  }
  sort(&A[0]); 
 	printf("\nLowest value is %d and Highest value is %d", A[0], A[9]);
}

void sort(int *ptr)
{
  int x, y, swap;
  for(x=1; x<10; x++)
  {
  	for(y=0; y<=(10-1-x); y++)
  	{
  		if(*(ptr+y)>*(ptr+y+1))
  		{
  		  swap=*(ptr+y);
  		  *(ptr+y) = *(ptr+y+1);
  		  *(ptr+y+1)=swap;
  		}
  	}
  }
}
  