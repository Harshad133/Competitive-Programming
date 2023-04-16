class Solution {
public:
    int addMinimum(string word) {
        int count = 0;
        
        for(int i = 0 ; i <word.size() ; i++){
            if(word[i] == 'b'){
                if(i-1 < 0 || word[i-1] != 'a'){
                    word.insert(i,"a");
                    count++;
                    i++;
                }
            }
            
            if(word[i] == 'c'){
                if(i-1 < 0 || word[i-1] != 'b'){
                    word.insert(i,"b");
                    count++;
                    i--;
                    continue;
                }
                continue;
            }
            
            if(i+1 >= word.size() || word[i+1] != word[i]+1){
                string temp;
                temp.push_back(word[i]+1);
                word.insert(i+1,temp);
                count++;
            }
            cout<<word;
        }
        
        
        return count;
    }
};