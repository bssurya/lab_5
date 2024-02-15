#include <stdio.h>
int main()
{
    printf("Enter 10 numbers");
    int a[10];
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (a[i] >= a[j])
            {
                int temp;
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int k = 0; k < 10; k++)
    {
        printf("%d ", a[k]);
    }
    return 0;
}