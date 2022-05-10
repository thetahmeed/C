#include<stdio.h>
void main(){
    FILE *mFile;
    mFile = fopen("MyFile.txt","w");
    // This function is used to open a file
    // If file not available then it will 
    // Create one and open that file

    // Two parameter is needed. First one is
    // File name with extension. Second one is
    // Mode
    // Mode can be  “a” or “a+” or “w” or “w++” etc
    // Learn more: https://www.geeksforgeeks.org/basics-file-handling-c/
    if(mFile == NULL){
        printf("File doesn't exist.");
    }else{
        printf("File is oppened");
        fclose(mFile);
    }
}
