class Solution {
    public int[] twoSum(int[] nums, int target) {
        int res[] = new int[2];
        int n = nums.length;
        HashMap<Integer,Integer> numIndexMap = new HashMap<>();
        for(int i=0;i<n;i++){
            int x = nums[i];
            int y = target-nums[i];//9-7 2
            if(numIndexMap.containsKey(y)){
                res[0] = i;
                res[1] = numIndexMap.get(y);
                return res;
            }
            numIndexMap.put(nums[i], i);
        }
        return res;        
    }
}
