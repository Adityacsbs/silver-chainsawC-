database =[
    ['adityaraj','raviraj','niraj'],
    ['bhopal','dewas','delhi'],
    [20,22,25]
]

name =database[0]
name_1= len(database[0])
address = database[1]
age = database[2]
input_1 = str(input("enter for information right keyword or just pass :-"))

if input_1 =='f' or input_1 =='name':
    for i in range(name_1):
         print(name[i],end=' ')
elif input_1 == 'a' or input_1=='address':
    print(address)
elif input_1 == 'age':
    print(age)
else:
    print('you are wrong')   