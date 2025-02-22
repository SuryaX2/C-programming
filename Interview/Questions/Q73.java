// 73.WAP to identify Array is a subset of another array or not

import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class Q73 {
    public static boolean isSubset(int[] a, int[] b) {
        Set<Integer> hashSet = new HashSet<>();
        for (int num : a) {
            hashSet.add(num);
        }
        for (int num : b) {
            if (!hashSet.contains(num)) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of elements in the first array: ");
        int n1 = sc.nextInt();
        System.out.println("Enter the number of elements in the second array: ");
        int n2 = sc.nextInt();
        int[] a = new int[n1];
        int[] b = new int[n2];
        System.out.println("Enter the elements of the first array: ");
        for (int i = 0; i < n1; i++) {
            a[i] = sc.nextInt();
        }
        System.out.println("Enter the elements of the second array: ");
        for (int i = 0; i < n2; i++) {
            b[i] = sc.nextInt();
        }
        boolean result = isSubset(a, b);
        if (result) {
            System.out.println("The first array is a subset of the second array.");
        } else {
            System.out.println("The first array is not a subset of the second array.");
        }
        sc.close();
    }
}
