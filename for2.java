import java.util.Scanner;
public class for2{
	public static void main(String args[]){
		System.out.println("Enter n=");

		Scanner sc=new Scanner(System.in);
		int n = sc.nextInt();
		

		for (int i=1;i<=n ;i++ ) {

			if (i%7==0) {
				System.out.println(i);
			}
			
		}
	}
}