#include <bits/stdc++.h>
#include <iostream>

using namespace  std;

/* Add the required Helper Function */

void maxprofit(vector<int> price, int n)
{
    int first_buy = INT_MIN;
    int first_sell = 0;
    int second_buy = INT_MIN;
    int second_sell = 0;
    for(int i=0; i < n; i++)
    {
        first_buy = max(first_buy,-price[i]);
        first_sell = max(first_sell,first_buy+price[i]);
        second_buy = max(second_buy,first_sell-price[i]);
        second_sell = max(second_sell,second_buy+price[i]);

    }
    cout<<second_sell<<endl;

}

int main(){
    vector<int> prices_month1 = {3,3,5,0,0,3,1,4};
    /* Answer : 6 */

    vector<int> prices_month2 = {1,2,3,4,5};
    /* Answer : 4 */

    vector<int> prices_month3 = {7,6,4,3,1};
    /* Answer : 0 */
    vector<int> price=prices_month1;
    int n=price.size();
    maxprofit(price, n);

    return 0;
}

