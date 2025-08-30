#include <stdio.h>
#include <math.h> 




int main() {
    int choice;
    float side, length, width, height, base_side, base_height, prism_height;
    float tsa, volume;

    printf("Choose a shape to calculate TSA and Volume:\n");
    printf("1. Cube\n");
    printf("2. Cuboid\n");
    printf("3.  Prism\n");
    printf("3.  Cylinder\n");
    printf("3.  Cone\n");
    
    printf("Enter your choice:(1-3)");
    scanf("%d", &choice);

    switch (choice) 
    {
        case 1:
            printf("Enter the side length of the cube: ");
            scanf("%f", &side);
            
            break;
        case 2:
            printf("Enter the length, width, and height of the cuboid: ");
            scanf("%f %f %f", &length, &width, &height);
            
            break;
        case 3:
            printf("Enter the base side, base height, and prism height : ");
            scanf("%f %f %f", &base_side, &base_height, &prism_height);
            
            break;
        default:
            printf("Invalid input\n");
            break;
    }

    return 0;
}
