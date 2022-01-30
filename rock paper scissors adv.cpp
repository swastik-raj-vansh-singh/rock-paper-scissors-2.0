//17/01/22 02:09
//rock paper seasor game!!!he he he 

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>

char randomnumber()
 {
 	srand(time(0));
	int number=rand()%4+1;
    if(number==1){
		return 'r';
	}
	else if(number==2){
		return 'p';
	}
	else{
		return 's';
	}

 } 


int compare(char you,char comp) 
{
	if(you==comp)
	{
		return 0;
	}	
	else if((you=='p' && comp=='r')||(you=='s' && comp=='p') || (you=='r' && comp=='s'))
	{
		return 1;
	}
	else
	{
		return -1;
	}
}
int main()
{
	int playerscore=0,compscore=0,i;
	char you,comp,num;
	printf("WELCOME TO THE ROCK PAPER SCISSORS GAME!!!!\n");
	printf("Enter r for rock \nEnter p for paper \nEnter s for scissors\n\n\n");
	int n;
	printf("Enter how many rounds you want to play");
	scanf("%d",&n);
	fflush (stdin);
	for(i=0;i<n;i++) 
	{
		printf("Welcome to %d round\n\n",i+1);
//		srand(time(0));
//		int number=rand()%4+1;
//		if(number==1){
//			comp='r';
//		}
//		else if(number==2){
//			comp='p';
//		}
//		else{
//			comp='s';	
//}

		//printf("%d",number);
		
		printf("Enter the character you want to chose :");
		scanf("%c",&you);
		getchar();
		printf("You enter the %c\n",you);
		//call the function
		comp=randomnumber();
		printf("Comp enter the %c\n\n",comp);
		
		//calculatin the result
		int result=compare(tolower(you),comp);
		
		if (result==0)
		{
		    printf("ROUND DRAW!!\n\n");
	    //playerscore+=0;
	    //compscore+=0;	
		}
		else if (result==1)
		{
			printf("UHUU YOU WON THIS ROUND!!!\n\n");
			playerscore+=1;
		}
		else
		{
			printf("OOPS YOU LOSE THIS ROUND!!!\n\n");
			compscore+=1;
		}
	
		printf("you score : %d\ncomp score : %d\n\n\n\n\n\n",playerscore,compscore);
	}
	
   
//	printf("you chose %c and computer chose %c \n\n",you,comp);
    if (playerscore>compscore)
    {
    	printf("CONGO MAN YOU WON THIS GAME BY %d POINTS!!!\n\n\n",playerscore-compscore);
	}
	else if(compscore>playerscore)
	{
		printf("BETTER LUCK NEXT TIME!!\n");
	}
	else
	{
		printf("MATCH GET DRAW!!\n");
	}
	printf("THANKYOU FOR PLAYING THE GAME!!!\n");
	
	return 0;
}
