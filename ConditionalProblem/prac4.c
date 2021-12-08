

// character or not 

#include <stdio.h>

int main() {

    char anything;

    printf("Enter anything: ");
    scanf("%c", &anything);

    if((anything >= 'a' && anything <= 'z') || (anything >= 'A' && anything <= 'Z')) {
        printf("%c is a character.", anything);
    } else {
        printf("%c is not a character.", anything);
    }

    return 0;
}