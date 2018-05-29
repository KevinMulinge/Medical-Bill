#include<stdio.h>
void medical();
int main()
{
medical();

    return 0;
}
medical()
{
     int classes=0,account=0,days=0,lab=0,medical=0,xray=0,total=0,counter=0;
    do{
    printf("Select Patient classes :\n");
    printf("1.VIP\n");
    printf("2.Ordinary\n");
    printf("3.Exclusive\n");
    scanf("%d",&classes);

    printf("Enter the number of days \n");
    scanf("%d",&days);

    printf("Enter the Lab fee \n");
    scanf("%d",&lab);
    printf("Enter the medical fee \n");
    scanf("%d",&medical);
    printf("Enter the xray \n");
    scanf("%d",&xray);
    switch(classes)
    {
        case 1 : total=(5000*days)+lab+medical+xray;
         printf("Total is %d",total);
         break;
         case 2 : total=(500*days)+lab+medical+xray;
         printf("Total is %d",total);
         break;
         case 3 : total=(15000*days)+lab+medical+xray;
         printf("Total is %d",total);
         break;
         default : printf("Wrong choice");
     }
     printf("\nDo you want to enter another patient? 1-yes,2-no");
     scanf("%d",&counter);
   }while(counter==1);
}
