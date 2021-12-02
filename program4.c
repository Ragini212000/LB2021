#include<stdio.h>
// Accept number from user and print that number of * on screen
// Input :4
// Output: * * * *

void Display(int iNo)
{
	int iCnt=0;
	for(iCnt=0;iCnt<iNo;iCnt++)
	{
		printf("*\t");
	}
	
}

int main()
{
	int ivalue=0;
	
	printf("Enter the number\n");
	scanf("%d",&ivalue);
	
	Display(ivalue);
	return 0;
	
	
}