import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {

        Scanner scanner = new Scanner(System.in);
        int n = 0;

        while( (n = scanner.nextInt()) != 0 ){

            int now = scanner.nextInt();
            int offTime = now+10;
            int totalTime = 10;

            for(int i=1; i<n; i++){
                now = scanner.nextInt();

                if( now < offTime ) totalTime += (now + 10 - offTime);
                else totalTime += 10;
                
                offTime = now + 10;
            }

            System.out.println(totalTime);

        }

    }
}
