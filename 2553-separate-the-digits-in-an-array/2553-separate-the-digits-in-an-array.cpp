class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        // vector<int> res;
        // stack<int> s;

        // for(int i = nums.size()-1 ; i >= 0 ; i--){
        //     int temp = nums[i];
        //     while(temp != 0){
        //         s.push(temp%10);
        //         temp = temp / 10;
        //     }
        // }

        // while(!s.empty()){
        //     res.push_back(s.top());
        //     s.pop();
        // }

        // return res;

        vector<int> answer;
		for(auto v:nums){
			string s=to_string(v);
			for(auto ch:s){
				answer.push_back(ch-'0');
			}
		}
		return answer;
    }
};