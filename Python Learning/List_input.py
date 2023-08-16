text = input("Enter number : ")
capitallatter=0
smalllatter=0
digit=0

for i in text:
    if i>='A' and i<='Z':
        capitallatter=capitallatter+1
    elif i>='a' and i<='z':
        smalllatter=smalllatter+1
    elif i>='0' and i<='9':
        digit=digit+1

print("Capital Latter : ",capitallatter)
print("\nSmall Latter : ",smalllatter)
print("\nDigit Latter : ",digit)