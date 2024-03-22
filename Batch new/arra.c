#include <stdio.h>
int main() {
    char students[5][50];
    int i;
    int  a = 5, b =50;


    printf("Enter the names of %d students:\n", a);
    for (i = 0; i < a; i++) {
        printf("Student %d: ", i + 1);
        scanf("%s", students[i]);
    }

   
    printf("\nNames of the students:\n");
    for (i = 0; i < a; i++) {
        printf("%d. %s\n", i + 1, students[i]);
    }

    return 0;
}

