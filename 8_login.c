#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
void login();
void aflogin();

char username[20], name[20], password[20], mailid[20];
char username_1[20], password_1[20];

int main()
{
    char options;
    int i;

    printf("|||||||||||||||||||||||||||||||||||\n");
    printf("|| :::::::   ::::::  ::       :: ||\n");
    printf("||  ::  ::   ::       ::     ::  ||\n");
    printf("||  ::  ::   ::::::    ::   ::   ||\n");
    printf("||  ::  ::   ::         :: ::    ||\n");
    printf("|| :::::::   ::::::      ::      ||\n");
    printf("|||||||||||||||||||||||||||||||||||\n");

    printf("Devendra Parihaar welcome's you in his code page\n");
    printf("Do you want to register(y/n)\n");
    scanf("%c", &options);

    if (options == 'y')
    {
        printf("Enter your full name-->");
        scanf("%s", &name);

        printf("Enter your username-->");
        scanf("%s", &username);

        printf("Enter your email address-->");
        scanf("%s", &mailid);

        printf("**Your password is mixture of ---uppercase ,lowercase, specific carater and number**\n");

        printf("Enter your password-->");
        scanf("%s", &password);

        printf("You are registered successfully with us.\n");

        printf("Login here\n");

        login();

        while (i != 0)
        {

            int use = strcmp(username, username_1);
            int pass = strcmp(password, password_1);
            if (use == 0 || pass == 0)

            {
                aflogin();
                i = 0;
            }
            else
            {
                printf("Please enter right username and password\n");
                login();
            }
        }
    }
    else if (options == 'n')
    {
        printf("Hope you enjoy your journy on this code page\n");
        printf("Thank you for visiting our code page\n");
        printf("********************************************---> Thank you <---********************************************\n");
    }
    else
    {
        printf("Please Enter right options\n");
    }

    return 0;
}

void login()
{
    printf("Enter your username--->");
    scanf("%s", &username_1);

    printf("Enter your password--->");
    scanf("%s", &password_1);
}
void aflogin()
{
    printf("Welcome mr. %s \n", name);
    printf("This is Devendra Parihar code page \n");
}