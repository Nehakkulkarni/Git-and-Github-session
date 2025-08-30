#include <stdio.h>
#include <math.h> 


void calculateCube(float side, float *tsa, float *volume);


void calculateCuboid(float length, float width, float height, float *tsa, float *volume) ;
    

void calculatePrism(float base_side, float base_height, float prism_height, float *tsa, float *volume);
    
    
    

int main() {
    int choice;
    float side, length, width, height, base_side, base_height, prism_height;
    float tsa, volume;

    printf("Choose a shape to calculate TSA and Volume:\n");
    printf("1. Cube\n");
    printf("2. Cuboid\n");
    printf("3.  Prism\n");
    printf("Enter your choice:(1-3)");
    scanf("%d", &choice);

    switch (choice) 
    {
        case 1:
            printf("Enter the side length of the cube: ");
            scanf("%f", &side);
            calculateCube(side, &tsa, &volume);
            printf("Cube - Total Surface Area: %.2f, Volume: %.2f\n", tsa, volume);
            break;
        case 2:
            printf("Enter the length, width, and height of the cuboid: ");
            scanf("%f %f %f", &length, &width, &height);
            calculateCuboid(length, width, height, &tsa, &volume);
            printf("Cuboid - Total Surface Area: %.2f, Volume: %.2f\n", tsa, volume);
            break;
        case 3:
            printf("Enter the base side, base height, and prism height : ");
            scanf("%f %f %f", &base_side, &base_height, &prism_height);
            calculateTriangularPrism(base_side, base_height, prism_height, &tsa, &volume);
            printf("Triangular Prism - Total Surface Area: %.2f, Volume: %.2f\n", tsa, volume);
            break;
        default:
            printf("Invalid input\n");
            break;
    }

    return 0;
}
void calculateCube(float side, float *tsa, float *volume) {
    *tsa = 6 * side * side;
    *volume = side * side * side; 
}


void calculateCuboid(float length, float width, float height, float *tsa, float *volume) {
    *tsa = 2 * (length * width + length * height + width * height);
    *volume = length * width * height;
}


void calculateTriangularPrism(float base_side, float base_height, float prism_height, float *tsa, float *volume) {
    float base_area = 0.5 * base_side * base_height;
    *volume = base_area * prism_height;
    float slanted_side = sqrt(pow(base_side / 2, 2) + pow(base_height, 2));
    *tsa = 2 * base_area + (base_side * prism_height) + (2 * slanted_side * prism_height);
}