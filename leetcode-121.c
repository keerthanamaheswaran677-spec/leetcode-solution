int maxProfit(int* prices, int pricesSize) {
    int minimumPrice = prices[0];
    int maximumProfit = 0;
    for(int i=1;i<pricesSize;i++) {
        if(prices[i]<minimumPrice) {
            minimumPrice=prices[i];
        }
    if(prices[i]-minimumPrice>maximumProfit) {
            maximumProfit=prices[i]-minimumPrice;
        }
    }
    return maximumProfit;
} 
