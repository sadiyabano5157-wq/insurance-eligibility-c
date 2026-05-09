#include<stdio.h>

int main()
{
    int age, smoker;
    float salary;

    printf("Enter age\n");
    scanf("%d",&age);

    printf("Enter smoker status (0 for No, 1 for Yes)\n");
    scanf("%d",&smoker);

    printf("Enter salary\n");
    scanf("%f",&salary);

    if(age>=25 && age<=60 && smoker==0 && salary>=30000)
    {
        printf("Insurance Approved\n");
    }
    else
    {
        printf("Insurance Rejected\n");
    }

    return 0;
}
