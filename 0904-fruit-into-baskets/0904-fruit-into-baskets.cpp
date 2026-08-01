class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int l=0,r=0,len=0;
        unordered_map<int,int> basket;
        while(r<fruits.size()){
            basket[fruits[r]]++;
            if(basket.size()>2){
                basket[fruits[l]]--;
                if(basket[fruits[l]]==0) basket.erase(fruits[l]);
                l++;
            }
            len=max(len,r-l+1);
            r++;
        }
        return len;
    }
};