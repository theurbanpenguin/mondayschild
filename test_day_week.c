//
// Created by andrew mallett on 09/03/2022.
//
#include <stdio.h>

const char *MMONDAY = "Monday's child is fair of face\n";
const char *MTUESDAY = "Tuesday's child is full of grace\n";
const char *MWEDNESDAY = "Wednesday's child is full of woe\n";
const char *MTHURSDAY = "Thursday's child has far to go\n";
const char *MFRIDAY = "Friday's child is loving and giving\n";
const char *MSATURDAY = "Saturday's child works hard for a living\n";
const char *MSUNDAY = "The child born on the Sabbath day is bonny and blithe and good and gay\n";

void test_day_week(int d) {
    switch (d) {
        case 1 :
            printf("%s", MMONDAY);
            break;
        case 2 :
            printf("%s", MTUESDAY);
            break;
        case 3 :
            printf("%s", MWEDNESDAY);
            break;
        case 4 :
            printf("%s", MTHURSDAY);
            break;
        case 5 :
            printf("%s", MFRIDAY);
            break;
        case 6 :
            printf("%s", MSATURDAY);
            break;
        case 7 :
            printf("%s", MSUNDAY);
            break;
        default :
            printf("Incorrect input %d\n", d);
    }
}