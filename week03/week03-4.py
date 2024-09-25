#在稻草堆 haystack 裡 找到一隻針 needle
#只要一行 a.find(b) 在字串a 裡照到字串b
class Solution:
    def strStr(self, a: str, b: str) -> int:
        return a.find(b)
        