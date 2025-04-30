import java.util.ArrayList;
import java.util.Arrays;
import java.util.Comparator;
import java.util.List;

public class Merge_Interval {
    /**
     * Brute Force Approach:
     * 1. Sort the intervals based on the start time.
     * 2. Iterate through the sorted intervals and merge them if they overlap.
     * 3. Add the merged interval to the result list.
     * 4. Return the result list.
     *
     * Time Complexity: O(n log n) for sorting + O(n) for merging = O(n log n)
     * Space Complexity: O(1)
     */
    public static List<List<Integer>> mergeIntervalsBrute(int[][] a) {
        int n = a.length;
        Arrays.sort(a, new Comparator<int[]>() {
            public int compare(int[] arr, int[] brr) {
                return arr[0] - brr[0];
            }
        });
        List<List<Integer>> ans = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            int start = a[i][0];
            int end = a[i][1];
            // Skip all the merged intervals:
            if (!ans.isEmpty() && end <= ans.get(ans.size() - 1).get(1)) {
                continue;
            }
            // check the rest of the intervals:
            for (int j = i + 1; j < n; j++) {
                if (a[j][0] <= end) {
                    end = Math.max(end, a[j][1]);
                } else {
                    break;
                }
            }
            ans.add(Arrays.asList(start, end));
        }
        return ans;
    }

    /**
     * Optimal Approach:
     *
     */
    public static List<List<Integer>> mergeIntervalsOptimal(int[][] arr) {
        int n = arr.length; // size of the array
        //sort the given intervals:
        Arrays.sort(arr, new Comparator<int[]>() {
            public int compare(int[] a, int[] b) {
                return a[0] - b[0];
            }
        });

        List<List<Integer>> ans = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            // if the current interval does not
            // lie in the last interval:
            if (ans.isEmpty() || arr[i][0] > ans.get(ans.size() - 1).get(1)) {
                ans.add(Arrays.asList(arr[i][0], arr[i][1]));
            }
            // if the current interval
            // lies in the last interval:
            else {
                ans.get(ans.size() - 1).set(1,
                                            Math.max(ans.get(ans.size() - 1).get(1), arr[i][1]));
            }
        }
        return ans;
    }
    public static void main(String[] args) {
        int[][] intervals = {
                { 1, 3 },
                { 2, 6 },
                { 8, 9 },
                { 9, 11 },
                { 8, 10 },
                { 2, 4 },
                { 15, 18 },
                { 16, 17 }
        };
        List<List<Integer>> mergedIntervals = mergeIntervalsBrute(intervals);

        System.out.println("Merged Intervals (Brute Force):");
        for (List<Integer> interval : mergedIntervals) {
            System.out.println(interval);
        }

        mergedIntervals = mergeIntervalsOptimal(intervals);

        System.out.println("Merged Intervals (Optimal):");
        for (List<Integer> interval : mergedIntervals) {
            System.out.println(interval);
        }
    }
}