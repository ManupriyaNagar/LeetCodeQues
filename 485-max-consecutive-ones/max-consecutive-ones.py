class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        maxc=0
        cc=0
        for i in nums:
            if i==1:
                cc+=1
                maxc=max(maxc,cc)
            else :
                cc=0
        return maxc
        
        