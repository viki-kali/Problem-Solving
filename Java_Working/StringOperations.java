import java.util.Scanner;

public class StringOperations {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String inputString;

        while (true) {
            System.out.println("\nString Operations:");
            System.out.println("1. Find Length");
            System.out.println("2. Convert to Uppercase");
            System.out.println("3. Convert to Lowercase");
            System.out.println("4. Reverse String");
            System.out.println("5. Check Palindrome");
            System.out.println("6. Exit");
            System.out.print("Enter your choice: ");

            int choice = scanner.nextInt();
            scanner.nextLine(); // Consume newline

            switch (choice) {
                case 1:
                    System.out.print("Enter a string: ");
                    inputString = scanner.nextLine();
                    System.out.println("Length of the string: " + inputString.length());
                    break;
                case 2:
                    System.out.print("Enter a string: ");
                    inputString = scanner.nextLine();
                    System.out.println("Uppercase string: " + inputString.toUpperCase());
                    break;
                case 3:
                    System.out.print("Enter a string: ");
                    inputString = scanner.nextLine();
                    System.out.println("Lowercase string: " + inputString.toLowerCase());
                    break;
                case 4:
                    System.out.print("Enter a string: ");
                    inputString = scanner.nextLine();
                    System.out.println("Reversed string: " + reverseString(inputString));
                    break;
                case 5:
                    System.out.print("Enter a string: ");
                    inputString = scanner.nextLine();
                    if (isPalindrome(inputString)) {
                        System.out.println("The string is a palindrome.");
                    } else {
                        System.out.println("The string is not a palindrome.");
                    }
                    break;
                case 6:
                    System.out.println("Exiting program.");
                    scanner.close();
                    System.exit(0);
                default:
                    System.out.println("Invalid choice. Please enter a number between 1 and 6.");
            }
        }
    }

    private static String reverseString(String str) {
        StringBuilder reversed = new StringBuilder();
        for (int i = str.length() - 1; i >= 0; i--) {
            reversed.append(str.charAt(i));
        }
        return reversed.toString();
    }

    private static boolean isPalindrome(String str) {
        int left = 0;
        int right = str.length() - 1;
        while (left < right) {
            if (str.charAt(left++) != str.charAt(right--)) {
                return false;
            }
        }
        return true;
    }
}

