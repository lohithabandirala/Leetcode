class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int n=students.size(),i=0,count=0;
        queue<int> q;
    for(int i=0;i<n;i++) q.push(students[i]);  for(;!q.empty();){  
      if( i<n && sandwiches[i] != q.front()){if(count == q.size()) break;
 q.push(q.front());

 q.pop();
  count++;

            }else if(i<n && sandwiches[i] == q.front()){
                count=0;
                q.pop();

                i++; 

            }else if(i == n) return 0;

        }

        return n-i;
    }
};