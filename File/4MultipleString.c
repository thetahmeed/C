#include <stdio.h>
void main(){
    char name[20], id[10], batch[5];
    FILE *mFile = fopen("MyFile.txt", "a");
    if (mFile != NULL){
        printf("Enter your name: ");
        gets(name);
        printf("Enter your id: ");
        gets(id);
        printf("Enter your batch: ");
        gets(batch);
        fprintf(mFile, "\n\nName: %s\nId: %s\nBatch: %sth", name, id, batch);
        printf("Data saved");
        fclose(mFile);
    }else{
        printf("File not found");
    }
}
