list_1 = []
list_2 = []

m = input("enter the number of elements present in list:-")

for i in range(1,5):
    c =input("enter the elements of list:-")
    list_1.append(c)

print(list_1)

for i in range(1,5):
    m = min(list_1)
    list_2.append(m)
    list_1.remove(m)

for i in list_2 :
     print(i,end=" ")

# isme agar koi same higher digit ka number daal rahe hai toh pura nahi dekh raha bs first 
#digit ko dekh kar arrange kar raha hai 