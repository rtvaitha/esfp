#include <stdio.h>
#include<string.h>
int input();

int main()
{
	printf("PLEASE LOGIN HERE\n\n");
	char id[50];

User:

printf("Enter your id:");

scanf("%s", &id);

if (strcmp(id,"rishit")==0)

{

printf("Id is correct\n");

}

else

{

printf("You have entered an invalid user id\nPlease enter id again\n");

goto User;

}

char pass[50];

pass:

printf("Enter your password: ");

scanf("%s", &pass);

 if(strcmp(pass,"0278")==0)

{

printf("You have successfully logged in \n\n");

}

else

{

printf("You have entered a wrong password\nEnter your password again\n");

}



	printf("1.Do You suspect profile to be fake\n");
	printf("2.Or the profile is not fake\n");
	int choice, num;
	choice:
	printf("ENTER YOUR CHOICE:");
	
	
	choice = input();
	
	switch (choice) {
	char hlo,hii;
	hlo:
	printf("IF YOU WANT TO CONTINUE TYPE Y 0r y :");
	scanf("%s",&hii);
	if(hii=='y' || hii=='Y')
	{
		goto choice1;
	}
	else
	{
	    goto choice;	
	}
	  char a,b;
	a:
	printf("IF YOU WANT TO CONTINUE TYPE Y 0r y :");
	scanf("%s",&b);
	if(b=='y' || b=='Y')
	{
		goto choice2;
	}
	else
	{
	    goto choice;	
	}
		
		
	case 1: {
			
			printf("1.do you want to file a report?\n");
			printf("2.or you dont want to file a report\n");
			
		
		    int choice1;
		    choice1:
		    printf("ENTER YOUR CHOICE:");
		    scanf("%d",&choice1);
			if(choice1==1)
			{
				printf("Ok your report has been filed\n");
				goto hlo;
				
			 } 
			 else if(choice1==2)
			 {
				printf("\nOk have a nice day\n");
				goto hlo;
			 }
			  
		    else
		    {
				
		    	printf("SORRY WRONG CHOICE");
			}
		    
		
	}
	case 2: {
            	printf("\n\n");
				printf("1.Ok have a nice day\n");
				
				
				 
				 break;
		
		
	}
	return 0;
}
}


