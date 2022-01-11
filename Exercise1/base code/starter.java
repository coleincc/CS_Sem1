import java.util.Scanner;

class starter {
	public static void main(String args[]) {

Scanner sc = new Scanner(System.in);
System.out.println("insert a number below");
int n = sc.nextInt();
System.out.println(n+1);
System.out.println(n+2);
System.out.println(n+3);
System.out.println(n+4);

System.out.println("do you like pizza??");
String mary = sc.nextLine();
if (mary.equals("yes"))
{
System.out.println("do you like pinnapples on it?");
}
else if (mary.equals("no"))
{
System.out.println("do yo like hambugers?");
}






	}
}
