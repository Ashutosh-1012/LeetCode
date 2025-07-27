class Solution:
    def countHillValley(self, nums: List[int]) -> int:
        n=len(nums)
        l=[0]*n
        r=[0]*n
        prev=nums[0]
        for i in range(1,n-1):
            l[i]=prev
            if nums[i]!=prev and nums[i]!=nums[i+1]:
                prev=nums[i]
        prev=nums[-1]
        for i in range(n-2,0,-1):
            r[i]=prev
            if nums[i]!=prev and nums[i]!=nums[i-1]:
                prev=nums[i]
        c=0
        for i in range(1,n-1):
            if nums[i]!=nums[i-1]:
                if (l[i]>nums[i] and r[i]>nums[i]) or (l[i]<nums[i] and r[i]<nums[i]):
                    c+=1
        return c