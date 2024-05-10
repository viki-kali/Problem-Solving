import java.util.Arrays;

public class Merger {
    
    public static void mergeSort(int[] array) {
        // Base case: If the array has only one or zero elements, it is already sorted
        if (array.length < 2) {
            return;
        }
        
        // Calculate the middle index of the array
        int mid = array.length / 2;
        
        // Create left and right subarrays
        int[] leftArray = new int[mid];
        int[] rightArray = new int[array.length - mid];
        
        // Copy elements from the original array to left and right subarrays
        for (int i = 0; i < mid; i++) {
            leftArray[i] = array[i];
        }
        for (int i = mid; i < array.length; i++) {
            rightArray[i - mid] = array[i];
        }

        System.out.println("Left");
        System.out.println(Arrays.toString(leftArray));
        System.out.println("Right");
        System.out.println(Arrays.toString(rightArray));
        // Recursively call mergeSort on left and right subarrays
        
        mergeSort(leftArray);
        mergeSort(rightArray);
        // Merge the sorted left and right subarrays
        merge(leftArray, rightArray, array);
    }
    
    private static void merge(int[] leftArray, int[] rightArray, int[] mergedArray) {
        int leftIndex = 0;    // Index for left subarray
        int rightIndex = 0;   // Index for right subarray
        int mergedIndex = 0;  // Index for merged array
        
        // Compare elements from left and right subarrays and merge into mergedArray
        while (leftIndex < leftArray.length && rightIndex < rightArray.length) {
            if (leftArray[leftIndex] <= rightArray[rightIndex]) {
                mergedArray[mergedIndex++] = leftArray[leftIndex++];
            } else {
                mergedArray[mergedIndex++] = rightArray[rightIndex++];
            }
        }
        
        // Copy remaining elements from left subarray to mergedArray
        while (leftIndex < leftArray.length) {
            mergedArray[mergedIndex++] = leftArray[leftIndex++];
        }
        
        // Copy remaining elements from right subarray to mergedArray
        while (rightIndex < rightArray.length) {
            mergedArray[mergedIndex++] = rightArray[rightIndex++];
        }
    }
    
    public static void main(String[] args) {
        int[] array = {5,6,1,9,22,10,15};
        System.out.println("Original array:");
        printArray(array);
        
        // Sort the array using mergeSort
        mergeSort(array);
        
        System.out.println("Sorted array:");
        printArray(array);
    }
    
    private static void printArray(int[] array) {
        for (int num : array) {
            System.out.print(num + " ");
        }
        System.out.println();
    }
}
