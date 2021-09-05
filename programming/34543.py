import math

a = [1,2,5,13,7,4]
p = a.sort()
print(a)
print("Smallest number is a",a[0],"and largest number is")
e=0
for i in range(1,6):
    if a[i]>e:
        e = a[i]
        print("largest number is ",e)
