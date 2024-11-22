// Name : SIDDHARTH SANTOSH DAVARI 
// Roll no: 116
#include <stdio.h>

int main() {
    float mass, velocity, radius, centrifugal_force;

    
    printf("Enter the mass (in kg): ");
    scanf("%f", &mass);
    printf("Enter the velocity (in m/s): ");
    scanf("%f", &velocity);
    printf("Enter the radius (in meters): ");
    scanf("%f", &radius);

    
    centrifugal_force = (mass * velocity * velocity) / radius;

    
    printf("The centrifugal force is: %fN ", centrifugal_force);

    return 0;
}
//output
/* Enter the mass (in kg): 20
Enter the velocity (in m/s): 10
Enter the radius (in meters): 30
The centrifugal force is: 66.666664N
[Process completed - press Enter]
*/