import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {

        Scanner scanner = new Scanner(System.in);

        int n;

        while ( (n = scanner.nextInt()) != -1 ){

            int charge = 0, visits = 0;

            for(int i=0; i<n; i++){

                charge += scanner.nextInt();

                if(charge%100 == 0 && charge != 0 ) visits++;

            }

            System.out.println(visits);

        }

    }
}
