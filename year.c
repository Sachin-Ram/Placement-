#include <stdio.h>

int main() {

    int total_days, years, weeks, days_left;
    printf("Enter the total number of days: ");
    scanf("%d", &total_days);
    years = total_days / 365;
    days_left = total_days % 365;
    weeks = days_left / 7;
    days_left %= 7;
    printf("Number of Years: %d\n", years);
    printf("Number of Weeks: %d\n", weeks);
    printf("Number of Days: %d\n", days_left);

    return 0;
}
