#include <stdio.h>
int main()
{
    int x;
    int a[4]; // array to store the digits
    printf("Enter the number: ");
    scanf("%d", &x);
    if (x > 9999 || x < 1000)
    {
        printf("Invalid input");
    }
    else
    {
        for (int i = 3; i >= 0; i--)
        {
            a[i] = x % 10;
            x = x / 10;
        }
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                for (int k = 0; k < 4; k++)
                {
                    for (int l = 0; l < 4; l++)
                    {
                        if ((a[i] != a[j] && a[i] != a[k] && a[i] != a[l] && a[j] != a[k] && a[j] != a[l] && a[k] != a[l]))
                            printf("%d%d%d%d\n", a[i], a[k], a[l], a[j]);
                    }
                }
            }
        }
    }
    return 0;
}