import java.io.*;
import java.util.*;

class test{
	int a;
	test(){
		a=1;
	}
	test(int b){
		a=b;
	}

	test(int b,int c){
		a=b+c;
	}
	test(int x,int y,int z){
		this(x+y+z);
	}

	test(test m){
		a=m.a;
	}

	int get_a(){
		return a;
	}
}

class constructor{
	public static void main(String[] args) {
		System.out.println(new test().get_a()); //no args cons
		System.out.println(new test(10).get_a()); //1 args cons
		System.out.println(new test(1,2).get_a()); //2 args cons
		System.out.println(new test(1,2,3).get_a()); //chained cons
		System.out.println(new test(new test(1,2)).get_a()); //copy cons	
	}
}