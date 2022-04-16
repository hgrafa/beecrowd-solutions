import java.util.Scanner;

public class Main {

    public static boolean isVowel(char character){

        switch (character) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                return true;
            default:
                return false;
        }
    }
    public static void main(String[] args) throws Exception {
       
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        in.nextLine();

        for(int i=0; i<n; i++){
            String line = in.nextLine();

            boolean isHard = false;
            int count = 0;
            for(int j=0; j<line.length(); j++){

                if( !isVowel(line.charAt(j)) ) count++;
                else count = 0;

                if(count == 3){
                    isHard = true;
                    break;
                } 
            }   

            System.out.print(line);
            if(isHard) System.out.print(" nao");
            System.out.println(" eh facil");

        }

        in.close();

    }
}
