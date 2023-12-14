n= str("AAditya raj singh chouhan") 
m = str('hsg.ss.ffe.we.wes.sdf')#esse bhi kar skte hai  
name2 = m.split('.')
name = n.split()
print(name)
print(name2)
name.append('ok')
name.insert(2,'aditya')
print(name)
#upper apan ne kisi string ko divide krke ek list mai convert
#kar diya hai or kuch elements bhi add kr diye hai 


l =[]

for i in range(1,6):
    print('roll number',i)
    name = str(input('enter your name of :-'))
    l.append(name)

print(l)

l2 =[]

name = str(input('enter your name :-'))

l2.append(name)
l2.insert(0,'jsh')
print(l2)
z,x,c,v,b = l #this is "Unpack a Collection" list ya tuple ka kara jataa hai 
print(z,x,c,v,b)
