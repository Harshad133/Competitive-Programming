class Solution(object):
    def addToArrayForm(self, num, k):
        """
        :type num: List[int]
        :type k: int
        :rtype: List[int]
        """
        
        res = []

        i = len(num)-1
        sum = 0
        carry = 0

        while i >= 0 or k != 0:
            d1 = k%10 if k >= 0 else 0
            d2 = num[i] if i >= 0 else 0

            sum = d1+d2+carry

            res.append(sum%10)
            carry = sum / 10
            sum = 0
            i-=1
            k /= 10

        if carry != 0:
            res.append(carry)

        res.reverse()

        return res

