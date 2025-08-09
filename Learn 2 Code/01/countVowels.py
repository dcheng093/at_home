def countVowels(s):
    res = 0
    for i in range(0, len(s)):
        if s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u':
            res += 1
    return res

def countVowels2(s):
    ref, count = ('a', 'e', 'i', 'o', 'u'), 0
    for c in s:
        if c in ref:
            count += 1
    return count
            

print(countVowels2("aeiou"))

