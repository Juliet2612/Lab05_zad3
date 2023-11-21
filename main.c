#include <stdio.h>
#include <windows.h>
#include "wielkanoc.h"

int main() {
    int year;

    printf("Podaj rok: ");
    scanf("%d", &year);

    Date easterDate = calculateEasterDate(year);

    printf("Wielkanoc w roku %d przypada na %d.%d.%d\n", easterDate.year, easterDate.day, easterDate.month, easterDate.year);

    return 0;
}