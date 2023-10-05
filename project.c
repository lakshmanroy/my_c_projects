// i have creat the random number game and attend choose your correct answer c language 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{

   int number,guess,nguesses;
   srand(time(0));
   number=rand()%99+1;
do
{
	//For random number generator in C
	printf("guess the number 1 to 100\n");
	scanf("%d",&guess);
	if(guess>number)
	{
		printf("Lower number please\n");
	}
	else if(guess<number)
	{
		printf("Higer number please\n");
	}
	else
	{
		printf("you guesses number attempts %d is %d\n",nguesses);
		printf("Thanku you are win");
	}
	nguesses++;
}
	while(guess!=number);
	return 0;
}

