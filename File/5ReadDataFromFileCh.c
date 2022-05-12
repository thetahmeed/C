#include <stdio.h>
void main(){
    char ch;
    FILE *mFile = fopen("MyFile.txt", "r");
    if (mFile != NULL){
        printf("File oppend: ");
        while (!feof(mFile)){
            ch = fgetc(mFile);
            printf("%c", ch);
        }
        fclose(mFile);
    }else{
        printf("File not found");
    }
}
