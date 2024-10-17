#include <stdio.h>
int main() 
{
    int physics, chemistry, math, average;

    printf("Enter Physics marks: ");
    scanf("%d", &physics);

    printf("Enter Chemistry marks: ");
    scanf("%d", &chemistry);

    printf("Enter Mathematics marks: ");
    scanf("%d", &math);

    average = (physics + chemistry + math) / 3;

    printf("Average Marks: %d\n", average);
    (average >= 50) ? printf("Eligible for admission.\n") : printf("Not eligible for admission.\n");

    return 0;
}
