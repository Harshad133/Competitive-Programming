
class Solution {
public:
template <class Z>
class Array
{
private:
    struct Block
    {
        int top;
        Z *a;
    };
    Block *p;

public:
    Array(int size)
    {
        p = (Block *)malloc(sizeof(Block));
        p->top = -1;
        p->a = (Z *)malloc(sizeof(Z) * size);
    }
    void push(Z v)
    {
        p->top++;
        p->a[p->top] = v;
    }
    bool find(Z v)
    {
        int i;
        for (i = 0; i <= p->top; i++)
        {
            if (p->a[i] == v)
                return true;
        }
        return false;
    }
    
    void clear()
    {
        p->top = -1;
    }

    int max()
    {
        int i, max = p->a[0];
        for (i = 0; i <= p->top; i++)
        {
            if (max < p->a[i])
                max = p->a[i];
        }
        return max;
    }
};

int lengthOfLongestSubstring(string s)
{
    int j = 0;
    int l = s.size();
    if (l == 0)
        return 0;

    Array<char> A(l);
    int count = 0;
    Array<int> lenth(l);

    A.push(s[0]);
    count++;

    for (int i = 1; i < l; i++)
    {
        int b = A.find(s[i]);
        if (b)
        {
            lenth.push(count);
            count = 0;
            while( s[j] != s[i])
                j++;
            i = j;
            j++;
            A.clear();
            
        }
        else
        {
            A.push(s[i]);
            count++;
        }
    }
    lenth.push(count);
    return lenth.max();
}
}; 