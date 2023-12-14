a = [1,2,34,4]+[1,2,3,45]
print(a)
print(['hello','adityaraj']*3)
print(str([1,2,3,4,5,6,7,8,9])+ '234')
b = list('adityarajsinghchouhan')#kisi bhi string ko list mai convert kar skte hai  
print(b)#we can convert any string into  a list

for i in b:
    print('-',end="")
    print(i,end=" ");

print('')

for i in [1,2,3]:
    print(i,end=" ")

rec =[i*2 for i in 'aditya']
print(rec,end=" ")

rec_1 = []
for i in 'aditya':
    rec_1.append(i*4)

print(rec_1)

u = list(map(abs,[1,-2,-234,34]))
print(u)

print(abs(-23))

l=[1]
print(l)
l[:0]=[2,3,4,5]
print(l)
l[:0] =[32,24,23]
print(l) 