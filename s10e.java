import java.io.*;
import java.util.*;

class A{
	public  static void main(String args[]){
		int ts;
		Scanner s = new Scanner(System.in);
		ts=s.nextInt();
		while(ts-- >0){
			int n;
			n=s.nextInt();
			int arr[] = new int[n+1];
			for(int i=0;i<n;i++)
				arr[i]=s.nextInt();

			int ctGood=1;

			for(int i=1;i<n;i++){
				if(i<5){
					int t=0;
					for(int j=0;j<i;j++){
						if(arr[i]<arr[j]){
							t+=1;
						}
					}
					if(t==i){
						ctGood+=1;
					}
				}
				else{
					int tt=0;
					for(int j=i-5;j<i;j++){
						if(arr[i]<arr[j])
							tt+=1;
					}
					if(tt==5){
						ctGood+=1;
					}
				}

			}

			System.out.println(ctGood);
		}
	}
}