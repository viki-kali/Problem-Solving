public class Rev
{
    public static void main(String[] args)
    {
        divisors(10);    
        divisors(19);    
    }

    public static void revnum(int n)
    {
        int sum=0;
        while(n>0)
        {
            int temp=n%10;
            sum=sum+temp;
            sum=sum*10;
            n=n/10;
        }
        System.out.println(sum);
    }
    public static void divisors(int a)
    {
        int mid=a/2;
        for(int i=1;i<mid+1;i++)
        {
            if(a%i==0)
            {
                System.out.println(i);   
            }
        }
    }
}