class Solution {
public:
    void colorPixel(vector<vector<int>>& image,int sr,int sc,int color,int val){
        if(sr >= 0 && sr < image.size() && sc >=0 && sc < image[0].size() && image[sr][sc] != color && image[sr][sc] == val){
            image[sr][sc] = color;
            colorPixel(image,sr+1,sc,color,val);
            colorPixel(image,sr-1,sc,color,val);
            colorPixel(image,sr,sc+1,color,val);
            colorPixel(image,sr,sc-1,color,val);
        }
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        colorPixel(image,sr,sc,color,image[sr][sc]);
        return image;
    }
};