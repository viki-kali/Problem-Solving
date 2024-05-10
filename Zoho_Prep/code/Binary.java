public class Binary {

    public static void main(String[] args) {
        
        int a[]={1,5,8,9,14,17,19,20,40,56,65,77,84,99,111};
        int target=15;
        findwrap(a, target);
        findwrap(a, 2000);
    }
    public static int find(int[] arr,int t)
    {
        int start=0;
        int end=arr.length -1;
        System.out.println("Size: "+arr.length);
        while(start<=end)
        {

            int mid=start + (end - start)/2;
            System.out.println("Start: "+start);
            System.out.println("mid: "+mid);
            System.out.println("End: "+end);
            if(arr[mid]==t)
            {
                return mid;
            }
            else if(arr[mid]<t)
            {
                start=mid+1;   
            }
            else
            {
                end=mid-1;   
            }
        }
        System.out.println("xStart: "+start);
        System.out.println("xEnd: "+end);
        return start;

    }

    public static void findwrap(int[] arr,int t)
    {
        int start=0;
        int end=arr.length -1;
        while(start<=end)
        {

            int mid=start + (end - start)/2;
            if(arr[mid]==t)
            {
                System.out.println(arr[mid+1]);
                return;
            }
            else if(arr[mid]<t)
            {
                start=mid+1;   
            }
            else
            {
                end=mid-1;   
            }
        }
        if(start==arr.length)
        {
            System.out.println(arr[0]);
            return;
        }
        System.out.println(arr[start]);

    }
}