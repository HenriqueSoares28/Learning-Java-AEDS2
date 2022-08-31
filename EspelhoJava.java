import java.util.Scanner;

public class EspelhoJava {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while(sc.hasNext()){
            int num1 = sc.nextInt(); 
            int num2 = sc.nextInt();
            String numString = "";
            String inversa = "";
            for(int i=num1; i<=num2; i++){
                numString += i;
            }
            for(int i=numString.length()-1; i>=0; i--){
                inversa += numString.charAt(i);
            }
            for(int i = 0; i < inversa.length(); i++){
                numString += inversa.charAt(i);
            }

            System.out.println(numString);
        }
        sc.close();
    }
}
