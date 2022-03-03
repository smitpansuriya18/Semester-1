import java.util.Scanner;
public class Pattern5{
	public static void main(String args[])
	{
		System.out.println("Enter n=");
		Scanner input=new Scanner(System.in);

		/*int n=input.nextInt();*/

		for (int i=65;i<=69 ;i++ ) {
			for (int j=65;j<=i ;j++ )
				 {

			System.out.print(" "+(char)j);
			
			}

			System.out.print("\n");

		}	

	}
}