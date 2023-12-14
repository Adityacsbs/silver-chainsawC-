list_1 =['adi','ravi','paro','ram','abhi']
print(list_1)
print(list_1[3],list_1[2])
a =list_1[1]
b = list_1[0]
c = list_1[3]
print (a,b,c)

a = a.title()#YEAH first letter ko capital krta hai 
print(a)
b = b.title()
print(b)

#last se access krne ke liye apne ko bracket mai minus ke sath positon likhna padega ulte 
#jab apne koi list di ho or last element nikalna ho toh iska use krte hai 
a = list_1[-1]
print(a)
b= list_1[-3]
b = b.title()
print(b)

print(len(list_1))# list mai kitne element hai uske liye 

#agar koi element ko add krna ho list mai toh apan iska use krege
list_1.append('chanchal')#yeah ek baar mai ek hi argument leta hai 
print(list_1)
#agar usko kahi beech mai lagan hai toh
list_1.insert(2,'naina')
print(list_1)

#if we want to clean up some element from list then we use this 
list_1.remove('chanchal')
print(list_1)

a = list_1.pop(2)#iska use bhi kisi ko hatene ke liye kiya jata hai  .........................
print(a)#second postion par yeah element tha par niche wale command ke baad hat gaya
print(list_1 )
