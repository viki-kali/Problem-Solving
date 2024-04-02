import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class HashMapOperations {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Map<String, Integer> hashMap = new HashMap<>();

        while (true) {
            System.out.println("\nHashMap Operations Menu:");
            System.out.println("1. Add key-value pair");
            System.out.println("2. Remove key");
            System.out.println("3. Check if key exists");
            System.out.println("4. Get value for key");
            System.out.println("5. Display all key-value pairs");
            System.out.println("6. Exit");

            System.out.print("Enter your choice: ");
            int choice = scanner.nextInt();
            scanner.nextLine(); // Consume newline

            switch (choice) {
                case 1:
                    System.out.print("Enter key: ");
                    String key = scanner.nextLine();
                    System.out.print("Enter value: ");
                    int value = scanner.nextInt();
                    hashMap.put(key, value);
                    System.out.println("Key-value pair added successfully.");
                    break;
                case 2:
                    System.out.print("Enter key to remove: ");
                    String removeKey = scanner.nextLine();
                    Integer removedValue = hashMap.remove(removeKey);
                    if (removedValue != null)
                        System.out.println("Key-value pair removed successfully.");
                    else
                        System.out.println("Key not found.");
                    break;
                case 3:
                    System.out.print("Enter key to check: ");
                    String checkKey = scanner.nextLine();
                    if (hashMap.containsKey(checkKey))
                        System.out.println("Key exists.");
                    else
                        System.out.println("Key does not exist.");
                    break;
                case 4:
                    System.out.print("Enter key to get value: ");
                    String getKey = scanner.nextLine();
                    Integer retrievedValue = hashMap.get(getKey);
                    if (retrievedValue != null)
                        System.out.println("Value for key " + getKey + ": " + retrievedValue);
                    else
                        System.out.println("Key not found.");
                    break;
                case 5:
                    System.out.println("All key-value pairs:");
                    for (Map.Entry<String, Integer> entry : hashMap.entrySet()) {
                        System.out.println(entry.getKey() + " : " + entry.getValue());
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

