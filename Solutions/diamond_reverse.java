public class diamond_reverse {
    public static void main(String[] args) {
        int n =5;
        int nst =1;
        int nsp =n/2 +1;
        for(int i =1; i<=n; i++)
        {
            //*
            for(int j = 1; j<=nsp; j++)
            {
                System.out.print("*");
            }
            //space
            for(int k = 1; k<=nst; k++)
            {
                System.out.print(" ");
            }
            //*
            for(int j = 1; j<=nsp; j++)
            {
                System.out.print("*");
            }
            if(i<=n/2)
            {
                nst = nst +2;
                nsp--;
            }
            else
            {
               nst = nst-2;
               nsp++;
            }
            System.out.println("");
        }
}
}
