import java.util.ArrayList;
import java.util.List;

public class Recursion {
    public static void main(String[] args) {
        //System.out.println(fibo(0));
        //int a[]={1,5,8,9,14,17,19,20,40,56,65,77,84,99,111};
        //int a[]={1,5,8,9,14,17,20,40,56,65,77,84,99,111};
        //int target=15;
        //System.out.println(bsearch(a, target, 0, a.length-1));
        //System.out.println(steps(6, 0));
        //System.out.println(isSort(a, 0));
        int a[]={1,2,3,4,4,4,5,6,7};
        ArrayList<Integer> res=findIndex(a,4,0);
        System.out.println(res);
    }

    public static int fibo(int N)
    {
        if(N==1)
            return 0;
        if(N==2)
            return 1;
        return fibo(N-1)+fibo(N-2);
    }

    public static int bsearch(int[] a,int target,int s,int e)
    {
        if(s>e)
            return -1;
        int mid=s+(e-s)/2;
        if(a[mid]==target)
            return mid;
        else if(a[mid]>target)
            return bsearch(a, target, s, mid-1);
        else
            return bsearch(a, target, mid+1, e);
    }

    public static int steps(int N,int counnt)
    {
        if(N==0)
            return counnt;
        if(N%2==0)
            return steps(N/2, ++counnt);
        else
            return steps(N-1, ++counnt);
    }

    public static boolean isSort(int[] a, int index)
    {
        if(index == a.length-1)
            return true;
        return a[index]<a[index+1] && isSort(a, index+1);
    }

    public static ArrayList<Integer> findIndex(int[] a, int target, int index)
    {
        ArrayList<Integer> list=new ArrayList<>();
        if(index==a.length-1)
            return list;

        if(a[index]==target)
        {
            list.add(index);
        }
        
        
            ArrayList<Integer> n1  =findIndex(a, target, index+1);
            list.addAll(n1);
            return list;
            
    }
}
