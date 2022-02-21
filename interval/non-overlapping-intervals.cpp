bool comp(vector<int> &a,vector<int> &b) {
	return a[1]<b[1];
}
class Solution {
public:
	int eraseOverlapIntervals(vector<vector<int>>& intervals) {
		int ans=-1;      
		if(intervals.size()==0) return 0;       
		sort(intervals.begin(),intervals.end(),comp);    
		
        int end0=intervals[0][1];

	for(auto &i: intervals) {
		if(end0 >i[0]) ans++;
        else end0=i[1];
	}
		return ans; 
	}
};
