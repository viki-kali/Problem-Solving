import java.util.*;

public class SortByFrequency {
    public static void main(String[] args) {
        int[] array = {2, 3, 2, 4, 5, 3, 5, 6, 5, 3, 2};
        sortByFrequency(array);
        System.out.println("Sorted array based on frequency: " + Arrays.toString(array));
    }

    public static void sortByFrequency(int[] array) {
        // Step 1: Create a HashMap to store the frequency of each element
        Map<Integer, Integer> frequencyMap = new HashMap<>();

        // Step 2: Count the frequency of each element and update the HashMap
        for (int num : array) {
            frequencyMap.put(num, frequencyMap.getOrDefault(num, 0) + 1);
        }

        // Step 3: Sort the array based on frequencies
        Arrays.sort(array);
        // Create a custom comparator based on frequency
        Arrays.sort(array, (a, b) -> {
            int freqCompare = frequencyMap.get(b) - frequencyMap.get(a);
            return freqCompare != 0 ? freqCompare : a - b;
        });
    }
}
