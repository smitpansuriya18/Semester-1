import java.util.Scanner;
public class Pattern4{
	public static void main(String args[])
	{
		System.out.println("Enter n=");
		Scanner input=new Scanner(System.in);

		int n=input.nextInt();
		int count=1;
		for (int i=1;i<=n ;i++ ) {
			for (int j=1;j<=i ;j++ )
				 {

			System.out.print(count+" ");

			count++;
			
			}

			System.out.print("\n");

		}	

	}
}