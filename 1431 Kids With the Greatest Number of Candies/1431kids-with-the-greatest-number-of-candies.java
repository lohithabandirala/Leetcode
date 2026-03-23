class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
     int n = Arrays.stream(candies).max().orElseThrow();
        List<Boolean> res=new ArrayList<>();
        for(int i=0;i<candies.length;i++){
if(candies[i]+extraCandies>=n){
    res.add(true);
}
    else{
        res.add(false);
    }
}
        return res;
    }
}