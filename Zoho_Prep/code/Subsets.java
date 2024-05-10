import java.util.ArrayList;

public class Subsets {
    public static void main(String[] args) {
        String str="abcd";
        //removeA("", str);
        //allSubsets("", str);
        ArrayList<Integer> l=new ArrayList<>();
        ArrayList<Integer> r=new ArrayList<>();
        r.add(1);
        r.add(2);
        r.add(3);
        allSubsetsOfArray(l,r);
        System.out.println(a);
    }

    public static void removeA(String left,String right)
    {
        if(right.equals(""))
        {
            System.out.println(left);
            return;
        }
        char[] s=right.toCharArray();
        if(s[0]!='a')
            removeA(left+s[0], right.substring(1));
        else
            removeA(left, right.substring(1));

    }

    public static void allSubsets(String left,String right)
    {
        if(right.isEmpty())
        {
            System.out.println(left);
            return;
        }
        allSubsets(left+right.charAt(0), right.substring(1));
        allSubsets(left, right.substring(1));
    }
    public static ArrayList<ArrayList<Integer>> a=new ArrayList<>();
    public static void allSubsetsOfArray(ArrayList<Integer> left,ArrayList<Integer> right)
    {
        if(right.isEmpty())
        {
            a.add(left);
            return;
        }
        int val=right.remove(0); 
        ArrayList<Integer> n=new ArrayList<>();
        n.addAll(left);
        n.add(val);
        allSubsetsOfArray(n, right);
        allSubsetsOfArray(left, right);

    }
}
