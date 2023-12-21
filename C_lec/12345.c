#include<stdio.h>
int main()
{
	     printf("1.male\n");
	     printf("2.female\n");
	     printf("press any number for other");
	     
	    int num,age;
		scanf("%d",&num);
		
		if 
		(num==1) 
		{ 
		    printf("you are male\n");
		    printf("Enter you age");
		    scanf("%d",&age);
		    if 
		    (age>18)
		    { 
		            printf("you are eligible for voting");
			}
			else
			{
				    printf("error");
			}
		  }  
		  else
		  { 
		            printf("you are transgender\n");
                    printf("enter you age");
					scanf("%d",&age);
					if 
					(age>18)
					{
						    printf("you are eligible for vote");
					}		            
					{
						    printf("error");  
					}					
		  }
		  return 0;
}
