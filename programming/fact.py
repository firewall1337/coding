def f(n):
    if n==0:
        return 1
    return (n * f(n-1))

n=int(input("enter:"))
for i in range(n):
    print(n * (n-1))
print("\n")
print(f(n))
