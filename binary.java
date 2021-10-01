//addition of binary numbers
//selvamani kannan

import java.io.*;
import java.util.*;

class binary{
	public  static void main(String args[]){
		int carry=0,val=1,soln=0;
		String b1,b2;

		Scanner s =  new Scanner(System.in);
		System.out.print("Enter binary number 1: ");
		b1= s.next();
		System.out.print("Enter binary number 2: ");
		b2= s.next();
		int l1 = b1.length()-1;
		int l2 = b2.length()-1;

		ArrayList<Integer> so=new ArrayList<Integer>();

		while(l1>-1 && l2>-1){
			int f1=(int)b1.charAt(l1--)-'0';
			int f2=(int)b2.charAt(l2--)-'0';
			if(carry == 1){
				int temp = (carry+f1)%2;
				carry=(int)(carry+f1)/2;
				so.add((temp+f2)%2);
			}
			else
				so.add((f1+f2)%2);
				carry =(int)(f1+f2)/2;
			}

		if(carry == 1)
			so.add(1);
		for(int i=so.size()-1;i>=0;i--)
			System.out.print(so.get(i));
		System.out.println();
	}
}