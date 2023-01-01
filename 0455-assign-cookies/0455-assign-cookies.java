class Solution {
    public int findContentChildren(int[] g, int[] s) {
        Arrays.sort(g);
        Arrays.sort(s);

        int i = 0 , j = 0 ;
        int count = 0;
        while(i < g.length && j < s.length){
            while(j < s.length && g[i] > s[j])
                j++;
            if(j < s.length){
                i++;
                j++;
                count++;
            }
            else
                return count;
        }

        return count;
    }
}