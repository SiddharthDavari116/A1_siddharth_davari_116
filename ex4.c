// Name : SIDDHARTH SANTOSH DAVARI 
// Roll no: 116
#include <stdio.h>

int main() {
    float force, area, stress, original_length, change_in_length, strain;

    
    printf("Enter the force applied (in Newtons): ");
    scanf("%f", &force);
    printf("Enter the area (in square meters): ");
    scanf("%f", &area);

    
    stress = force / area;

    
    printf("Enter the original length (in meters): ");
    scanf("%f", &original_length);
    printf("Enter the change in length (in meters): ");
    scanf("%f", &change_in_length);

    
    strain = change_in_length / original_length;

    
    printf("Stress: %fPa\n", stress);
    printf("Strain: %f", strain);

    return 0;
}
//output 
/*Enter the force applied (in Newtons): 20
Enter the area (in square meters): 81
Enter the original length (in meters): 30
Enter the change in length (in meters): 35
Stress: 0.246914Pa
Strain: 1.166667
[Process completed - press Enter]
*/