#include<stdio.h>
void main() {
    char ch[10], ch2[10];
    FILE *mFile = fopen("MyFile.txt", "r");
    if (mFile != NULL){
        fscanf(mFile, "%s %s", ch, ch2);

        printf("%s %s", ch, ch2);

        fclose(mFile);
    }else{
        printf("File not found");
    }
}
