import java.io.*;
import java.util.Arrays;
import java.util.HashMap;
import java.util.StringTokenizer;
import java.math.BigInteger; 


class A {

    static class FastReader {
        BufferedReader br;
        StringTokenizer st;

        public FastReader() {
            br = new BufferedReader(new
                    InputStreamReader(System.in));
        }

        String next() {
            while (st == null || !st.hasMoreElements()) {
                try {
                    st = new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }

        int nextInt() {
            return Integer.parseInt(next());
        }

        long nextLong() {
            return Long.parseLong(next());
        }

        double nextDouble() {
            return Double.parseDouble(next());
        }

        String nextLine() {
            String str = "";
            try {
                str = br.readLine();
            } catch (IOException e) {
                e.printStackTrace();
            }
            return str;
        }
    }


    public static void main(String[] args) throws IOException {
        FastReader s = new FastReader();
        A ob1 = new A();

        long t = s.nextLong();
        while (t-- > 0)
        {
            long k,m=0;
            int i,j;
            int n;
            n = s.nextInt();
            k = s.nextLong();
            long a[];    //declaring array
            a = new long[n];

            for(i =0;i<n;i++){
                a[i] = s.nextLong();
                if(a[i]!=1 && k%a[i]!=0 && m==0){
                    m=a[i];
                // System.out.print("REgrae");
                }
            }

            long m1 = 0;

            if(m==0){
                long  tp=0;
                for(i=0;i<n;i++)
                {
                    if(a[i]==1)
                        continue;   
                    for(j=i+1;j<n;j++)
                    {
                        if(a[j]==1)
                            continue;
                        if(a[j]%a[i]!=0 && a[i]%a[j]!=0)
                        {
                            m=a[i];
                            m1=a[j];
                            tp=1;
                            break;
                        }
                    }
                    if(tp==1)
                        break;
                }
                if(m1==0)
                    System.out.print("NO"); 
                else
                {
                    System.out.print("YES ");
                    if(m<m1)
                    {
                        for(i=0;i<n;i++)
                        {
                            if(m==a[i])
                            {
                                System.out.print((k-m1)/m+1);
                                System.out.print(" ");
                            }
                            else if(m1==a[i])
                            {
                                System.out.print("1 ");
                            }
                            else
                                System.out.print("0 ");
                        }
                    }
                    else
                    {
                        for(i=0;i<n;i++)
                        {
                            if(m1==a[i])
                            {
                                System.out.print((k-m)/m1+1);
                                System.out.print(" ");
                            }
                            else if(m==a[i])
                            {
                                System.out.print("1 ");
                            }
                            else
                                System.out.print("0 ");
                        }
                    }
                }
            }
            else
        {
            System.out.print("YES ");
            for(i=0;i<n;i++)
            {
                if(m==a[i])
                {
                    System.out.print(k/m+1);
                    System.out.print(" ");
                }
                else
                    System.out.print("0 ");
            }
        }
        System.out.print("\n");

           
    }
    }
}