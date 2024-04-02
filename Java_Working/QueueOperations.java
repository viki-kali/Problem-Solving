import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class QueueOperations {
    public static void main(String[] args) {
        Queue<Integer> queue = new LinkedList<>();
        Scanner scanner = new Scanner(System.in);
        int choice;
        do {
            System.out.println("\nQueue Operations Menu:");
            System.out.println("1. Enqueue (Add element)");
            System.out.println("2. Dequeue (Remove element)");
            System.out.println("3. Peek (View front element)");
            System.out.println("4. Check if queue is empty");
            System.out.println("5. Display queue");
            System.out.println("6. Exit");
            System.out.print("Enter your choice: ");
            choice = scanner.nextInt();

            switch (choice) {
                case 1:
                    System.out.print("Enter element to enqueue: ");
                    int element = scanner.nextInt();
                    queue.add(element);
                    System.out.println("Element enqueued: " + element);
                    break;
                case 2:
                    if (!queue.isEmpty()) {
                        int dequeuedElement = queue.poll();
                        System.out.println("Element dequeued: " + dequeuedElement);
                    } else {
                        System.out.println("Queue is empty, cannot dequeue.");
                    }
                    break;
                case 3:
                    if (!queue.isEmpty()) {
                        int frontElement = queue.peek();
                        System.out.println("Front element of the queue: " + frontElement);
                    } else {
                        System.out.println("Queue is empty.");
                    }
                    break;
                case 4:
                    if (queue.isEmpty()) {
                        System.out.println("Queue is empty.");
                    } else {
                        System.out.println("Queue is not empty.");
                    }
                    break;
                case 5:
                    if (!queue.isEmpty()) {
                        System.out.println("Queue elements:");
                        for (int item : queue) {
                            System.out.print(item + " ");
                        }
                        System.out.println();
                    } else {
                        System.out.println("Queue is empty.");
                    }
                    break;
                case 6:
                    System.out.println("Exiting...");
                    break;
                default:
                    System.out.println("Invalid choice! Please enter a valid option.");
            }
        } while (choice != 6);

        scanner.close();
    }
}

