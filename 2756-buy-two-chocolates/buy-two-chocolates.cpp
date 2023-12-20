class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int minp=INT_MAX;
        int secMin=INT_MAX;

        for(int &price:prices){
            if(price<minp){
                secMin=minp;
                minp=price;
            }
            else{
                  secMin= min(secMin, price);
            }
           
        }
         if(minp+secMin>money)
            return money;

            return money-(minp+secMin);
    }
};