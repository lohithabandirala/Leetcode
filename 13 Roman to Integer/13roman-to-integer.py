class Solution(object):

    def __init__(self):
        self.roman_values = {
            'I': 1,
            'V': 5,
            'X': 10,
            'L': 50,
            'C': 100,
            'D': 500,
            'M': 1000
        }
    def romanToInt(self, s):
        total = 0
        prev_value = 0

        for char in s:
            value = self.roman_values.get(char, 0)

            if value > prev_value:
                total += value - 2 * prev_value
            else:
                total += value

            prev_value = value

        return total

converter = Solution()
result = converter.romanToInt("XXVII")
print(result) 
