import java.util.Scanner;

public class Main {

    public static int r(int x, int y){
        return 3*x*x + y*y;
    }

    public static int b(int x, int y){
        return 2*x*x + 5*y*y;
    }

    public static int c(int x, int y){
        return -100*x + y*y*y;
    }

    public static void main(String[] args) throws Exception {

        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();

        for (int i = 0; i < n; i++) {
            int a = scanner.nextInt(), b = scanner.nextInt();

            int max = Math.max( r(a, b),
                      Math.max( b(a, b),
                                c(a, b) ));

            if(max == r(a, b)) System.out.print("Rafael");
            else if(max == c(a, b)) System.out.print("Carlos");
            else System.out.print("Beto");

            System.out.println(" ganhou");
        } 

    }
}
