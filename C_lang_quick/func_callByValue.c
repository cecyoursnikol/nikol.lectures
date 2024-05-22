#include<stdio.h>

int salary(int x){

    x+=5000;

    printf("If u are incremented than ur salary is %d",x);

    return 0;

}

int main(){

    int s;
    

    printf("To check ur incremented salary \n");

    printf("Eneter ur current Salary :");
      scanf("%d",&s);

    salary(s);

    printf("\nBetter  luck next time u salary is %d",s);
  



    return 0;
}