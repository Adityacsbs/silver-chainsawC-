l = [1,2,3,4,5,6,7,8,9,10,11,12,'yg']

a = len(l)#list ko length nikalne ke liye 
print(a)#printing number of elements in list
print(l[12])#12 postion pr jo element hai usko print krna

b = l[0:6]# 0 element se leke 6 tak ke sare elements ko print krvane wale
c = l[0::]# 0 se leke last sare element ko print krvane ke liye
print(b)
print(c)

for i in l[0:6]:#for loop for 0 to 6 
    print(i,end=" , ")


for i in l[0::]:#forloop for zero to final element
    print(i)

d = l[12::-1]# ulta print karvane ke liye 
print(d)

for i in l[7::-2]:
    print(i)
print('')
l2 = ['adi','singh','chouhan','hehehe']
print (len(l2))

print(l2[0::])
print(l2[-1][3])#kisi list ke element ke kisi letter ko print karane ke liye yeah use krte hai 
