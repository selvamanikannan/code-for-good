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
        BigInteger b1 = new BigInteger("2"); 
        A ob1 = new A();
        int get[]={2,3,0,9};

        int t = s.nextInt();
        while (t-- > 0)
        {
            // long W=s.nextLine();
            BigInteger b2 = new BigInteger(s.nextLine()); 

            BigInteger b3 = new BigInteger("1"); 
            BigInteger b4 = new BigInteger("3"); 

            int m=b4.compareTo(b2);

            if(b2.compareTo(b3)==0){
                System.out.println(0);
            }
            else if(m==0|| m==1){
                System.out.println(1);
            }
            else{
                int ct=0;
                for(int i=0;i<59;i++){ 
                    int cmp=b1.pow(i+3).compareTo(b2);
                    if(cmp==1  ){
                        System.out.println(get[ct%4]); 
                        break; 
                    } 
                    ct+=1;  
                }  

            }
    }
}
}