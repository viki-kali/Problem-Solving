import java.lang.reflect.Array;
import java.util.ArrayList;

public class Dice {
    public static void main(String[] args) {
        
        int target=4;
        ArrayList<Integer> r=new ArrayList<>();
        findCombinations(r, target);
    }
    public static void findCombinations(ArrayList<Integer> res,int target)
    {
        if(target==0)
        {
            System.out.println(res);
            return;
        }
        for(int i=1;i<=6 && i<=target;i++)
        {
            res.add(i);
            findCombinations(res, target-i);
            res.remove(res.indexOf(i));
        }
    }
}
