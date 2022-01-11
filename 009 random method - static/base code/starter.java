import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
	
	Scanner sc = new Scanner(System.in);
	Random rand = new Random();
	int a = rand.nextInt(10);
	System.out.println(a);
	int b = rand.nextInt(100)+1;
	System.out.println(b);	
	double c = 2.5 *rand.nextDouble() + 1;
	System.out.println(c);
	double d = 575 * rand.nextDouble() + 14;
	System.out.println(d);
	}	
}
