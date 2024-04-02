import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class ListOperations {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        List<String> list = new ArrayList<>();

        while (true) {
            System.out.println("\nList Operations Menu:");
            System.out.println("1. Add element");
            System.out.println("2. Remove element");
            System.out.println("3. Check if element exists");
            System.out.println("4. Get element at index");
            System.out.println("5. Display all elements");
            System.out.println("6. Exit");

            System.out.print("Enter your choice: ");
            int choice = scanner.nextInt();
            scanner.nextLine(); // Consume newline

            switch (choice) {
                case 1:
                    System.out.print("Enter element to add: ");
                    String element = scanner.nextLine();
                    list.add(element);
                    System.out.println("Element added successfully.");
                    break;
                case 2:
                    System.out.print("Enter index to remove element: ");
                    int indexToRemove = scanner.nextInt();
                    scanner.nextLine(); // Consume newline
                    if (indexToRemove >= 0 && indexToRemove < list.size()) {
                        String removedElement = list.remove(indexToRemove);
                        System.out.println("Removed element: " + removedElement);
                    } else {
                        System.out.println("Invalid index.");
                    }
                    break;
                case 3:
                    System.out.print("Enter element to check: ");
                    String checkElement = scanner.nextLine();
                    if (list.contains(checkElement))
                        System.out.println("Element exists in the list.");
                    else
                        System.out.println("Element does not exist in the list.");
                    break;
                case 4:
                    System.out.print("Enter index to get element: ");
                    int indexToGet = scanner.nextInt();
                    scanner.nextLine(); // Consume newline
                    if (indexToGet >= 0 && indexToGet < list.size()) {
                        String getElement = list.get(indexToGet);
                        System.out.println("Element at index " + indexToGet + ": " + getElement);
                    } else {
                        System.out.println("Invalid index.");
                    }
                    break;
                case 5:
                    System.out.println("All elements:");
                    for (String listItem : list) {
                        System.out.println(listItem);
                    }
                    break;
                case 6:
                    System.out.println("Exiting...");
                    System.exit(0);
                default:
                    System.out.println("Invalid choice. Please enter a number between 1 and 6.");
            }
        }
    }
}

