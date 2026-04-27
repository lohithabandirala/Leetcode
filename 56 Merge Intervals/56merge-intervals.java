class Solution {
    public int[][] merge(int[][] intervals) {
      Arrays.sort(intervals, Comparator.comparingInt(a -> a[0]));
        List<int[]>ans=new ArrayList<>();
        int[] newinterval=intervals[0];
        ans.add(newinterval);
      for(int[] interval : intervals)  {
          if(interval[0]<=newinterval[1]){
              newinterval[1]=Math.max(interval[1],newinterval[1]);
          }
          else{
              newinterval=interval;
              ans.add(newinterval);
          }
      }  
        return ans.toArray(new int[ans.size()][]);
    }
}