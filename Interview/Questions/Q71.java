import java.util.HashMap;
import java.util.Scanner;

class Q71 {
    public void symmetricPair(int[][] arr) {
        HashMap<Integer, Integer> mp = new HashMap<Integer, Integer>();
        System.out.println("The Symmetric Pairs are: ");
        for (int i = 0; i < arr.length; i++) {
            int first = arr[i][0];
            int second = arr[i][1];
            if (mp.get(second) != null && mp.get(second) == first) {
                System.out.print("(" + first + " " + second + ") ");
            } else {
                mp.put(first, second);
            }
        }
    }

    public static void main(String[] args) {
        Q71 q = new Q71();
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of pairs: ");
        int n = sc.nextInt();
        int[][] arr = new int[n][2];
        for (int i = 0; i < n; i++) {
            System.out.printf("Enter pair " + (i + 1) + ": ");
            arr[i][0] = sc.nextInt();
            arr[i][1] = sc.nextInt();
        }
        q.symmetricPair(arr);
        sc.close();
    }
}