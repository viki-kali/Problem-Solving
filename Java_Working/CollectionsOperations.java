import java.util.*;

public class CollectionsOperations {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while (true) {
            System.out.println("\nCollections Operations Menu:");
            System.out.println("1. Sort elements");
            System.out.println("2. Shuffle elements");
            System.out.println("3. Reverse elements");
            System.out.println("4. Find maximum element");
            System.out.println("5. Find minimum element");
            System.out.println("6. Frequency of an element");
            System.out.println("7. Exit");

            System.out.print("Enter your choice: ");
            int choice = scanner.nextInt();
            scanner.nextLine(); // Consume newline

            switch (choice) {
                case 1:
                    sortElements();
                    break;
                case 2:
                    shuffleElements();
                    break;
                case 3:
                    reverseElements();
                    break;
                case 4:
                    findMaxElement();
                    break;
                case 5:
                    findMinElement();
                    break;
                case 6:
                    findElementFrequency();
                    break;
                case 7:
                    System.out.println("Exiting...");
                    System.exit(0);
                default:
                    System.out.println("Invalid choice. Please enter a number between 1 and 7.");
            }
        }
    }

    private static void sortElements() {
        List<Integer> list = new ArrayList<>();
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter number of elements: ");
        int n = scanner.nextInt();
        //scanner.nextLine(); // Consume newline

        System.out.println("Enter elements:");
        for (int i = 0; i < n; i++) {
            int element = scanner.nextInt();
            list.add(element);
        }

        Collections.sort(list);
        System.out.println("Sorted elements: " + list);
    }

    private static void shuffleElements() {
        List<Integer> list = new ArrayList<>();
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter number of elements: ");
        int n = scanner.nextInt();
        scanner.nextLine(); // Consume newline

        System.out.println("Enter elements:");
        for (int i = 0; i < n; i++) {
            int element = scanner.nextInt();
            list.add(element);
        }

        Collections.shuffle(list);
        System.out.println("Shuffled elements: " + list);
    }

    private static void reverseElements() {
        List<Integer> list = new ArrayList<>();
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter number of elements: ");
        int n = scanner.nextInt();
        scanner.nextLine(); // Consume newline

        System.out.println("Enter elements:");
        for (int i = 0; i < n; i++) {
            int element = scanner.nextInt();
            list.add(element);
        }

        Collections.reverse(list);
        System.out.println("Reversed elements: " + list);
    }

    private static void findMaxElement() {
        List<Integer> list = new ArrayList<>();
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter number of elements: ");
        int n = scanner.nextInt();
        scanner.nextLine(); // Consume newline

        System.out.println("Enter elements:");
        for (int i = 0; i < n; i++) {
            int element = scanner.nextInt();
            list.add(element);
        }

        Integer maxElement = Collections.max(list);
        System.out.println("Maximum element: " + maxElement);
    }

    private static void findMinElement() {
        List<Integer> list = new ArrayList<>();
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter number of elements: ");
        int n = scanner.nextInt();
        scanner.nextLine(); // Consume newline

        System.out.println("Enter elements:");
        for (int i = 0; i < n; i++) {
            int element = scanner.nextInt();
            list.add(element);
        }

        Integer minElement = Collections.min(list);
        System.out.println("Minimum element: " + minElement);
    }

    private static void findElementFrequency() {
        List<Integer> list = new ArrayList<>();
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter number of elements: ");
        int n = scanner.nextInt();
        scanner.nextLine(); // Consume newline

        System.out.println("Enter elements:");
        for (int i = 0; i < n; i++) {
            int element = scanner.nextInt();
            list.add(element);
        }

        System.out.print("Enter element to find frequency: ");
        int elementToFind = scanner.nextInt();

        int frequency = Collections.frequency(list, elementToFind);
        System.out.println("Frequency of element " + elementToFind + ": " + frequency);
    }
}

