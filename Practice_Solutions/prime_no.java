public class prime_no {
     public static void main(String[] args) {
       int n = 5;
       int count =0;
       for(int i =1; i*i<n;i++)
       {
           if(n%i == 0)
           {
               if(i == n/i)
               {count++;}
               else {
                   count = count + 2;
               }
           }
       }
       if(count == 2)
       {
           System.out.println("Prime");
       }
       else {
           System.out.println("Non- Prime");
       }
}
}
