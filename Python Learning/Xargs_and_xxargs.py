#Xarguments
def add(*numbers):
    sum=0
    for i in numbers:
        sum=sum+i

    print(sum)



add(10,20)
add(30,40,50)
add(60,70,90,80)


#XXargs

def student(**details):
    #print(details["name"])
    print(details)

student(id=1091,name="Shakil")