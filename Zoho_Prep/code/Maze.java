public class Maze {
    public static void main(String[] args) {
        paths("", 0, 0, 2);
    }

    public static void paths(String res, int left, int right, int size)
    {
        if(left==size && right==size)
        {
            System.out.println(res);
            res="";
            return;
        }
        if(left==size)
        {
            paths(res+"R", left, right+1, size);
            return;
        }
        if(right==size)
        {
            paths(res+"D", left+1, right, size);
            return;
        }
        paths(res+"R", left, right+1, size);
        paths(res+"D", left+1, right, size);

    }
}
