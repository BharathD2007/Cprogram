#include <stdio.h>
int main() {
    
    float x, y, z;
    printf("Enter x coordinate: ");
    scanf("%f", &x);

    printf("Enter y coordinate: ");
    scanf("%f", &y);

    printf("Enter z coordinate: ");
    scanf("%f", &z);

    if (x == 0 && y == 0 && z == 0) {
        printf("origin\n");
    }
    else if (x == 0 && y == 0) {
        printf("z-axis\n");
    }
    else if (x == 0 && z == 0) {
        printf("y-axis\n");
    }
    else if (y == 0 && z == 0) {
        printf("x-axis\n");
    }
    else if (x == 0) {
        printf("yz-plane\n");
    }
    else {
        printf("Point is not on origin, axis, or yz-plane.\n");
    }
}
