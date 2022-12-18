def intList(d):
    """This function is to convert the marks that are stored as string into integers"""
    for i in range(len(d)):
        d[i]=int(d[i])

print("Please enter the names of students seperated by comma")
print("")
Names=input("Names of students:")
NamesList=Names.split(",")
print("")

print("Please enter the marks of students seperated by comma with respect to their position of names")
print("")
Marks=(input("Marks of students:"))
MarksList=Marks.split(",")
intList(MarksList)#converts the given input marks into integer type
cloneInitial=list(MarksList)
print("")

MandN=[]#MandN is a list that consists of both marks and name of a student as element
for i in range(len(MarksList)):
    MandN.append((MarksList[i],NamesList[i]))
Des1=sorted(MandN,reverse=True)#Des1  the makes the elements of list in descending order of iniial marks of students

print("Initial Ranks:")
print("")
k=[]#stores the names of students along with their initial ranks
for i in range(len(Des1)):
        print("Rank of",Des1[i][1],"=",i+1)
        k.append((Des1[i][1],i+1))
print("")
        
print("Please enter the new marks of students, seperated by comma with respect to their position of names given")
print("")
Update=input("Updated marks of students:")
print("")
UpdateList=Update.split(",")
intList(UpdateList)


NewMandN=[]#NewMandN is a list that consists of both new marks and name of a student as element
for i in range(len(UpdateList)):
    NewMandN.append((UpdateList[i],NamesList[i]))
Des2=sorted(NewMandN,reverse=True)#Des2  the makes the elements of list in descending order of iniial marks of students

print("Final Ranks:")
print("")
a=[]#stores the names of students along with their final ranks
for i in range(len(Des2)):
        print("Rank of",Des2[i][1],"=",i+1)
        a.append((Des2[i][1],i+1))
print("")


print("Jump of ranks")#jump=initial rank-final rank
print("")
for j in range(len(a)):
    for i in range(len(k)):
        if a[i][0]==k[j][0]:
            print("Jump of rank",a[i][0], "=",(k[i][1])-(a[j][1]))
