# keyword arguments - an argument preceded by an identifier
#                       helps with readability
#                       order of arguments doesn't matter
#                       1. positional, 2. default, 3. keyword, 4. arbitrary


# def hello(greeting, title, first_name,last_name):
#     print(f"{greeting} {title}{first_name} {last_name}")

# hello("Hello", title = "Mr. ", first_name = "Spongebob", last_name =  "Squarepants")

# hello("Hello","Mr. ", "John","James")

# for x in range(1,10+1):
#     print(x, end=" ")


# print("1","2","3","4","5","6","7", sep = "-")

def get_phone(country,area,first,last):
    return f"{country}-{area}-{first}-{last}"

phone_num = get_phone(country = 1,area=123,first=456,last= 7889)

print(phone_num)

