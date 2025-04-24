public class Rearrange_Array_Elements_by_Sign {
    /**
     * Brute Force Approach:
     * 1. Create two lists, one for positive numbers and one for negative numbers.
     * 2. Iterate through the array and add the elements to the appropriate list.
     * 3. Create a new list and add the elements from the positive and negative
     * lists in an alternating fashion.
     * 4. If one list is longer than the other, append the remaining elements from
     * the longer list to the end of the new list.
     * 
     * 
     * Time Complexity: O(n)
     * Space Complexity: O(n)
     */
    public static int[] arrangeElementsBySignBrute(int[] a) {
        int[] pos = new int[a.length / 2];
        int[] neg = new int[a.length / 2];
        int posIndex = 0, negIndex = 0;
        for (int i = 0; i < a.length; i++) {
            if (a[i] > 0) {
                pos[posIndex++] = a[i];
            } else {
                neg[negIndex++] = a[i];
            }
        }
        int[] result = new int[a.length];
        posIndex = 0;
        negIndex = 0;
        for (int i = 0; i < a.length; i++) {
            if (i % 2 == 0) {
                result[i] = pos[posIndex++];
            } else {
                result[i] = neg[negIndex++];
            }
        }
        return result;
    }

    /**
     * Optimal Approach (Using Two Pointers):
     * 1. Create a new list to store the result.
     * 2. Use two pointers to keep track of the positive and negative numbers.
     * 3. Iterate through the array and add the elements to the result list in an
     * alternating fashion.
     * 4. Return the result list.
     * 
     * Time Complexity: O(n)
     * Space Complexity: O(n)
     */
    public static int[] arrangeElementsBySignOptimal(int[] a) {
        int[] result = new int[a.length];
        int posIndex = 0, negIndex = 1;
        for (int i = 0; i < a.length; i++) {
            if (a[i] > 0) {
                result[posIndex] = a[i];
                posIndex += 2;
            } else {
                result[negIndex] = a[i];
                negIndex += 2;
            }
        }
        return result;
    }

    public static void main(String[] args) {
        int[] a = { 3, 1, -2, -5, 2, -4 };
        int[] resultBrute = arrangeElementsBySignBrute(a);
        System.out.print("Brute Force Result: ");
        utility.printArray(resultBrute);
        int[] resultOptimal = arrangeElementsBySignOptimal(a);
        System.out.print("Optimal Result: ");
        utility.printArray(resultOptimal);
    }
}
