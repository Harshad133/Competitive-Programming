class Solution(object):
    def countEven(self, num):
        """
        :type num: int
        :rtype: int
        """
        count = 0
        for i in range(1,num+1):
            temp = i
            sum = 0
            while temp != 0:
                sum += temp % 10
                temp = temp / 10

            if sum % 2 == 0:
                count+=1

        return count
