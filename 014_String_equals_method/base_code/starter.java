import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
		
		String wi = new String("wizard");
		String wa = new String("warrior");
		String ro = new String("rogue");
		
		System.out.println("Choose to become a Wizard, a Warrior, or a Rogue");
		Scanner sc = new Scanner(System.in);
	    String role = sc.nextLine();
	    
		if(role.equals("wizard"))
		{
		System.out.println("Cool! You're a wizard now!");
		}
		if(role.equals("warrior"))
		{
		System.out.println("Awesome!You are now a warrior!");
		}
		if(role.equals("rogue"))
		{
		System.out.println("You are now a rogue!");
		}
		
		
		
		
		
		
		
		
		
		
	}
}
