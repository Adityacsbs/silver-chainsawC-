l =[]

if l:
    print(l)
else:
    print('there is nothing in list')

n = str(input('enter your name :-'))

if n:
    print('hello buddy welcome {}'.format(n))#or we can write in print(' xuz   ',n)
else:
    print('enter yout name again')


print(' -----------------------------------------------------------------------------')

list =['adityaraj','varun','parth','pathak','jain']

user_name =str(input('enter you user name,please:-'))

if user_name not in list:
    print('your username is not registered ')
    print('but, now i ave added your user name in our list ')
    print('so, welcome {}'.format(user_name))
    list.append(user_name)
    print(list)
    
else:
    print('you are in our list , welcome {}'.format(user_name))