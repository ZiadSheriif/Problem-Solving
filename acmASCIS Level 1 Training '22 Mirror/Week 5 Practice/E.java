import java.io.PrintWriter;
import java.util.Scanner;

class Acm {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        for (int i = 0; i < n; i++) {
            int cntlow = 0, cntup = 0;
            String temp = in.next();
            for (char letter : temp.toCharArray()) {
                if (letter >= 'A' && letter <= 'Z')
                    cntup++;
                else
                    cntlow++;
            }
            System.out.println(Math.min(cntup, cntlow));
        }
        in.close();
    }
}
