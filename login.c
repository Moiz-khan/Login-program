#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void login(void);

int main()
{
    login();
    return 0;
}
void login(void)
{
    char userid[]="imkhan" ,password[]="moiz",user[15],pass[15];
    int n=1,a,b;

    printf("Enter user ID and Password (only 3 chances)");

    for(n=1;n<=3;n++)
    {
        printf("\n\n\t\t\tEnter the user-ID  :");
        scanf("%s",user);
        printf("\t\t\tEnter the Password  :");
        scanf("%s",pass);
        a=strcmp(userid,user);
        b=strcmp(password,pass);

        if(a==0 && b==0)
        {
            printf("\n\nYou have been login successfully");
           system("cls");
           printf("how are you khan");
            break;
        }
        else
        {
            printf("\n\nyou have %d more chance to enter",3-n);
        }

    }
    if(n==4)
    {
        printf("\n\nyou can't login ");
    }
    getch();
}
