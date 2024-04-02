import java.util.ArrayDeque;
import java.util.Deque;
import java.util.Scanner;

public class StackOperations {
    public static void main(String[] args) {
        Deque<Integer> stack = new ArrayDeque<>();
        Scanner scanner = new Scanner(System.in);
        int choice;
        do {
            System.out.println("\nStack Operations Menu:");
            System.out.println("1. Push (Add element)");
            System.out.println("2. Pop (Remove element)");
            System.out.println("3. Peek (View top element)");
            System.out.println("4. Check if stack is empty");
            System.out.println("5. Display stack");
            System.out.println("6. Exit");
            System.out.print("Enter your choice: ");
            choice = scanner.nextInt();

            switch (choice) {
                case 1:
                    System.out.print("Enter element to push: ");
                    int element = scanner.nextInt();
                    stack.push(element);
                    System.out.println("Element pushed: " + element);
                    break;
                case 2:
                    if (!stack.isEmpty()) {
                        int poppedElement = stack.pop();
                        System.out.println("Element popped: " + poppedElement);
                    } else {
                        System.out.println("Stack is empty, cannot pop.");
                    }
                    break;
                case 3:
                    if (!stack.isEmpty()) {
                        int topElement = stack.peek();
                        System.out.println("Top element of the stack: " + topElement);
                    } else {
                        System.out.println("Stack is empty.");
                    }
                    break;
                case 4:
                    if (stack.isEmpty()) {
                        System.out.println("Stack is empty.");
                    } else {
                        System.out.println("Stack is not empty.");
                    }
                    break;
                case 5:
                    if (!stack.isEmpty()) {
                        System.out.println("Stack elements:");
                        for (int item : stack) {
                            System.out.print(item + " ");
                        }
                        System.out.println();
                    } else {
                        System.out.println("Stack is empty.");
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

