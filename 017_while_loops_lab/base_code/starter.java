import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		// Your code goes below here

int z = 1;
	Scanner sc = new Scanner(System.in);
	System.out.println("Type a name below");
	String name = sc.nextLine();
	System.out.println("Now, type a number");
	int num = sc.nextInt();
	while(true)
	{
		System.out.println(name);
		if(z == num)
		{
			break;
		}
		z = z + 1;
		
	}
	
	
	}
}
