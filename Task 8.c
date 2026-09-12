#include <stdio.h>

int main() {
    int zone_type, driver_speed, speed_limit = 0;
    float fine_amount = 0.0;
    printf("Select Zone Type:\n");
    printf("1. School Zone (Limit: 30 km/h)\n");
    printf("2. Highway (Limit: 100 km/h)\n");
    printf("3. Residential Area (Limit: 50 km/h)\n");
    printf("Enter choice (1-3): ");
    scanf("%d", &zone_type);
    printf("Enter driver speed (km/h): ");
    scanf("%d", &driver_speed);

    switch (zone_type) {
        case 1:
            speed_limit = 30;
            break;
        case 2:
            speed_limit = 100;
            break;
        case 3:
            speed_limit = 50;
            break;
        default:
            printf("\nInvalid zone type selected!\n");
            return 0;
    }
    
    if (driver_speed > speed_limit) {
        fine_amount = 1000.0;

        if (driver_speed > speed_limit + 20) {
            fine_amount = fine_amount * 2.0; 
            printf("Violation: Exceeded speed limit by more than 20 km/h! Fine doubled.\n");
        } else {
            printf("Violation: Speed limit exceeded.\n");
        }
    } else {
        printf("No violation: Driving within speed limit.\n");
    }

    printf("Traffic Police Fine Receipt \n");
    printf("Speed Limit: %d km/h\n", speed_limit);
    printf("Recorded Speed: %d km/h\n", driver_speed);
    printf("Total Fine Amount: Rs. %.2f\n", fine_amount);

    return 0;
}
