#include <stdio.h>
int main()
{
    int n, count = 0;
    printf("Enter a number");
    scanf("%d", &n);
    int temp = n;
    while (n > 0)
    {
        count++;
        n = n / 10;
    }
    printf("The number of digits are %d\n", count);
    int a[count];
    for (int i = 0; i < count; i++)
    {
        a[i] = temp % 10;
        temp = temp / 10;
    }

    for (int i = 0; i < count; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (a[i] == a[j])
            {
                a[j] = 0;
            }
        }
    }
    int sum = 0;
    for (int i = 0; i < count; i++)
    {
        sum += a[i];
    }

    printf("Sum of all the unique digits present is %d", sum);
}