print("Hello, World!")


string1 = "Linux"
string2 = "Hint"
joined_string = string1 + string2
print(joined_string)


# Use of String Formatting
float1 = 563.78453
print("{:5.2f}".format(float1))

# Use of String Interpolation
float2 = 563.78453
print("%5.2f" % float2)

import math
# Assign values to x and n
x = 4
n = 3

# Method 1
power = x ** n
print("%d to the power %d is %d" % (x,n,power))

# Method 2

power = pow(x,n)
print("%d to the power %d is %d" % (x,n,power))

# Method 3
power = math.pow(2,6.5)
print("%d to the power %d is %5.2f" % (x,n,power))

# Assign a numeric value
number = 70

# Check the is more than 70 or not
if (number >= 70):
    print("You have passed")
else:
    print("You have not passed")