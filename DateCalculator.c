#include <stdio.h>

struct Date {
    int year;
    int month;
    int day;
};

struct Date getNextDate(struct Date date) {
    struct Date nextDate = date;
    nextDate.day++;
    if (nextDate.day > 30) {
        nextDate.day = 1;
        nextDate.month++;
    }
    if (nextDate.month > 12) {
        nextDate.month = 1;
        nextDate.year++;
    }
    return nextDate;
}

int compareDates(struct Date date1, struct Date date2) {
    if (date1.year == date2.year && date1.month == date2.month && date1.day == date2.day) {
        return 0;
    }
    else if (date1.year > date2.year || (date1.year == date2.year && date1.month > date2.month) || (date1.year == date2.year && date1.month == date2.month && date1.day > date2.day)) {
        return 1;
    }
    else {
        return -1;
    }
}

int main() {
    struct Date date1 = {2022, 1, 6};
    struct Date nextDate = getNextDate(date1);
    printf("Date after %d/%d/%d is %d/%d/%d\n", date1.month, date1.day, date1.year, nextDate.month, nextDate.day, nextDate.year);

    struct Date date2 = {2022, 1, 7};
    int comparison = compareDates(date1, date2);
    if (comparison == 0) {
        printf("Dates are equal\n");
    }
    else if (comparison == 1) {
        printf("Date 1 is after Date 2\n");
    }
    else {
        printf("Date 1 is before Date 2\n");
    }

    return 0;
}
