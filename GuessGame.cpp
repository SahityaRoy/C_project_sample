#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int number,guess,G_count=1;
	srand(time(0));
	number=rand()%100+1;    //generate randam number btw 1-100
	
	do{
		printf("###############$$$$$$$$$$$$$  Guess the number between 1-100  ###############$$$$$$$$$$$$$\n");
		scanf("%d",&guess);
		
		if(guess>number)
		{
			printf("Lower number please !!! denied!!\n");
		}
		else if(guess<number)
		{
			printf("higher number please !!! denied!!\n");
			
		}
		else{
			printf("you gussed it in %d attempts \n",G_count);
		}
		G_count ++;
	} while(guess!=number);
	
}
