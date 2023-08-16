"""
file = open("student.txt", "r+")
text = file.read()
print(text)
size = len(text)
print(size)
file.close()
"""
file = open("student.txt", "a")

file.write("\nHappy Programming")

file.close()
