#include<stdio.h>
void main(){
    char userName[30];
    FILE *mFile = fopen("MyFile.txt", "a");
    if (mFile != NULL){
        printf("Please enter your name: ");
        gets(userName);
        fputs(userName, mFile);
        fputs("\n", mFile);
        printf("Name saved");
        fclose(mFile);
    }else{
        printf("Unable to open file");
    }
}
