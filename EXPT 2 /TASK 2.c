#include<stdio.h>
int main()
{
    int start_num,end_num,sum=0,i;
    printf("Enter First Number=");
    scanf("%d",&start_num);
    printf("Enter End Number=");
    scanf("%d",&end_num);
    if(start_num>end_num)
        {
        printf("Error:Ending no. should be Higher than starting no.");
        return 1;
        }
    for(i=start_num;i<=end_num;i+1)
    {
        if(i/2!=0)
        {

        sum=sum+i;
        }
    }
    printf("Sum of all odd no. between %d & %d=%d",start_num,end_num,sum);
    return 0;
}
