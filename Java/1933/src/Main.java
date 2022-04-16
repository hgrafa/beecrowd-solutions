import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {

        Scanner input = new Scanner(System.in);

        int a = input.nextInt(), b = input.nextInt();

        int max = a > b ? a : b ;

        System.out.println(max);
        
        input.close();

    }
}
