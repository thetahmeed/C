#include<stdio.h>

int main()
{
    FILE *mFile = fopen("StudentDetails.txt", "a");

    char name[20], age[2], phone[11];

    printf("Enter name: ");
    gets(name);
    fputs(name, mFile);
    fputs("\t", mFile);

    printf("Enter age: ");
    gets(age);
    fputs(age, mFile);
    fputs("\t", mFile);

    printf("Enter phone: ");
    gets(phone);
    fputs(phone, mFile);
    fputs("\n", mFile);

    printf("Data saved");
    fclose(mFile);

    return 0;
}
