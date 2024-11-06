class Solution:
    def rearrangeArray(self, nums: List[int]) -> List[int]:
        pos=[]
        neg=[]
        result =[]
        for i in range(len(nums)):
            if nums[i]>=0:
                pos.append(nums[i])
            else :
                neg.append(nums[i])
        for p,n in zip(pos,neg):
            result.extend([p,n])
        return result
        