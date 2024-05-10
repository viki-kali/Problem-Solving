public class Permutations {
    public static void main(String[] args) {
        String str="abc";
        
        npr("", str);
    }
    public static void npr(String left,String right)
    {
        System.out.println("Left :"+left);
        System.out.println("Right :"+right);

        if(right.isEmpty())
        {
            System.out.println("Result :");
            System.out.println(left);
            return;
        }
        char ch=right.charAt(0);
        int len=left.length() +1;
        for(int i=0;i<len;i++)
        {
            String first=left.substring(0, i);
            
            String second=left.substring(i);
            
            npr(first+ch+second, right.substring(1));
        }
    }
}
