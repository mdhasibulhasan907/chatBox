#include<stdio.h>
int main()
{
    int choice,select,ans,c1,c2,c3,c4;
    printf("Polash:Hello rakib haw are you?");
    printf("\nRakib:Al HUMDULLIH");
    printf("\nPolash:which university do you will read?");
    printf("\n1.Public\n2.Private");
    scanf("%d",&choice);
    if(choice==1)
   {


            printf("Every student have 1st choice this");
            printf("Do you know the reason?");
            printf("\n1.yes\n2.no");
            scanf("%d",&select);
            if(select==1){
            printf("\nAs you know so i have not need to explain");
            }else if(select==2)
            {
                printf("\nIt's fully depends on Government.There have no large amount of cost.There's education system high level");

            }
            else
            {
                printf("\nno answer");

            }
    }
    else if(choice==2)
    {
       printf("Do you know about privet university");
       printf("\n1.yes\n2.no");
       scanf("%d",&select);
       if(select==1)
       {
           printf("why are you want to read in private");
           printf("\n1.reason\n2.wish");
           scanf("%d",&ans);
           if(ans==1){
           printf("\nSeveral reason behind it");}
           else if(ans==2)
            {
            printf(" 1st i try for public then private");

           }
           else
            {
                printf("no answer");
            }

    }
    else
    {
        printf("\n1.why");
        scanf("%d",&ans);
        if(ans==1){
            printf("i haven't huge many to read private");}
            else
            {
                printf("no answer");
            }

    }
}
     getchar();
     printf("\nRakib:Do you know about Bangladesh?");
     printf("\n1.Politics\n2.Sports");
     scanf("%d",&c1);
     if(c1==1)

    printf("\nyes,but i heat politics so i don't tell about it");
     else if(c1==2)
        printf("\nnow Bangladesh's sports section is very good");
     else
        printf("no answer");

        getchar();

        printf("\nPolash:Can you tell me about education system in Bangladesh?");
        printf("\n1.yes\n2.no");
        scanf("%d",&c2);
        if(c2==1)
            printf("\nBangladesh education system are improveing");
        else if(c2==2)
            printf("\nsorry i have no idea");
        else
           {printf("\nno answer");}

            getchar();
             printf("\nRakib:Do you know the history of Bangladesh?");
             printf("\n1.yes\n2.no");
             scanf("%d",&c3);
             if(c3==1)
             printf("It has long history like season of enlish ,pakistan,moghol");
             else if(c3==2)
             printf(" no idea");
             else
                printf("no answer");
             getchar();

             printf("\nPolash:Have your dream?");
             printf("\n1.yes\n2.no");
             scanf("%d",&c4);
             if(c4==1)
                printf("i have a dream that one day i become an engineer");
             else if(c4==2)
                printf("no i have no dream");
                else
                    printf("no answer");

          return 0;

}

