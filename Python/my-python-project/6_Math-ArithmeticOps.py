import math

friends = 10
# friends = friends + 2
# friends += 2
# friends = friends - 2
# friends -= 2
# friends = friends * 3
# friends *= 3
# friends = friends / 2
# friends /= 2
# friends = friends ** 2
# friends **= 2
remainder = friends % 3


print(remainder)


x = 9.9
y = 4
z = 5
result = round(x)
result = abs(y)
result = pow(4, 3)
result = max(x,y,z)
result = min (x,y,z)


result = math.floor(x)
print(result)
print(math.pi)
print(math.e)


#Exercise 1 - Calculate the circumference of the circle

radius = float(input("Enter the radius of the circle :  "))

circumference = 2 * math.pi * radius

print(f"The circumference is {round(circumference, 2)} cm")

#Exercise 2 - Calculate the area of the circle

radius = float(input("Enter the radius of the circle :  "))
area = math.pi * pow(radius, 2)

print(f"The area of the circle is {round(area, 2)} cm^2")

#Exercise 3 - Calculate the hypotenuse of a right angled triangle

a = float(input("Enter side a : "))
b = float(input("Enter side b : "))
c =  math.sqrt(pow(a, 2) + pow(b ,2))


print(f"Side c = {c}")

