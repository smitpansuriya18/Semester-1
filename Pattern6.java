import java.util.Scanner;
public class Pattern6{
	public static void main(String args[])
	{
		System.out.println("Enter n=");
		Scanner input=new Scanner(System.in);

		int n=input.nextInt();

		for (int i=n;i>0 ;i-- ) {
			for (int j=1;j<=i ;j++ )
				 {

			System.out.print("*");
			
			}

			System.out.print("\n");

		}	

	}
}