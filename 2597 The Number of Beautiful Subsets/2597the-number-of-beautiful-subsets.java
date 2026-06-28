class Solution {
    public int beautifulSubsets(int[] nums, int k) {
        ArrayList<Integer> arr = new ArrayList<>();
        return beautiful(nums, k , 0,arr);
    }

    int beautiful(int[] nums, int k , int index,ArrayList<Integer> arr){
        if(index == nums.length){
            return 0;
        }

        int take = 0;
        if(takeable(arr,nums[index], k)){
            arr.add(nums[index]);
            take = 1 + beautiful(nums, k, index+1,arr);
            arr.remove(arr.size()-1);
        }

        int notTake = 0 + beautiful(nums, k, index+1,arr);

        return take + notTake;
        
    }

    boolean takeable(ArrayList<Integer> arr, int num, int k){
        for(int ele : arr){
            if(Math.abs(num - ele) == k) return false;
        }

        return true;
    }
}