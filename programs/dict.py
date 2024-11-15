#dictionary examples Definetely the syntax feels a lot easier 

thisdict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}
a=22
print (a)
print (a+1)
print (a/3)
print(thisdict)
print(thisdict["brand"])
thisdict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964,
  "year": 2020
}
print(thisdict)
print(len(thisdict))
print(type(thisdict))
thisdict = dict(name = "John", age = 36, country = "Norway")
print(thisdict)

#set examples 
set1 = {"a", "b" , "c"}
set2 = {1, 2, 3}

set3 = set1.union(set2)
print(set3)

# a loop

thisset = {"apple", "banana", "cherry"}

for x in thisset:
  print(x)

#tuple examples
thistuple = ("apple", "banana", "cherry", "apple", "cherry")
print(thistuple)

#list example, what is the difference between list and tuple and other ds
thislist = ["apple", "banana", "cherry"]
print(thislist)

#boolean and if statement example
a = 200
b = 33

if b > a:
  print("b is greater than a")
else:
  print("b is not greater than a")

  import numpy as np 

arr = np.array([1, 2, 3, 4, 5])

print(arr)

print(type(arr))