#include<stdio.h>
#include<math.h>
int main(){
float length, breadth, height, radius, volume;
int choice;
printf("Enter the value of length breadth height and radius");
scanf("%f%f%f%f", &length, &breadth, &height, &radius);

printf("\n1.cube\n2.cuboid\n3.sphere\n4.cylinder\n5.cone\n");
printf("Enter your choice");
scanf("%d",&choice);

switch(choice){
    case 1:
    volume = length*length*length;
    printf("Volume of cube is: %f",volume);
    break;

    case 2:
    volume = length*breadth*height;
    printf("Volume of cuboid is: %f",volume);
    break;

    case 3:
    volume = 4/3*(22/7(radius*radius*radius));
    printf("Volume of sphere is: %f",volume);
    break;

    case 4:
    volume = 22/7*(radius*radius*height);
    printf("Volume of cylinder is: %f",volume);
    break;

    case 5:
    volume = 22/7*(radius*radius)*(height/3);
    printf("Volume of cone is: %f",volume);
    break;
}
return 0;
}