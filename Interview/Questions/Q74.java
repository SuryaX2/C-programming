// 74.WAP to Sort elements of an array by frequency

import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Scanner;

class Pair {
    int first;
    int second;

    Pair(int first, int second) {
        this.first = first;
        this.second = second;
    }

    Pair() {
    }
}

public class Q74 {
    public static void sortElementsByFrequency(int arr[], int n) {
        HashMap<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < n; i++) {
            map.put(arr[i], map.getOrDefault(arr[i], 0) + 1);
        }
        ArrayList<Pair> vec = new ArrayList<>();
        for (int x : map.keySet()) {
            vec.add(new Pair(x, map.get(x)));
        }
        Collections.sort(vec, (a, b) -> {
            if (a.second == b.second)
                return a.first - b.first;
            else
                return b.second - a.second;
        });
        for (int i = 0; i < vec.size(); i++) {
            while (vec.get(i).second > 0) {
                System.out.print(vec.get(i).first + " ");
                vec.get(i).second--;
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of elements in the array: ");
        int n = sc.nextInt();
        int arr[] = new int[n];
        System.out.println("Enter the elements of the array: ");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        sortElementsByFrequency(arr, n);
        sc.close();
    }
}
