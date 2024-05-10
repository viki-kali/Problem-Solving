import java.util.HashMap;
import java.util.Map;

public class Currency {

    public static void main(String[] args) {
        Map<Character,String> m=new HashMap<>();
        m.put('0', "0000");
        m.put('1',"0001");

        String s="0011";
        String res="";

        for(char ch:s.toCharArray())
        {
            String temp=m.get(ch);
            res=res+temp;
        }
        System.out.println(res);
        
    }
}
