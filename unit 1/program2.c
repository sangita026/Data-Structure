#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i,sum=0;
    float avg;

    printf("Enetr 10 element :\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        sum = sum + a[i];

    }
    avg = sum/10.0;

    printf("\nSum = %d",sum);
    printf("\n Average =%.2f",avg);

    getch();
}
