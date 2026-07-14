#Python Weight Converter

weight = float(input("Enter your weight : "))
unit = input("Kilograms or Pounds (K/l) : ")

if unit  == "K":
    weight *= 2.035
    unit = "Lbs."
    print(f"Your weight is {round(weight,1)} {unit}")
elif unit == "L":
    weight /= 2.035
    unit = "Kgs."
    print(f"Your weight is {round(weight,1)} {unit}")
else:
    print(f"{unit} is not a valid unit")


