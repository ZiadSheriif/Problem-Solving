import java.io.PrintWriter;
import java.util.*;

class Acm {
    public static <K, V> Map<K, V> sortByKeys(Map<K, V> unsortedMap) {
        return new TreeMap<>(unsortedMap);
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        List<Integer> temp = new ArrayList<>();
        for (int i = 0; i < 3; i++)
            temp.add(in.nextInt());
        Collections.sort(temp);
        for (int i = 1; i <= 3; i++) {
            if (i != temp.get(i - 1)) {
                System.out.println("FF");
                return;
            }
        }
        System.out.println("GG");
    }

}
