auto _=[](){

    ios::sync_with_stdio(false);

    cin.tie(nullptr);

    return 0;

}();

const static auto initialize = [] {

    std::ios::sync_with_stdio(false);

    std::cin.tie(nullptr);

    std::cout.tie(nullptr);

    return nullptr;

}();
class SmallestInfiniteSet {
    private:
    int small=1;
    set<int>st;
public:
    SmallestInfiniteSet() {
        
    }
    
    int popSmallest() {
        if(st.empty())
        {
            small++;
            return small-1;
        }
        int n=*st.begin();
        st.erase(st.begin());
        return n;
    }
    
    void addBack(int num) {
        if(num<small)
            st.insert(num);
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */