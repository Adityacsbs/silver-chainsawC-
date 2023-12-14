list_1 = [1,2,3,4,5,6,7,8,9,10]
list_2 =list(range(1,11))#isme 1 se 10 tak sare elements cover ho jayge list mai

for i in list_1:
    m= i ** 2#square rooot nikalne ke liye isko use krte hai list ke sare elements
    print(m)

for i in list_2:
    n =i ** 2
    print(n)


squares = []# ek khali list banyi hai 

for value in range(1,11):#value ek varible hai or for loop ka range 1 se 10 tak hai
    s =value**5 #yaha pr har value(11 to 10) ka power 5 nikala jayega or s mai store krege 
    squares.append(value**2)#esse bhi likh sakte hai isko 
    squares.append(s)# s ki jo value ayegi usko list mai store karege
    print(s)


for i in squares: #for loop ki help se jo values list mai store kari hai usko print krege 
    print(i,end=" ")#i yaha pr har ek nayi value ko print krege jo list mai present hai 
    print(',',end=" ")

digits =[1,23,4,5,67,8,9,6,23]
ok =[]
print(min(digits))
print(max(digits))

ok.append(min(digits))
ok.append(max(digits))
print(ok)

my_list = [i for i in range(1,11)]
my_list_2 = [j**2 for j in range(1,12)]
print(my_list)
print(my_list_2)


players = ['aditya','raj','singh','chouhan','mera','naam','hai']

for player in players[:4]:
    print(player.title(),end=",")