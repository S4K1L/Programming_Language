"""
try:
    text = [30, 0, 50]
    result = text[4] / text[2]
    print(result)
    print("Done")
except ZeroDivisionError:
    print("Zero Division Error")
except IndexError:
    print("Index Error")
finally:
    print("Successful")

try:
    num1 = int(input("Enter number 1 : "))
    num2 = int(input("Enter number 2 : "))

    result = num1 / num2
    print(result)
    print("Done")
except (ZeroDivisionError,IndexError,ValueError):
    print("Error Found")
finally:
    print("Thanks!")
"""

def voter (age):
        if age < 18:
            raise ValueError("Not Allowed to Vote")
        return "You Can Vote"

try:
    print(voter(17))
except ValueError as val:
    print(val)
finally:
    print("Thanks!")

