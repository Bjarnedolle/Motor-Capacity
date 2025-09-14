#include <stdio.h>

int motoramount() {
    int motors;
    printf("Enter the number of motors: ");
    scanf("%d", &motors);
    return motors;
}

float Packageweight() {
    float weight;
    printf("Enter the package weight in pounds: ");
    scanf("%f", &weight);
    return weight;
}

int main() {
    int motors = motoramount();
    float weight = Packageweight();

    if ((float)weight / motors <= 5.6)
        printf("Yes! The conveyor can carry the package.");
    else
        printf("No! The conveyor cannot carry the package.");

    return 0;
}
