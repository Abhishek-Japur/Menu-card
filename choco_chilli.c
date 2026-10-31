#include<stdio.h>
int main()
{
    int chocolates = 13,num;

    printf("<----------Welcome to Chocolate Chilli Game------------->\n");
   
    while(num >= 0 && num <= 3)
    {
        
        label1:
        printf("Enter Team A choice(0 to 3):");
        scanf("%d", &num);
        if(num < 0 || num > 3 || num > chocolates)
        {
           printf("Invalid choice,Try Again!!\n");
           printf("Remaining chocolates = %d\n", chocolates);
           goto label1;
           return 1;
        }
        chocolates = chocolates - num;
        printf("Remaining chocolates = %d\n", chocolates);
        if(chocolates <= 0)
        {
           printf("Congragulations!!\nTeam A Won-gets chocolate\nTeam B lose-gets chilli\n");
           break;
        }
        label2:
        printf("Enter Team B choice(0 to 3):");
        scanf("%d", &num);
        if(num < 0 || num > 3 || num > chocolates)
        {
           printf("Invalid choice,Try Again!!\n");
           printf("Remaining chocolates = %d\n", chocolates);
           goto label2;
           return 1;
        }
        chocolates=chocolates-num;
        printf("Remaining chocolates = %d\n", chocolates);
        if(chocolates <= 0)
        {
           printf("Congragulations!!\nTeam B Won-gets chocolate\nTeam A lose-gets chilli\n");
           break;
        }

    }
    return 0;
}