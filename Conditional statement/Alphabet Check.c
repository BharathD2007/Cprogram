#include <stdio.h>
int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("'%c' is an Uppercase Alphabet.\n", ch);
    } 
    else if (ch >= 'a' && ch <= 'z') {
        printf("'%c' is a Lowercase Alphabet.\n", ch);
    } 
    else {
        printf("'%c' is NOT an Alphabet.\n", ch);
    }

    return 0;
}
