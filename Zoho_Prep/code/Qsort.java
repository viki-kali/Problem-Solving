public class Qsort {
    public static void quickSort(int[] arr) {
        if (arr == null || arr.length == 0) {
            return;
        }
        sort(arr, 0, arr.length - 1);
    }

    private static void sort(int[] arr, int low, int high) {
        int i = low;
        int j = high;
        int pivot = arr[low + (high - low) / 2];

        while (i <= j) {
            while (arr[i] < pivot) {
                i++;
            }
            while (arr[j] > pivot) {
                j--;
            }
            if (i <= j) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                i++;
                j--;
            }
        }

        if (low < j) {
            sort(arr, low, j);
        }
        if (i < high) {
            sort(arr, i, high);
        }
    }

    public static void main(String[] args) {
        int[] arr = {12, 7, 3, 9, 5, 6};
        quickSort(arr);
        System.out.println("Sorted array:");
        for (int num : arr) {
            System.out.print(num + " ");
        }
    }
}
