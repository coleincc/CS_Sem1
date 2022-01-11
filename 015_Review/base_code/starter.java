import java.util.Scanner;
import java.util.Random;

class starter {
	public static void main(String args[]) {
	
	
		String wi = new String("wizard");
		String wa = new String("warrior");
		String ro = new String("rogue");
		Scanner sc = new Scanner(System.in);
		System.out.println("What is your name young fighter?");
		String name = sc.nextLine();
		System.out.println("Hello there " + name + "! What is your title? EX: destroyer of worlds");
		String title = sc.nextLine();
		System.out.println( name + ", " + title + ". Wow what a grand name! Now, choose your role, a Wizard, a Warrior, or a Rogue");
	    String role = sc.nextLine();
		if(role.equals("wizard"))	
		{
		System.out.println("Marvelous! You're a wizard now!");
		}
		if(role.equals("warrior"))
		{
		System.out.println("Incredible! You are now a warrior!");
		}
		if(role.equals("rogue"))
		{
		System.out.println("Staggering! You are now a rogue!");
		}
		int tokens = 25;
		System.out.println("You have 25 tokens to spend on abilities!");
		System.out.println("How many tokens would you like to use on strength?");
		int strength = sc.nextInt();
		tokens = tokens-strength;
		System.out.println("You now have " + tokens + " left!");
		System.out.println("How many tokens would you like to use on Agility?");
		int agility = sc.nextInt();
		tokens = tokens-agility;
		System.out.println("You now have " + tokens + " left!");
		System.out.println("How many tokens would you like to use on Intelligence?");
		int intelligence = sc.nextInt();
		tokens = tokens-intelligence;
		System.out.println("You now have " + tokens + " left!");
		System.out.println("How many tokens would you like to use on Health?");
		int health = sc.nextInt();
		tokens = tokens-health;
		System.out.println("You now have " + tokens + " left!");
		System.out.println("How many tokens would you like to use on Charisma?");
		int charisma = sc.nextInt();
		tokens = tokens-charisma;
		System.out.println("-----------------------------------------------------");
		System.out.println("Strength = " + strength);
		System.out.println("Agility = " + agility);
		System.out.println("Intelligence = " + intelligence);
		System.out.println("Health = " + health);
		System.out.println("Charisma = " + charisma);
		System.out.println("Farewell " + name + ", " + title + "!");
		
		
		
		}
	}