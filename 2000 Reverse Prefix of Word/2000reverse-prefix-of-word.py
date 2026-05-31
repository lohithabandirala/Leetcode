class Solution(object):
    def reversePrefix(self, word, ch):
        j=0
        for i in word:
            if i==ch:
                break
            else:
                j+=1
        if j==len(word):
            return word
        return word[:j+1][::-1] + word[j+1:]
        