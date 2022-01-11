import java.util.Scanner;

class starter {
	public static void main(String args[]) {
Scanner sc = new Scanner(System.in);
System.out.println("put 3 numbers below");
int a = sc.nextInt();
int b = sc.nextInt();
int c = sc.nextInt();
boolean z= a<b && b<c;
boolean y= a>b && b>c;
if (z)
{
System.out.println("a<b<c");
}
if (y)
{
System.out.println("a>b>c");
}
	}
}
