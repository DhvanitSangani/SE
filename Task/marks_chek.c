#include <stdio.h>
#include <conio.h>

int main(){
	
	int physics;
	int chemistry;
	int maths;
	
	float par;
	
	
	printf("enter your physics marks\n");
	scanf("%d",&physics);
	
	printf("\nenter your chemistry marks\n");
	scanf("%d",&chemistry);
	
	printf("\nenter your maths marks\n");
	scanf("%d",&maths);
	

	if(physics > 100 || chemistry > 100 || maths > 100)
	{
    printf("You entered invalid marks");
	}
	else if(physics < 0 || chemistry < 0 || maths < 0)
	{
	    printf("You entered invalid marks");
	}
	else
	{
    printf("Marks are valid\n");

    par = (physics + chemistry + maths) * 100.0 / 300;

    printf("Your percentage is %.2f%%", par);
	}
	
	
	
	
	return 0;
}
