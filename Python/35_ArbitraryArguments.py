# *args - allows you to pass multiple non-key arguments
# **kwargs - allows you to pass multiple keyword-arguments
#           *unpacking operator
#           1.positional,2.default,3.keyword,4.arbitrary

# def add(*args):
#     total = 0
#     for arg in args:
#         total += arg
#     return total    

# print(add(2,2))
# print(add(1))

# def display_name(*args):
#     for arg in args:
#         print(arg, end=" ")
    

# display_name("Riad","Gashi")

# def print_address(**kwargs):
#     for key,value in kwargs.items():
#         print(key,value)


# print_address(street = "Koqo Flloku", city = "Prishtine", state = "Kosovo", zip = "10000")


# def shipping_label(*args,**kwargs):
#     for arg in args:
#         print(arg, end =" ")
#     print()
#     for value in kwargs.values():
#         print(value, end = " ")

# shipping_label("Dr.", "SpongeBOB","Squarepants",
#                 street = "Koqo flloku",
#                 city = "Prishtine")

def shipping_label(*args,**kwargs):
    for arg in args:
        print(arg, end =" ")
    print()
    print(f"{kwargs.get('street')}")
    print(f"{kwargs.get('city')}")
  

shipping_label("Dr.", "SpongeBOB","Squarepants",
                street = "Koqo flloku",
                city = "Prishtine")