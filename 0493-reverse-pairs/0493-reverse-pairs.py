class Solution(object):
    def reversePairs(self, nums):

        # l = []
        # count = 0

        # for num in reversed(nums):
        #     count += bisect_left(l, num / 2.0)
        #     insort(l, num)

        # return count

        def merged_sort(left,right):
            if left>=right: return 0

            mid=(left+right)//2
            count=merged_sort(left,mid)+merged_sort(mid+1,right)

            j=mid+1
            for i in range(left,mid+1):
                while j<=right and nums[i]>2*nums[j]:
                    j+=1
                count+=j-(mid+1)
            
            i,j=left,mid+1
            temp=[]
            while i<=mid and j<=right:
                if nums[i]<nums[j]:
                    temp.append(nums[i])
                    i+=1
                else: 
                    temp.append(nums[j])
                    j+=1
            while i<=mid:
                temp.append(nums[i])
                i+=1
            while j<=right:
                temp.append(nums[j])
                j+=1
            
            nums[left:right+1]=temp
            return count
        return merged_sort(0,len(nums)-1)
            

        """
        :type nums: List[int]
        :rtype: int
        """
        