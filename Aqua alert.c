#include<windows.h>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<dos.h>
time_t now;
struct tm *right_now;

int main()
{
    int gender,hour,minutes,n,c,opt;
    float weight,x;
    x:system("cls");

    printf("\n\t\t\t    ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::    ");
    printf("\n\t\t\t  ::::::::                                                          ::::::::::  ");
    printf("\n\t\t\t--------                AQUA ALERT MONITORING SYSTEM                 -----------");
    printf("\n\t\t\t  ::::::::                                                          ::::::::::  ");
    printf("\n\t\t\t    ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::    ");


    printf("\n\t\t\t\t\t1-Set an alarm\n\n\t\t\t\t\t2-Check your water consumption level");
    printf("\n\n\t\t\t\t\tChoose your option: ");
    scanf("%d",&n);
    if(n==1)
    {
        printf("\n\n\t\t\tEnter your weight in kg:");
        scanf("\t\t\t\t\t%f",&weight);
        x = (weight/30)*1000;
        printf("\n\t\t\tEnter your gender(m=1/f=0):");
        scanf("\t\t\t\t\t%d",&gender);
        if(gender==1)
        {
            x = x+100;
            printf("\n\t\t\tSuggested amount of water according to your weight is %f ml\n",x) ;
        }
        else
        {
            printf("\n\t\t\tSuggested amount according to your weight is %f ml\n",x);
        }

        printf("\n\t\t\tEnter hour:");
        scanf("%d",&hour);
        printf("\n\t\t\tEnter minutes:");
        scanf("%d",&minutes);
        system("cls");
        while(1)
        {
            time(&now);
            right_now=localtime(&now);
            if(hour== right_now->tm_hour & minutes== right_now->tm_min)
            {
                if(hour<12)
                {
                    printf("\n\t\t\t\tBreakfast Time, Please drink Water\n\n\n ");
                    printf("\a");
                    Sleep(5000);
                    printf("\n\t\t\t\tLunch Time, Please drink Water\n\n\n ");
                    printf("\a");
                    Sleep(5000);
                    printf("\n\t\t\t\tSnacks Time, Please drink Water\n\n\n ");
                    printf("\a");
                    Sleep(5000);
                    printf("\n\t\t\t\tDinner Time, Please drink Water\n\n\n ");
                    printf("\a");
                }
                else if(hour>12&&hour<16)
                {
                    printf("\n\t\t\t\tLunch Time, Please drink Water\n\n\n ");
                    printf("\a");
                    Sleep(5000);
                    printf("\n\t\t\t\tSnacks Time, Please drink Water\n\n\n ");
                    printf("\a");
                    Sleep(5000);
                    printf("\n\t\t\t\tDinner Time, Please drink Water\n\n\n ");
                    printf("\a");
                }
                else if(hour>=16&&hour<20)
                {
                    printf("\n\t\t\t\tSnacks Time, Please drink Water\n\n\n ");
                    printf("\a");
                    Sleep(5000);
                    printf("\n\t\t\t\tDinner Time, Please drink Water\n\n\n ");
                    printf("\a");
                }
                else
                {
                    printf("\n\t\t\t\tDinner Time, Please drink Water\n\n\n ");
                    printf("\a");
                }
                Sleep(2000);
                printf("\n\tDo you want to continue?(y=1/n=0)");
                scanf("%d",&c);
                if(c==1)
                    goto x;
                else
                    break;

            }
            else
            {
                free(right_now);
            }
        }

    }
    else
    {
        printf("\n\n\t\t\tEnter your weight in kg:");
        scanf("\t\t\t\t\t%f",&weight);
        x = (weight/30)*1000;
        printf("\n\t\t\tEnter your gender(m=1/f=0):");
        scanf("\t\t\t\t\t%d",&gender);
        if(gender==1)
        {
            x = x+100;
            printf("\n\t\t\tSuggested amount of water according to your weight is %f ml\n",x) ;
        }
        else
        {
            printf("\n\t\t\tSuggested amount according to your weight is %f ml\n",x);
        }
        printf("\n\t\t\tEnter your activity level:");
        printf("\n\t\t\t1.Sedentary\n\t\t\t2.Regular\n\t\t\t3.Active");
        printf("\n\n\t\t\tChoose your option:");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:printf("\n\t\t\tYou need to drink %f ml of water",x);
            break;
            case 2:printf("\n\t\t\tYou need to drink %f ml of water",x+200);
            break;
            case 3:printf("\n\t\t\tYou need to drink %f ml of water",x+400);
            break;
        }
        //goto x;
        Sleep(2000);
        printf("\n\tDo you want to continue?(y=1/n=0)");
        scanf("%d",&c);
        if(c==1)
            goto x;


    }



    return 0;
}






