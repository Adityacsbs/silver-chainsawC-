input_string = input("Enter a string: ")

if input_string[-1].isdigit():
    appended_string = input_string + str(len(input_string))
    last_two_chars = appended_string[-2:]
    digit_value = int(last_two_chars) % 10
else:
    appended_string = input_string + str(len(input_string))
    last_char = appended_string[-1]
    digit_value = int(last_char) % 10

print(digit_value)
