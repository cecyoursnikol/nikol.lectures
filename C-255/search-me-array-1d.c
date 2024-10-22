#include<stdio.h>

int main()
{
    int a[100], i, n, data, f = 0;  // 'f' initialized to 0 (false)

    printf("Enter the size : ");
    scanf("%d",&n);

    printf("Enter the data :\n");

    for(i=0;i<n;i++)
    {
        printf("a [ %d ] = ",i);
        scanf("%d",&a[i]);
    }

    printf("Enter data to search : ");
    scanf("%d",&data);

    for(i=0;i<n;i++)
    {
        if(data == a[i])
        {
            f = 1;  // Set 'f' to 1 (true)
            printf("%d found at %d index...\n", data, i);
        }
    }

    if(f == 0)
    {
        printf("data not found..\n");
    }
}

