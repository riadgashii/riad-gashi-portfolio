# Logical Operators - Evaluate multiple conditions (or, and, not)
#                     or - at least one condition must be true
#                     and - both conditions must be true
#                     not - inverts the condition (not False, not True)

# temp = 36
# is_raining = False

# if temp > 35 or temp < 0 or is_raining == True:
#     print("The outdoor event is cancelled")
# else:
#     print("The outdoor event is still scheduled")


temperature = 20
is_sunny = False

if temperature >= 28 and is_sunny:
    print("It is hot outside.")
    print("It is sunny")
elif temperature <= 0  and is_sunny:
    print("It is cold outside.")
    print("It is sunny")
elif 0 < temperature < 28 and is_sunny:
    print("It is warm outside")
    print("It is sunny")
elif temperature >= 28 and not is_sunny:
    print("It is hot outside.")
    print("It is cloudy")
elif temperature <= 0 and not is_sunny:
    print("It is cold outside")
    print("It is cloudy")
elif 0 < temperature < 28 and not is_sunny:
    print("It is warm outside")
    print("It is cloudy") 
