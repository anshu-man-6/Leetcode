class Solution {
public:
     
    vector<int> sequentialDigits(int low, int high) {
       vector<int> result;
        string digits = "123456789";
        
        // Loop over all possible lengths of sequential digits (from 2 to 9)
        for (int length = 2; length <= 9; ++length) {
            // Slide a window of 'length' over the digits string
            for (int start = 0; start <= 9 - length; start++) {
                string sub = digits.substr(start, length);
                int num = stoi(sub);
                
                // If it fits in the range, add it to our results
                if (num >= low && num <= high) {
                    result.push_back(num);
                }
            }
        }
        
        return result;
    }
};