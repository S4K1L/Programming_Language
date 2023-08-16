"""
subject = ["C","C++","Python","Java","Android"]

print(subject)
print("Python"  in subject)
print("Python" not in subject)
print(subject[0])
print(subject[-1])
print(subject[4])
print(subject + ["Swift","Kotlin"])
print(subject * 2)

"""
#subject = ["C","C++","Python","Java","Android"]
#print(len(subject))
#subject.append("Shakil")
#print(subject)
#subject.insert(2,"OS")
#print(subject)
#subject.remove("Java")
#print(subject)
#subject.sort()
subject = [20,10,4,555,4,4]
#subject.reverse()
#subject.pop()
#subject2 = subject.copy()
#subject.clear()
#print(subject2)
#print(subject)
#pos = subject.index(555)
pos = subject.count(4)
print(pos)