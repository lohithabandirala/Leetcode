class Solution:
    def maximumOddBinaryNumber(self, s: str) -> str:      
            ones_count = s.count('1')
            zero_count = len(s)-ones_count
     
    
            return '1'*(ones_count-1)+ '0' * (zero_count) + '1';