public class Combination {
     public static void main(String[] args) {
        int n =5;
        int r =2;
        int result = fact(n)/(fact(n-r)*fact(r));
        System.out.println(result);
    }
    
    public static int fact(int n)
    {
        int ans = 1;
        for(int i=1; i<=n; i++)
        {
            ans = ans * i;
        }
        return ans;
    }
}
