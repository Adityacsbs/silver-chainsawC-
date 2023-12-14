print('enter your name and age first')

name = input("name here")
age = int(input("enter your age here :-"))

if age >18 and age <60:
    print("you are eligble ",name)
elif age<54 or age>44:
    print('muje nahi karni shadi')
elif age>65:
    print("mai kya karu maru ya nahi ")
else:
    print('sry you are not eligible',name)    