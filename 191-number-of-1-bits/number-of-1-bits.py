class Solution:
    def hammingWeight(self, n: int) -> int:
        c=0
        str1=str(bin(n))
        for i in range(len(str1)):
            if str1[i]=='1':
                c+=1
        return c
        