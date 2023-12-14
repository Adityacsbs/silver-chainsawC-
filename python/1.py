str = input("Enter a sentence:-")  # get input from user

words = str.split()  # split sentence into words
print(words)
#print(len(words[0]))
length = len(words)
#print(length)

for i in range(length):
    print(len(words[i]),end=" ")



#for word in words:
  #  print("The word '{}' has {} characters".format(word, len(word)))

