#include<stdio.h>

void hanoi(int n,char from,char tmp,char to)
{
	int count=0;
	if (n==1)
		count++;
	   	printf("The upmost disk in rod1 is moved to %c\n ",to);

	else{
		count++
	hanoi(n-1,from,to,tmp);
	printf("The upmost disk in rod%d is moved to %c\n",c,to);
	hanoi(n-1,tmp,from,to);
	}
}
int main(void)
{
	hanoi(3,'rod1','rod2','rod3');
	printf("thus,the minimal number of moves is %d",count);
}

		
