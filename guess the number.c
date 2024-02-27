/*  WAP that generate a random number and asks the player to guess it if the player's guess is
    higher than the actual number , the program desplay " lower number please " . Similarly if
    the user's guess is too low, the program prints " higher number ".
 		when the user guess the correct number , the program displays the number of guess the
    player used to arrive at the number.									*/

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void main()
{
	int num,guess,no_guess=1;
	srand(time(0));
	num=rand()%100+1;
	do
	{
		printf("guess the any number b/w 1 to 100\n");
		scanf("%d",&guess);
		if(guess>num)
			printf("enter lower number please!\n");
		else if(guess<num)
			printf("enter higher number please!\n");
		else
			printf("You guess the number in %d attempts.",no_guess);
		no_guess++;
	}while(num!=guess);
}