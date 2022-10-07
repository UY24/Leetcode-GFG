// ques link : https://leetcode.com/problems/max-consecutive-ones/
// TC O(n)
class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        
        
        int curMax = 0;
        int max = 0;
        
        
        for(int a : nums){
            
            if(a == 1) curMax++;
            
            else {
                
                max = Math.max(curMax , max);
                curMax = 0;
            }
        }
        
        max = Math.max(max , curMax);
        
        
        return max;
    }
}