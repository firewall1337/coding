x=list(map(int ,input().split()))
def avg(x):
    p=sum(x)
    o=len(x)
    d=p/o
    f="{:.2f}".format(d);
    return f

print(avg(x))
