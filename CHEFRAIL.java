import java.io.*;
import java.util.*;
import java.util.HashMap;
import java.util.StringTokenizer;
import java.math.BigInteger;
import java.util.Collections;
import java.util.Arrays;
import java.lang.Math;

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
        Scanner scanner = new Scanner(System.in);
        FastReader s = new FastReader();
        A ob1 = new A();
        int sum = 0;
        int t = scanner.nextInt();
        while (t-- > 0) {

            int n, m, i, orig = 0;
            int j;
            n = scanner.nextInt();
            m = scanner.nextInt();
            ArrayList<Integer> lx = new ArrayList<Integer>();
            ArrayList<Integer> rx = new ArrayList<Integer>();
            ArrayList<Integer> ly = new ArrayList<Integer>();
            ArrayList<Integer> ry = new ArrayList<Integer>();
            Map<Double, Integer> mx = new HashMap<>();
            Map<Double, Integer> my = new HashMap<>();

            for (i = 0; i < n; i++) {
                j = scanner.nextInt();
                mx.put((double) j, 1);
                if (j < 0) {
                    lx.add(j);
                } else if (j == 0) {
                    orig = 1;
                } else {
                    rx.add(j);
                }
            }
            for (i = 0; i < m; i++) {
                j = scanner.nextInt();
                my.put((double) j, 1);
                if (j < 0) {
                    ly.add(j);
                } else if (j == 0) {
                    orig = 2;
                } else {
                    ry.add(j);
                }
            }
            int res = 0;
            if (orig == 1)
                res += (n - 1) * m;
            else if (orig == 2)
                res += n * (m - 1);
            Collections.sort(lx);
            Collections.sort(ly);
            Collections.sort(rx);
            Collections.sort(ry);

            // System.out.println(lx.toString());
            // System.out.println(ly.toString());
            // System.out.println(rx.toString());
            // System.out.println(ry.toString());

            double tp;
            if (lx.size() > 0 && rx.size() > 0 && (ly.size() > 0 || ry.size() > 0)) {
                for (i = 0; i < lx.size(); i++) {
                    for (j = 0; j < rx.size(); j++) {

                        tp = Math.sqrt(
                                (Math.pow(rx.get(j) - lx.get(i), 2) - Math.pow(rx.get(j), 2) - Math.pow(lx.get(i), 2))
                                        / 2);
                        if (my.containsKey(tp))
                            res++;
                        if (my.containsKey(-tp))
                            res++;
                    }
                }
            }
            // cout<<tp<<" ";
            // cout<<res<<" ";
            if (ly.size() > 0 && ry.size() > 0 && (lx.size() > 0 || rx.size() > 0)) {
                for (i = 0; i < ly.size(); i++) {
                    for (j = 0; j < ry.size(); j++) {
                        tp = Math.sqrt(
                                (Math.pow(ry.get(j) - ly.get(i), 2) - Math.pow(ry.get(j), 2) - Math.pow(ly.get(i), 2))
                                        / 2);
                        if (mx.containsKey(tp))
                            res++;
                        if (mx.containsKey(-tp))
                            res++;
                    }
                }
            }
            System.out.println(res);

        }
    }

}