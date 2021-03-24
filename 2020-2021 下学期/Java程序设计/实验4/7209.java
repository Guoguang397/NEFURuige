import java.util.*;
public class Main{
    public static void main(String[] args){
        //write your own code
        Scanner sc = new Scanner(System.in);
        HashMap<String,Integer> mp = new HashMap<>();
        int n = sc.nextInt();
        for (int i = 0; i <n; i++) {
            String key = sc.next();
            int num = sc.nextInt();
            mp.put(key,num);
        }
        mp = sortHashMap(mp);
        System.out.println(mp.get(sc.next()));
        for (String s : mp.keySet()) {
            System.out.println(s+"="+mp.get(s));
        }
    }

    public static HashMap<String, Integer> sortHashMap(HashMap<String, Integer>map) {
        Set<Map.Entry<String, Integer>> entrySet = map.entrySet();
        List<Map.Entry<String, Integer>> list = new ArrayList<>(entrySet);
        Collections.sort(list, new Comparator<Map.Entry<String, Integer>>() {
            @Override
            public int compare(Map.Entry<String, Integer> o1, Map.Entry<String, Integer> o2) {
                return o1.getKey().compareTo(o2.getKey());
            }
        });
        LinkedHashMap<String, Integer> linkedHashMap = new LinkedHashMap<>();
        for (Map.Entry<String, Integer> entry : list) {
            linkedHashMap.put(entry.getKey(), entry.getValue());
        }
        return linkedHashMap;
    }
}
