#include <stdio.h>

int main()
{
    float A_mass = 10.5;
    float A_acc = 8.4;

    float B_mass = 12.2;
    float B_acc = 6.3;

    float A_force = A_mass * A_acc;

    float B_force = B_mass * B_acc;

    float better = A_force / B_force;

    printf("A포탄의 위력은 %f이고 B포탄의 위력은 %f입니다.\n", A_force, B_force);
    printf("A 포탄이 B 포탄보다 %f배 셉니다!\n", better);

    return 0;
}