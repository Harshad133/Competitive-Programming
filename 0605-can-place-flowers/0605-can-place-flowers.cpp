class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        
      for(int i = 0 ; n != 0 && i < f.size() ; i++){
        if(f[i] == 0){
          bool t1 = i-1 < 0 ? true : f[i-1] == 0 ? true : false;
          bool t2 = i+1 >= f.size() ? true : f[i+1] == 0 ? true : false;
          
          f[i] = t1 && t2;
          
          if(t1 && t2)
              n--;
        }
      }
      
      if(n == 0)
          return true;
      return false;
    }
};
