#include<stdio.h>
int main() {
    char string[50];
    printf("Enter a string: ");
    scanf("%s", & string);
    int i;
    printf("Extracted digits: ");
    for(i = 0; string[i] != '\0'; i++) {
        if (string[i] >= '0' && string[i] <= '9') {
            printf("%c", string[i]);
        }
    }
    printf("\n");
}
