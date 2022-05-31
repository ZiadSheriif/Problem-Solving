import java.io.PrintWriter;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;
import java.util.TreeMap;

class Acm {
    public static <K, V> Map<K, V> sortByKeys(Map<K, V> unsortedMap) {
        // construct a `TreeMap` from the given map and return it
        return new TreeMap<>(unsortedMap);
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        Map<String, Integer> Teams = new HashMap<>();
        int n = in.nextInt();
        for (int i = 0; i < n; i++) {
            String team = in.next();
            char point = in.next().charAt(0);
            if (point == 'W') {
                if (Teams.containsKey(team))
                    Teams.put(team, Teams.get(team) + 3);
                else
                    Teams.put(team, 3);
            } else if (point == 'L') {
                if (Teams.containsKey(team))
                    Teams.put(team, Teams.get(team));
                else
                    Teams.put(team, 0);
            } else {
                if (Teams.containsKey(team))
                    Teams.put(team, Teams.get(team) + 1);
                else
                    Teams.put(team, 1);
            }
        }

        System.out.println(Teams.size());
        Teams = sortByKeys(Teams);
        for (String teamm : Teams.keySet()) {

            System.out.println(teamm + " " + Teams.get(teamm));
        }
    }
}
