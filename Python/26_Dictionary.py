#dictionary - a collection of {key:value} pairs
#               ordered and changeable. No duplicates

capitals = {"USA": "Washtington D.C.",
            "India": "New Delhi",
            "China":"Beijing",
            "Russia": "Moscow"}

# print(dir(capitals))
# print(help(capitals))

# print(capitals.get("Japan"))

# if capitals.get("India"):
#     print("That capital exists")
# else:
#     print("That capital doesn't exist")

# capitals.update({"Germany":"Berlin"})
# capitals.update({"USA":"Detroit"})

# capitals.pop("China")
# capitals.popitem()
# capitals.clear()
# keys = capitals.keys()

# for key in keys:
#     print(key)

# values = capitals.values()
# for value in values:
#     print(value)

items = capitals.items()
for key, value in items:
    print(f"{key} : {value}")