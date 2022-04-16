import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {
        
        Scanner in = new Scanner(System.in);
        int n;

        while( ( n = in.nextInt() ) > 0 ){
            
            
            for(int j=0; j<n; j++){
                String option = "";
                for(int i=0; i<5; i++){
                    int marked = in.nextInt();

                    if(marked <= 127){
                        option += (char)((int)'A' + i);
                    }
                }
                if(option.length() != 1) System.out.println("*");
                else System.out.println(option);
            }


        }

        in.close();

    }
}
