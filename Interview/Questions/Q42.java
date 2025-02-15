import java.util.Scanner;

public class Q42 {

    public static int getNumberOfDays(String month, int year) {
        if (month.equalsIgnoreCase("february")) {
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                return 29;
            } else {
                return 28;
            }
        }
        if (month.equalsIgnoreCase("april") || month.equalsIgnoreCase("june")
                || month.equalsIgnoreCase("september") || month.equalsIgnoreCase("november")) {
            return 30;
        }
        return 31;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the month: ");
        String month = sc.next();
        System.out.print("Enter the year: ");
        int year = sc.nextInt();
        System.out.println(month + ": " + getNumberOfDays(month, year));
        sc.close();
    }
}
