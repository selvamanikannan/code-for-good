import java.io.*;
import java.util.*;
import java.util.HashMap;
import java.util.StringTokenizer;
import java.math.BigInteger;
import java.util.Collections;
import java.util.Arrays;

class A {

    static class FastReader {
        BufferedReader br;
        StringTokenizer st;

        public FastReader() {
            br = new BufferedReader(new InputStreamReader(System.in));
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
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Scanner scanner = new Scanner(System.in);
        FastReader s = new FastReader();
        A ob1 = new A();
        long sum = 0;
        int t = scanner.nextInt();
        while (t-- > 0) {
            int n = scanner.nextInt();
            int res = -400;
            int arr[] = { 0, 0, 0, 0 };
            int a[][] = { { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 }, { 0, 0, 0, 0 } };
            // System.out.println(a[0][2]);
            Map<String, Integer> dic = new HashMap<>();
            dic.put("A", 0);
            dic.put("B", 1);
            dic.put("C", 2);
            dic.put("D", 3);

            Map<String, Integer> mms = new HashMap<>();

            for (int i = 0; i < n; i++) {
                String p = scanner.next();
                int k = scanner.nextInt();
                k = (k / 3) - 1;
                a[dic.get(p)][k] += 1;

            }

            // for (int i = 0; i < a.length; i++)
            //     for (int j = 0; j < a[i].length; j++)
            //         System.out.print(a[i][j] + " ");

            for (int i = 0; i < 4; i++)
                for (int j = 0; j < 4; j++)
                    if (i != j)
                        for (int k = 0; k < 4; k++)
                            if (k != i && k != j)
                                for (int z = 0; z < 4; z++)
                                    if ((z != i) && (z != j) && (z != k)) {
                                        // System.out.println(i+" "+j+" "+k+" "+z);
                                        int h = a[i][0] + a[j][1] + a[k][2] + a[z][3];
                                        arr[0] = a[i][0];
                                        arr[1] = a[j][1];
                                        arr[2] = a[k][2];
                                        arr[3] = a[z][3];
                                        int ct = 0;
                                        // System.out.println(arr[0] + " " + arr[1] + " " + arr[2] + " " + arr[3]);
                                        for (int ss = 0; ss < (4 - 1); ss++) {
                                            int temp;
                                            for (int rr = 0; rr < 4 - ss - 1; rr++) {
                                                if (arr[rr] < arr[rr + 1]) {
                                                    temp = arr[rr];
                                                    arr[rr] = arr[rr + 1];
                                                    arr[rr + 1] = temp;
                                                }
                                            }
                                        }

                                        for(int ssd=0;ssd<4;ssd++)
                                            if (arr[ssd] == 0)
                                                ct += 1;

                                        // if(n==0)
                                        //     ct = 4;
                                        // System.out.println(ct);
                                        
                                        // Collections.sort(arr);
                                        // Collections.reverse(arr);
                                        // Arrays.sort(arr, Collections.reverseOrder());
                                        h = arr[0] * 100 + arr[1] * 75 + arr[2] * 50 + arr[3] * 25 - (ct * 100);
                                        res = Math.max(h, res);
                                    }

            System.out.println(res);
            sum += res;
        }
        System.out.println(sum);
    }

}