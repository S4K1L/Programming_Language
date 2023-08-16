student= {
    1091 : "Name : Shakil Mahmud\nId : 223071091\nBatch : 31st\nDepartment : CSE",
    1051 : "Name : Raisul Islam\nId : 223071051\nBatch : 31st\nDepartment : CSE",
    1085 : "Name : Shakirul Islam\nId : 223071085\nBatch : 31st\nDepartment : CSE",
    1068 : "Name : Nazmul Siddik\nId : 223071068\nBatch : 31st\nDepartment : CSE",
    1070 : "Name : Md Alamin\nId : 223071070\nBatch : 31st\nDepartment : CSE",
}

n=int(input("Enter id : "))
print("\n- Details of Student -")
print(student.get(n,"Not Valid id"))