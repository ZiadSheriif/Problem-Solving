import java.io.PrintWriter;
import java.util.*;

class Acm {
    public static <K, V> Map<K, V> sortByKeys(Map<K, V> unsortedMap) {
        return new TreeMap<>(unsortedMap);
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int size = in.nextInt();
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            int x = in.nextInt();
            if (x > size) {
                break;
            }
            cnt++;
        }
        System.out.println(cnt);
    }
}
