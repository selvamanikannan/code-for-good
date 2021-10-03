import java.io.*;
import java.util.Arrays;
import java.util.HashMap;
import java.util.StringTokenizer;
import java.math.BigInteger;
import java.util.Scanner;
import java.util.Arrays;


class A{
    static void printNcR(int n, int r) { 
        long p = 1, k = 1; 
        if (n - r < r) { 
            r = n - r; 
        } 
  
        if (r != 0) { 
            while (r > 0) { 
                p *= n; 
                k *= r; 
                
                long m = __gcd(p, k); 
                p /= m; 
                k /= m; 
  
                n--; 
                r--; 
            } 
        } 
        else { 
            p = 1; 
        } 
        
        System.out.println(p); 
    } 
  
    static long __gcd(long n1, long n2) { 
        long gcd = 1; 
  
        for (int i = 1; i <= n1 && i <= n2; ++i) { 
            if (n1 % i == 0 && n2 % i == 0) { 
                gcd = i; 
            } 
        } 
        return gcd; 
    } 

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int t = s.nextInt();
		while(t-- > 0){
			int n = s.nextInt();
			int k = s.nextInt();
			int arr[]=new int[n];
			for (int j=0;j<n;j++){
				arr[j]=s.nextInt();				
			}
			int x=0;
			Arrays.sort(arr);
			for(int i = 0; i < n; i++){	
            	if(arr[i] == arr[k-1]){
                	x++;
            	}
            	// System.out.println(arr[i]);
        	}

        	// System.out.println(x);
        	int ct=1;
        	for(int i=k-2;i>=0;i--){
        		if(arr[i]!=arr[k-1]){
        			break;
        		}
        		ct++;
        	}

        	printNcR(x,ct);
		}
		
	}
}