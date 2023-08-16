n = int(input("Enter n : "))
"""
1+2+3+4+5+...n
sum = 0
for x in range(1,n+1,1):
    sum = sum+x
print(sum)

2+4+6+8......n
sum = 0
for x in range(2,n+1,2):
    sum = sum + x
print(sum)

1^2+2^2+3^2.....n^2
sum = 0
for x in range(2,n+1,1):
    sum = sum + x*x
print(sum)
"""

sum = 0
for x in range(1,n+1,1):
    sum = sum + 1/x
print(sum)