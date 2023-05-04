def gradetomarks(x):
    if x == "O" or x=="o":
        x = 10
        return x
    elif x == "A+" or x=="a+":
        x = 9
        return x
    elif x == "A" or x=="a":
        x = 8
        return x
    elif x == "B+" or x=="b+":
        x = 7
        return x
    elif x == "B" or x=="b":
        x = 6
        return x
    elif x == "C" or x=="c":
        x = 5
        return x
    elif x == "D" or x=="d":
        x = 4
        return x
    else:
        x=0
        return x
print("*************GPA PREDICTOR****************")
print("Warning - please enter grades without adding space between the plus and alphabet.")
Cse320 = str(input("Please enter your grade in CSE320: "))
Cse320 = gradetomarks(Cse320)*3
cse101 = str(input("Please enter your grade in CSE101: "))
cse101 = gradetomarks(cse101)*3
Cse121 = str(input("Please enter your grade in CSE121: "))
Cse121 = gradetomarks(Cse121)*1
Mec135 = str(input("Please enter your grade in MECH135: "))
Mec135 = gradetomarks(Mec135)*3
phy110 = str(input("Please enter your grade in PHY110: "))
phy110 = gradetomarks(phy110)*3
int306 = str(input("Please enter your grade in INT306: "))
int306 = gradetomarks(int306)*4
mth401 = str(input("Please enter your grade in MTH401: "))
mth401 = gradetomarks(mth401)*3
pel125= str(input("Please enter your grade in PEL125: "))
pel125 = gradetomarks(pel125)*3

gpa = (cse101+Cse121+Cse320+Mec135+phy110+int306+mth401+pel125)/23

print("your calculated gpa is :",gpa)