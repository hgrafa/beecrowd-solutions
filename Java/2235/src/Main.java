import java.util.Scanner;
import java.util.concurrent.ConcurrentHashMap.KeySetView;

public class Main {
    public static void main(String[] args) throws Exception {

        Scanner keyboard = new Scanner(System.in);

        int a = keyboard.nextInt(),
            b = keyboard.nextInt(),
            c = keyboard.nextInt();

        if(a==b || a==c || b==c) System.out.println("S");
        else if(a+b==c || a+c==b || b+c==a) System.out.println("S");
        else System.out.println("N");

    }
}
