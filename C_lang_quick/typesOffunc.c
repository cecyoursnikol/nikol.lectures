/*With argu with return
  without argu with return
  with argu without return
  without arrgu without return
*/

#include <stdio.h>

int wawr(int age){    //With argu with return
    printf("Tell me ur age :\n");
    scanf("%d",&age);


    if (age > 18)
    {
        printf("u are adult---");
    }
    else
    {
        printf("U are a kid");
    }
    
    
    return 0;
}


int waawr(){  //without argu with return
  

    printf("Thiss is the func which holds the tye of without arugs and with return");

    return 0;
}

void  wawar(char ch){  //with argu without return

        printf("u are %c",ch);
}

void waawar(){

    printf("This is very simple too simple So much simple ");
}


int main(){  //without arrgu without return

    // wawr(80);

    // waawr();

    // wawar('f');

    waawar();

    return 0;
}