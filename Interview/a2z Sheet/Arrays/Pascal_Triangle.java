import java.util.ArrayList;
import java.util.List;

public class Pascal_Triangle {
    private static List<Integer> generateRow(int r) {
        int ans = 1;
        List<Integer> ansRow = new ArrayList<>();
        ansRow.add(ans);
        for (int i = 1; i < r; i++) {
            ans = (ans * (r - i)) / i;
            ansRow.add(ans);
        }
        return ansRow;
    }

    private static List<List<Integer>> pascalTriangle(int n) {
        List<List<Integer>> result = new ArrayList<>();
        for (int i = 1; i <= n; i++) {
            result.add(generateRow(i));
        }
        return result;
    }

    public static void main(String[] args) {
        List<List<Integer>> pt = new ArrayList<>();
        pt = pascalTriangle(5);
        for (List<Integer> i : pt) {
            System.out.println(i);
        }
    }

}