#include<stdio.h>
int main()
{
    int a[5] = {2, 4, 6, 8, 10};
    int size = 5;
    int i, sum = 0;
    float avg;

    for(i = 0; i < size; i++)
    {
        sum = sum + a[i];
    }
    avg = (float)sum / size;

    printf("Average = %.2f", avg);

    return 0;
}
