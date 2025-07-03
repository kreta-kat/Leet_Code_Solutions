public class no_factors {
    public static void main(String[] args) {
       int n = 36;
       int count =2;
       for(int i =2; i<n;i++)
       {
           if(n%i == 0)
           {
               count++;
           }
       }
       System.out.println(count);
       // optimised sqrt(n)
    for(int i =1; i*i<=n; i++)
    {
        if(n%i == 0)
        {
            if(n == n/i)
            {
                count++;
            }
            else {
                count=count + 2;
            }
        }
    }
}

}