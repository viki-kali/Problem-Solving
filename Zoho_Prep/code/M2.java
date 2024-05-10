import java.util.Arrays;

public class M2 {
    public static void main(String[] args) {
        int a[]={5,6,1,9,22,10,15};
        merger(a);
        System.out.println(Arrays.toString(a));
    }
    public static void merger(int[] a)
    {
        if(a.length<2)
            return;

        int mid=a.length/2;
        int[] left=new int[mid];
        int[] right=new int[a.length-mid];
        
        for(int i=0;i<mid;i++)
            left[i]=a[i];

        for(int i=0;i<a.length-mid;i++)
            right[i]=a[i+mid];

        merger(left);
        merger(right);

        combine(left,right,a);
    
    }

    public static void combine(int[] left,int[] right,int[] res)
    {
        System.out.println("Res");
        System.out.println(Arrays.toString(res));
        int lenleft=left.length;
        int lenright=right.length;
        
        int i=0;
        int j=0;
        int k=0;
        while(i<lenleft && j<lenright)
        {
            if(left[i]<right[j])
            {
                res[k]=left[i++];
            }
            else{
                res[k]=right[j++];
            }
            k++;
        }
        while(i<lenleft)
            res[k++]=left[i++];

        while (j<lenright) 
            res[k++]=right[j++];

    }
}
