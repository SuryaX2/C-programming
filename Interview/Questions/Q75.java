// 75.WAP to operate Circular rotation of an array by K positions

import java.util.Scanner;

public class Q75 {
    public static void Reverse(int[] arr, int start, int end) {
        while (start <= end) {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }

    public static void rotateToRight(int[] arr, int n, int k) {
        Reverse(arr, 0, n - k - 1); // Reverse first n-k elements
        Reverse(arr, n - k, n - 1); // Reverse last k elements
        Reverse(arr, 0, n - 1); // Reverse whole array
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of elements in the array: ");
        int n = sc.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter the elements of the array: ");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.println("Enter the number of rotations: ");
        int k = sc.nextInt();
        rotateToRight(arr, n, k);
        System.out.println("Rotated array: ");
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
        sc.close();
    }
}
