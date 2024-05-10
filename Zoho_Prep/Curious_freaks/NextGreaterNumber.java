import java.util.Arrays;

public class NextGreaterNumber {
    public static int nextGreaterNumber(int X) {
        // Convert the number to an array of digits
        char[] digits = String.valueOf(X).toCharArray();
        int n = digits.length;
        int i = n - 1;
        while (i > 0 && digits[i - 1] >= digits[i]) {
            i--;
        }

        if (i == 0) 
            return -1;

        int j = n - 1;
        while (digits[j] <= digits[i - 1]) {
            j--;
        }
        char temp = digits[i - 1];
        digits[i - 1] = digits[j];
        digits[j] = temp;

        Arrays.sort(digits, i, n);
        return Integer.parseInt(new String(digits));
    }

    public static void main(String[] args) {
        int X = 34722543;
        System.out.println(nextGreaterNumber(X));  // Output: 34724126
    }
}
