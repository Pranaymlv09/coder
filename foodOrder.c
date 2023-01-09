#include<stdio.h>
char s[50];
char user= 'pranaymlv';
int b=895688,c=0,pass;
void login()
{
    char p[1]='y';
     printf("\n\n\n******************  Login to continue ******************\n\n\n\n");
     do{
     printf("\t User name:\t");
     scanf("%s",s);
     printf("\t password:\t");
     scanf("%d",&pass);
     if(s==user && pass==b)
     {
        admin();
     }
     else
     {
        printf("\nIncorrect Email id or Password\n");
        printf("Do you want to continue (press y or n)...");
        scanf("%c",&p);
     }
     }while(p == 'y');
}
void admin()
{
    int n;
    printf("Login succesfully.....");

}



int main()
{
    int n;
    printf("\n\n**********\t\tWELCOME TO COFFEE CAFE\t\t**********\n\n");
    printf("\t 1. Admin \n\n");
    printf("\t 2. Customer \n\n\n");
    printf("\t  Choice: ");
    scanf("%d",&n);

    switch (n)
    {
    case 1:
        login();
        break;
    
    default:
        break;
    }   

    
}