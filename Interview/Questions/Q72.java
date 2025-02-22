//72.WAP to identify Arrays are disjoint or not

import java.util.HashSet;
import java.util.Scanner;

public class Q72 {
    public static boolean areDisjoint(int[] a, int[] b) {
        HashSet<Integer> st = new HashSet<>();
        for (int element : a)
            st.add(element);
        for (int element : b) {
            if (st.contains(element))
                return false;
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
        boolean result = areDisjoint(a, b);
        if (result)
            System.out.println("The Arrays are Disjoint");
        else
            System.out.println("The Arrays are not Disjoint");
        sc.close();
    }
}