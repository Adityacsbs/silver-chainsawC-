a = int(input("enter the number of students :- "))
b= a+1
#print(a)

list_name =[]
list_branch=[]
for i in range(1,a+1):
    print("roll number :-",i)
    name = str(input("enter the name of student :-"))
    branch = str(input("enter the branch name of student :-"))
    list_name.append(name)
    list_branch.append(branch)

for i in range(a):
    print(list_name[i],end=" ")
    print(list_branch[i])    
