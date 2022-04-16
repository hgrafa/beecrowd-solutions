import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
       
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        float[] bits = new float[n], weight = new float[n];

        bits[0] = in.nextFloat();
        weight[0] = in.nextFloat();
        float lowest = 1000.0f/weight[0] * bits[0];

        for(int i=1; i<n; i++){
            bits[i] = in.nextFloat();
            weight[i] = in.nextFloat();

            float thisCost = (1000.0f/weight[i] * bits[i]);
            if( thisCost < lowest) lowest = thisCost;
        }

        System.out.printf("%.2f\n", lowest);
        in.close();
    }
}
