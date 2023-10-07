class Solution:
    def twoSum(self, numbers: List[int], desireResult: int) -> List[int]:
        ListOfNums = {}
        for i, n in enumerate(numbers):
            complement = desireResult - n
            if complement in ListOfNums:
                return [ListOfNums[complement], i]
            ListOfNums[n] = i
        return []