#include <stdio.h>
int main() {
    
    int ch;
    printf("1. Milk Chocolate\n2. Dark Chocolate\n3. White Chocolate\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);

    switch (ch) {
        case 1:
            printf("You chose Milk Chocolate. It is creamy and tasty!");
            break;
        case 2:
            printf("You chose Dark Chocolate. It has a rich flavour!");
            break;
        case 3:
            printf("You chose White Chocolate. It is sweet and smooth!");
            break;
        default:
            printf("Invalid choice");
    }
}
