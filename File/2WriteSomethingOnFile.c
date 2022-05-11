#include<stdio.h>
#include<string.h>
void main(){
    FILE *mFile;
    char name[30] = "Tahmeedul Islam";
    int nameLegnth = strlen(name);
    int i;
    mFile = fopen("MyFile.txt", "w");
    if (mFile != NULL){
        for (i = 0; i < nameLegnth; i++){
            fputc(name[i], mFile);
            // What to write, Where to write
        }
        fclose(mFile);
    }else{
        printf("File not found");
    }
}
