import random

randomnuber = int(random.random() * 100)
print("Random number : ",randomnuber)

for i in range(1,100):
    guessnumber = int (input("Enter Guess number 1-100 : "))

    if randomnuber==guessnumber:
        print("You Have Won")
        break
    else:
        if guessnumber>randomnuber:
            print("Enter Lower\n")
        elif guessnumber<randomnuber:
            print("Enter upper\n")
