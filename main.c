#include <stdio.h>
#include "monday.h"
int main() {
    int dow = 0;
    while (dow <= 0 | dow >= 8) {
        printf("Enter day of week 1-7: ");
        scanf("%d", &dow);
    }
    test_day_week(dow);
    return 0;
}
