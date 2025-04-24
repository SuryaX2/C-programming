public class Buy_and_Sell_Stock {
    /**
     * Dynamic Programming - Buy and Sell Stock
     * 1. Find the minimum price in the array.
     * 2. Find the maximum profit by subtracting the minimum price from the current price.
     * 3. Update the minimum price if the current price is less than the minimum price.
     * 4. Return the maximum profit.
     * 
     * Time Complexity: O(n)
     * Space Complexity: O(1)
     */
    public static int buyAndSellStock(int[] a) {
        int min = Integer.MAX_VALUE, profit = 0;
        for (int i = 1; i < a.length; i++) {
            profit = Math.max(profit, a[i] - min);
            min = Math.min(min, a[i]);
        }
        return profit;
    }

    public static void main(String[] args) {
        int[] a = { 7, 1, 5, 3, 6, 4 };
        System.out.println("Buy and Sell Stock: " + buyAndSellStock(a));
    }
}
