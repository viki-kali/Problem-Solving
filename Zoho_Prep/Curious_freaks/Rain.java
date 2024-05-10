import java.lang.reflect.Array;
import java.util.Arrays;

public class Rain
{
    public static void main(String[] args) {
        int[] a={1,2,0,1,4,3,2,3};
        int n=a.length;
        int[] prefix=new int[n];
        int[] suffix=new int[n];
        
        int max=a[0];
        for(int i=0;i<n;i++)
        {
            if(max<=a[i])
            {
                max=a[i];   
            }  
            prefix[i]=max;
        }
        System.out.println(Arrays.toString(prefix));

        max=a[a.length-1];
        for(int i=a.length-1;i>=0;i--)
        {
            if(max<=a[i])
            {
                max=a[i];   
            }  
            suffix[i]=max;
        }
        System.out.println(Arrays.toString(suffix));
        
    }
    
}