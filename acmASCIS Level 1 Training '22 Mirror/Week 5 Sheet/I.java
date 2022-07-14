import java.io.PrintWriter;
import java.util.*;

public class Acm {
    public static <K, V> Map<K, V> sortByKeys(Map<K, V> unsortedMap) {
        // construct a `TreeMap` from the given map and return it
        return new TreeMap<>(unsortedMap);
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        HashMap<Character, Integer> myMap = new HashMap<>();
        String message = in.nextLine();
        String temp = in.nextLine();
        message = message.replaceAll(" ", "");
        temp = temp.replaceAll(" ", "");
        for (char letter : message.toCharArray()) {
            if (myMap.containsKey(letter))
                myMap.put(letter, myMap.get(letter) + 1);
            else
                myMap.put(letter, 1);
        }
        for (char let : temp.toCharArray()) {
            if (myMap.get(let) == null || myMap.get(let) <= 0) {
                System.out.println("NO");
                return;
            } else
                myMap.put(let, myMap.get(let) - 1);
        }
        System.out.println("YES");
    }
}
