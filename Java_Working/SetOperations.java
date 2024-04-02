import java.util.HashSet;
import java.util.Scanner;
import java.util.*;

public class SetOperations {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Set<Integer> set = new LinkedHashSet<>();

        while (true) {
            System.out.println("\nSet Operations Menu:");
            System.out.println("1. Add element");
            System.out.println("2. Remove element");
            System.out.println("3. Check if element exists");
            System.out.println("4. Display all elements");
            System.out.println("5. Exit");

            System.out.print("Enter your choice: ");
            int choice = scanner.nextInt();
            scanner.nextLine(); // Consume newline

            switch (choice) {
                case 1:
                    System.out.print("Enter element to add: ");
                    int element = scanner.nextInt();
                    if (set.add(element)) {
                        System.out.println("Element added successfully.");
                    } else {
                        System.out.println("Element already exists in the set.");
                    }
                    break;
                case 2:
                    System.out.print("Enter element to remove: ");
                    int elementToRemove = scanner.nextInt();
                    if (set.remove(elementToRemove)) {
                        System.out.println("Element removed successfully.");
                    } else {
                        System.out.println("Element not found in the set.");
                    }
                    break;
                case 3:
                    System.out.print("Enter element to check: ");
                    int checkElement = scanner.nextInt();
                    if (set.contains(checkElement)) {
                        System.out.println("Element exists in the set.");
                    } else {
                        System.out.println("Element does not exist in the set.");
                    }
                    break;
                case 4:
                    System.out.println("All elements:");
                    for (int item : set) {
                        System.out.println(item);
                    }
                    break;
                case 5:
                    System.out.println("Exiting...");
                    System.exit(0);
                default:
                    System.out.println("Invalid choice. Please enter a number between 1 and 5.");
            }
        }
    }
}

