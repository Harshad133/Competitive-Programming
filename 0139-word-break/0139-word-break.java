class Solution {
    public boolean wordBreak(String s, List<String> wordDict) {
        // put all words into a hashset
        Set<String> set = new HashSet<>(wordDict);
        return wb(s, set);
    }
    boolean wb(String s, Set<String> dict) {
        boolean[] f = new boolean[s.length() + 1];
        f[0] = true;
        for(int i=1; i <= s.length(); i++){
            for(int j=0; j < i; j++){
                if(f[j] && dict.contains(s.substring(j, i))){
                    f[i] = true;
                    break;
                }
            }
        }
        
        return f[s.length()];
    }
    
}