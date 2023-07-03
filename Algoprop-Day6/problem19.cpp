class Solution {
public:
    string getPermutation(int n, int k) {
        int fac = 1;
        vector<int> numbers;
        string ans = "";
        k = k-1;
        for(int i=1; i<n; i++){
            fac = fac * i;
            numbers.push_back(i);
        }
        numbers.push_back(n);

        while(true){
            ans = ans + to_string(numbers[k/fac]);
            numbers.erase(numbers.begin() + k/fac);
            if(numbers.size() == 0){
                break;
            }
            k = k % fac;
            fac = fac/numbers.size();
        }

        return ans;  
    }
};