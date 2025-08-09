def palindrome(str):
    if str == str[::-1]:
        return True
    else: 
        return False
    
def palindrome2(s):
    return s == s[::-1]
    
print(palindrome2("bob"))