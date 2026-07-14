# collections - single "variable" used to store multiple values 
# List - [] ordered and changeable. Duplicates OK
# Set - {} unordered and immutable, but Add/Remove OK. NO duplicates
# Tuple - () ordered and unchangeable. Duplicates OK. FASTER


#List

# fruits = ["Apple", "Banana", "Orange", "Coconut","Pineapple"] 
# print(sorted(fruits))
# print(fruits[0])
# for fruit in fruits:
#     print(fruit)
# print(len(fruits))
# print("Pineapple" in fruits)
# fruits[0] = "pineapple"
# for fruit in fruits:
#     print(fruit)
# fruits.append("pineapple")
# fruits.remove("Apple")
# fruits.insert(0 , "Pomegranate")
# fruits.sort()
# fruits.reverse()
# fruits.clear()
# print(fruits.index("Apple"))
# print(fruits.count("Banana"))
# print(fruits)


# Set

# fruits = {"apple", "orange", "banana", "coconut"}
# print(len(fruits))
# # print("apple" in fruits)
# fruits.pop()
# fruits.remove("apple")
# fruits.add("pineapple")

# print(fruits)

#Tuple

fruits = ("apple", "orange", "banana", "coconut", "coconut")
# print(len(fruits))
# print("pineapple" in fruits)
# print(fruits.index("apple"))
# print(fruits.count("coconut"))
for fruit in fruits:
    print(fruit)