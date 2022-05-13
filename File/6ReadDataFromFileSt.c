#include <stdio.h>
void main(){
    char ch[20];
    FILE *mFile = fopen("MyFile.txt", "r");
    if (mFile != NULL){
        printf("File oppend: \n");
        while (!feof(mFile)){
            fgets(ch, 10, mFile);
            printf("%s", ch);
        }
        fclose(mFile);
    }else{
        printf("File not found");
    }
}
