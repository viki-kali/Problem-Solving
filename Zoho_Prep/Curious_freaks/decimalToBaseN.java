public class decimalToBaseN {

    // Method to convert a decimal number to a given base
    public static String decimalToBase(int decimal, int base) {
        // If the base is less than 2 or greater than 16, return an error message
        if (base < 2 || base > 16) {
            return "Error: Base should be between 2 and 16 inclusive.";
        }

        // If the decimal number is 0, return "0" in the desired base
        if (decimal == 0) {
            return "0";
        }

        // Array to store the remainders
        char[] digits = "0123456789ABCDEF".toCharArray();
        StringBuilder result = new StringBuilder();

        // Convert the decimal number to the desired base
        while (decimal > 0) {
            int remainder = decimal % base;
            result.insert(0, digits[remainder]); // Insert the remainder at the beginning of the result
            decimal /= base; // Update the quotient
        }

        return result.toString();
    }

    // Example usage
    public static void main(String[] args) {
        int decimalNumber = 83;
        int base = 8;
        System.out.println(decimalNumber + " in base " + base + " is: " + decimalToBase(decimalNumber, base));
    }
}
