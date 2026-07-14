#Variable - A container for a value (String, integer, float, boolean)
#           A variable behaves as if it was the value it contains


#strings
first_name = "Riad"
food = "Pizza"
email = "riadg174@gmail.com"

print(f"Hello {first_name}")
print(f"You like {food}")
print(f"Your email is : {email}")

#Integers
age = 18
quantity = 3
num_of_students = 30

print(f"You are {age} years old")
print(f"You are buying {quantity} items")
print(f"Your class has {num_of_students} students")

#Float

price = 10.99
gpa = 3.2
distance = 5.5


print(f"The price is ${price}")
print(f"Your GPA is : {gpa}")
print(f"You ran {distance}km")

#Boolean

is_student = True
for_sale = True
is_online = False

if is_online:
    print("You are online")
else:
    print("You are offline") 



if for_sale:
    print("That item is for sale")
else:
    print("That item is not available")



if is_student:
    print("You are a student")
else:
    print("You are NOT a student")


#Create a username, what year were you born, a number of your choice and check if user is an admin

username = "SkizzyDomain"
year = 2026
number = 23
is_admin = False

print(f"Your username is : {username}")
print(f"You were born in the year : {year}")
print(f"What number do you like the most? : {number}")

if is_admin:
    print("The user is an admin")
else:
    print("The user is not an admin")




