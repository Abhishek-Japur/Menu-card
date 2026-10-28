#include<stdio.h>
int main()
{
    int option,Qty,Net1,Net2,Net3,Net4,Net5,Net6,Bill;
    int Qty1 = 0,Qty2 = 0,Qty3 = 0,Qty4 = 0,Qty5 = 0,Qty6 = 0;
    float GST,Total;
    printf("<-------Welcome to KSJ Cafe------->\n");
    do
    {
    printf("1.Pizza=250\n2.Biriyani=350\n3.Pasta=100\n4.Coffee=40\n5.Burger=150\n6.Ice-cream=60\n");
    printf("Enter an option:");
    scanf("%d", &option);
   
    switch(option)
    {
        case 1:
        printf("You ordered Pizza\n");
        printf("Qty:");
        scanf("%d", &Qty1);
        Net1 = Qty1*250;
        
        break;

        case 2:
        printf("You ordered Biriyani\n");
        printf("Qty:");
        scanf("%d", &Qty2);
        Net2 = Qty2*350; 
        break;

        
        case 3:
        printf("You ordered Pasta\n");
        printf("Qty:");
        scanf("%d", &Qty3);
        Net3 = Qty3*100;
        break;

        
        case 4:
        printf("You ordered Coffee\n");
        printf("Qty:");
        scanf("%d", &Qty4);
        Net4 = Qty4*40; 
        break;

        
        case 5:
        printf("You ordered Burger\n");
        printf("Qty:");
        scanf("%d", &Qty5);
        Net5 = Qty5*150; 
        break;

        
        case 6:
        printf("You ordered Ice cream\n");
        printf("Qty:");
        scanf("%d", &Qty6);
        Net6 = Qty6*60; 
        break;

        case 7:
        printf("<------------------Final bill------------------->\n");
        if(Qty1 > 0)
        {
             printf("%d * Pizza = %d\n",Qty1,Net1);
        }
        if(Qty2 > 0)
        {   
            printf("%d * Biriyani = %d\n",Qty2,Net2);
        }
        if(Qty3 > 0)
        {   
            printf("%d * Pasta = %d\n",Qty3,Net3);
        }
        if(Qty4 > 0)
        {   
            printf("%d * Coffee = %d\n",Qty4,Net4);
        }
        if(Qty5 > 0)
        {   
            printf("%d * Burger = %d\n",Qty5,Net5);
        }
        if(Qty6 > 0)
        {   
            printf("%d * Ice-cream = %d\n",Qty6,Net6);
            
        }
        
        Bill = Net1 + Net2 + Net3 + Net4 + Net5 + Net6;
        printf("Bill = %d\n",Bill);
        GST=5*Bill/100;
        printf("GST 5%% = %.2f\n",GST);
        Total = Bill + GST;
        printf("Total = %.2f\n",Total);

        break;
        
        default:
        printf("Your order is not Available\n");

    }
    }
    while(option>=1 && option<=6);
   
    printf("Thank you visit again!!\n");
}