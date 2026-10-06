int maxProfit(int* prices, int pricesSize) {
    int min_price = INT_MAX;
    int max_profit = 0;
    
    for (int i = 0; i < pricesSize; i++) {
        // If we find a new historical low, update the min_price
        if (prices[i] < min_price) {
            min_price = prices[i];
        } 
        // Otherwise, calculate if selling today yields a new max profit
        else if (prices[i] - min_price > max_profit) {
            max_profit = prices[i] - min_price;
        }
    }
    
    return max_profit;
}