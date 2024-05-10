public class DaysBetweenDates {
    // Function to check if a year is a leap year
    public static boolean isLeapYear(int year) {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }

    // Function to calculate the number of days in a month
    public static int daysInMonth(int month, int year) {
        if (month == 2) {
            return isLeapYear(year) ? 29 : 28;
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            return 30;
        } else {
            return 31;
        }
    }

    // Function to calculate the number of days between two dates
    public static int daysBetweenDates(int d1, int m1, int y1, int d2, int m2, int y2) {
        int days = 0;

        // Calculate days remaining in the starting year
        for (int month = m1; month <= 12; month++) {
            days += daysInMonth(month, y1) - d1 + 1;
            d1 = 1; // reset day to 1 for the next month
        }
        System.out.println(days);
        // Calculate days in full years between the two dates
        for (int year = y1 + 1; year < y2; year++) {
            days += isLeapYear(year) ? 366 : 365;
        }

        // Calculate days in the ending year
        for (int month = 1; month < m2; month++) {
            days += daysInMonth(month, y2);
        }
        days += d2; // add remaining days of ending month

        return days;
    }

    public static void main(String[] args) {
        int d1 = 31, m1 = 12, y1 = 2014;
        int d2 = 1, m2 = 1, y2 = 2015;
        System.out.println(daysBetweenDates(d1, m1, y1, d2, m2, y2)); // Output: 393
    }
}
