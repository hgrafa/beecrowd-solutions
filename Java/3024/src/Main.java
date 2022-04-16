import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {

        Scanner in = new Scanner(System.in);
        int n = in.nextInt(), limit = in.nextInt();

        int numberOfViews = 1;

        int lastPosition = in.nextInt();
        for(int i=1; i<n; i++){
            int position = in.nextInt();

            if(position - lastPosition < limit ) 
                numberOfViews++;

            lastPosition = position;

        }

        System.out.println(numberOfViews);

    }
}
