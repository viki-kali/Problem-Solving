import java.util.Arrays;


public class Sortings {
    public static void main(String[] args) {
        int a[]={19,23,4,250,5,12,44,78,100};
        insertsort(a);
    }

    public static void bubblesort(int[] arr)
    {
        int N=arr.length;
        for(int i=0;i<N;i++)
        {
            System.out.println("i value :"+i);
            for(int j=i+1;j<N;j++)
            {
                System.out.println("j value :"+j);
                if(arr[i]>arr[j])
                {
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
                printarray(arr);
            }
        }
    }

    public static void bubbleSort2(int[] arr) {
        int n = arr.length;
        boolean swapped;
        
        for (int i = 0; i < n - 1; i++) {
            System.out.println("i value :"+i);
            swapped = false;
            for (int j = 0; j < n - i - 1; j++) {
                System.out.println("j value :"+j);
                if (arr[j] > arr[j + 1]) {
                    // Swap arr[j] and arr[j+1]
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                    swapped = true;
                }
                printarray(arr);
            }
            // If no two elements were swapped in the inner loop, then the array is sorted
            if (!swapped) {
                break;
            }
            
        }
    }

    public static void selectionsort(int[] arr)
    {
        //int min=Collections.min(arr);
        int N=arr.length;
        for(int i=0;i<N;i++)
        {
            System.out.println("i value :"+i);
            int minindex=i;
            for(int j=i+1;j<N;j++)
            {
                System.out.println("j value :"+j);
                if(arr[j]<arr[minindex])
                {
                    minindex=j;
                }
            }
            int temp=arr[minindex];
            arr[minindex]=arr[i];
            arr[i]=temp;
            printarray(arr);
        }
    }

    public static void insertsort(int[] arr)
    {
        //int min=Collections.min(arr);
        int N=arr.length;
        for(int i=0;i<N-1;i++)//when i=8, j=i=1=>9 there is no index 9 in an array,thats why (N-1)
        {
            System.out.println("i value :"+i);
            for(int j=i+1;j>0;j--)
            {
                System.out.println("j value :"+j);
                if(arr[j]<arr[j-1])
                {
                    int temp=arr[j];
                    arr[j]=arr[j-1];
                    arr[j-1]=temp;
                    printarray(arr);
                }
                else{
                    break;
                }
            }

        }
    }

    public static void printarray(int[] arr)
    {
        System.out.println(Arrays.toString(arr));
    }
}
