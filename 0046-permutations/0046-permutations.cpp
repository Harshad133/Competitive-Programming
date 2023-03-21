class Solution {
public:
  //SECOND METHOD WITH O(1) SPACE 
  
  void permutaion(int index , vector<int> nums, vector<vector<int>> &res){
    if(index == nums.size()-1){
      res.push_back(nums);
      return;
    }
    
    for(int i = index ; i < nums.size() ; i++){
      swap(nums[index],nums[i]);
      permutaion(index+1,nums,res);
      swap(nums[i],nums[index]);
    }
      
  }
  
  
  
//FIRST METHOD WITH O(N)  SPACE COMPLAXITY

//     void permution(vector<int> nums, vector<int> per , vector<vector<int>> &res , vector<bool> freq){
//         if(per.size() == nums.size()){
//             res.push_back(per);
//             return;
//         }

//         for(int i = 0 ; i < freq.size() ; i++){
//             if(freq[i] == false){
//                 freq[i] = true;
//                 per.push_back(nums[i]);
//                 permution(nums,per,res,freq);
//                 per.pop_back();
//                 freq[i] = false;
//             }
//         }
//     }

    vector<vector<int>> permute(vector<int>& nums) {
       vector<vector<int>> res;
        // vector<bool> freq(nums.size(),false);
       // permution(nums,{},res,freq);
      permutaion(0,nums,res);

       return res;
    }
};