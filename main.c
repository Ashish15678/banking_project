#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct user
{
    char userName[50];
    char mobileNumber[10];
    char password[50];
    float balance;
};
void regis(void);
void login(void);

int main(){
    int input;
    printf("Welcome to our bank !! We deeply admire your prescence , \n Press 1 for Registering : \n Press 2 for loggiing in :");
    scanf("%d",&input);

    if (input==1)
    {
        regis();
    }
    
    else if (input==2)
    {
        login();
    }
    else{
        printf("Invalid Input");
    }
}

void regis()
    {
        FILE *fp;
        struct user u1;
        printf("Enter your name :\n");
        scanf("%s",&u1.userName); 

        printf("\n enter your mobile number: \n");
        scanf("%s",&u1.mobileNumber);
        

        printf("\n Enter your password : ");
        scanf("%s",&u1.password);
        u1.balance = 0;
        printf("%d",u1.balance);

        fp=fopen("data.dat","a");
        fwrite(&u1,sizeof(u1),1,fp);
        if (fwrite!=0)
        {
            printf("Account registered succesfully..");
            exit(1);
        }
        else{
            printf("Something went wrong.....Please try again later");
        }
        
        fclose(fp);
    }

void login(){
 printf("login works");
}