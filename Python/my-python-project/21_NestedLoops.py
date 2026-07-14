#Nested loop - A loop within another loop (outer,inner)
#               outer loop:
#                   inner loop:


# for x in range(3):
#     for i in range(1,10):
#         print(i, end="")
#     print()


rows = int(input("Enter the number of rows : "))
columns = int(input("Enter the number of columns : "))
symbol = input("Enter a symbol of your choice :")


for x in range(rows):
    for y in range(columns):
        print(symbol, end="")
    print()
