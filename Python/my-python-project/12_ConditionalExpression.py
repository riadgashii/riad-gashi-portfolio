#Conditional Expression - A one-line shortcut for the if-else statement (ternary operator)
#                       Print or assign one of two values based on a condition 
#                        X if condition else Y

num = 5
a = 6
b = 7
age = 17
temperature = 20
user_role = "admin"


print("Positive" if num > 0 else "Negative")
print("Even" if num % 2 == 0 else "Odd")
max_num = a if a > b else b
min_num = a if a < b else b
status = "Adult" if age >=18 else "Child"
weather = "Hot" if temperature > 20 else "Cold"
access_level = "Full Access" if user_role == "admin" else "Limited Access"


print(max_num)
print(min_num)
print(status)
print(weather)
print(access_level)

