#include<stdio.h>

int add(float a, float b){

    // return a + b;
    printf("The add is %f",a + b);
    return 0;

}

int main(){


    int x,y;
    // printf("Eneter any two values :");
    // scanf("%d %d",&x,&y);

    add(100.5,0.85);  // this is normal calling to a func

    add(25.00,25.3);

    

    return 0;
}