import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
	
	Scanner sc = new Scanner(System.in);
	Random rand = new Random();
	int a = rand.nextInt(1000)+1;
	System.out.println("Pick a number from 1-1000");
	int b = sc.nextInt();
	boolean x=a<=b;
	boolean y=a>=b;
	if(x)
	{
		System.out.println("the number is less than your input!");
	}
	if(y)
	{
		System.out.println("the number is greater than your input!");
		
	}
}
}
