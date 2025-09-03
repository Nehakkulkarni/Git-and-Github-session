#include <stdio.h>
#include <math.h>
#include<stdlib.h>

float Cube(float a);
float Cuboid(float volume,float breath,float height);
float Prism(float base_area,float base_perimeter,float prism_height,float area_base,float height);
float Cylinder(float radius,float height);
float Cone( float radius,float length,float height);

int main() {
    int choice;
    float side, length, breath, height, base_area, base_perimeter,area_base, prism_height,radius,a;
    float pi=3.14;
    float tsa, volume;

    printf("Choose a shape to calculate TSA and Volume:\n");
    printf("1. Cube\n");
    printf("2. Cuboid\n");
    printf("3.  Prism\n");
    printf("4.  Cylinder\n");
    printf("5.  Cone\n");

    printf("Enter your choice:(1-5):");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter the side length of the cube: ");
        scanf("%f", &side);
        printf("The tsa and Volume of cube is :%f ",Cube(side));
        break;
    case 2:
        printf("Enter the length, breath, and height of the cuboid: ");
        scanf("%f %f %f", &length, &breath, &height);
        printf("The tsa and Volume of cuboid is :%f ", Cuboid( length, breath, height));
        break;
    case 3:
        printf("Enter the base side, base height, and prism height : ");
        scanf("%f %f %f %f %f ", &base_area,&base_perimeter,&prism_height,&area_base,&height);
         printf("The tsa and Volume of prism is :%f ",Prism( base_area, base_perimeter, prism_height, area_base, height));
        break;
    case 4:
          printf("Enter the radius and height of a Cylinder:");
          scanf("%f %f",&radius,&height);
           printf("The tsa and Volume of Cylinder is :%f ", Cylinder( radius, height));
          break;
    case 5:
          printf("Enter the radius and height and length of a Cone:");
          scanf("%f %f %f",&radius,&height,&length);
           printf("The tsa and Volume of Cone is :%f ",Cone(  radius, length, height));
          break;
    default:
        printf("Invalid input\n");
        break;
    }

    return 0;
}

float Cube(float a)
{
    float tsa,volume;
    tsa=6*a*a;
    volume=a*a*a;
    return tsa;
    // return volume;
}
float Cuboid(float length,float breath,float height)
{
    float tsa,volume;
    tsa=2*( (length*breath) + (breath*height) + (height*length) );
    volume=length *breath * height;
    return tsa;
    //return volume;
}
float Prism(float base_area,float base_perimeter,float prism_height,float area_base,float height)
{
    float tsa,volume;
    tsa=  (2 * base_area) + (base_perimeter * prism_height);
    volume=area_base*height;
    return tsa;
    //return volume;
}
float Cylinder(float radius,float height)
{
    float pi=3.14;
    float tsa,volume;
    tsa= 2*pi*radius*(radius + height);
    volume=pi* radius*radius* height;
    return tsa;
    //return volume;
}
float Cone( float radius,float length,float height)
{
    float pi=3.14;
    float tsa,volume;
    tsa= pi*radius*(radius + length);
    volume=1/3*height*pi*radius*radius;
    return tsa;
    //return volume;
}