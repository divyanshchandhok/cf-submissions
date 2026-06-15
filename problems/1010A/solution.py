def r():
    return list(map(int, input().split()))
 
n, = r()
m, = r()
a = r()
b = r()
 
extendedarr = a+b
 
def fuelCalc(extarr, m):
    val1 = 1
    val2 = 1
 
 
    for i in extarr:
        if i == 1:
            return -1
        val1 *= i
        val2 *= (1-i)
 
    minfuel = m * (val1 - val2) / val2
 
    return minfuel
 
print(fuelCalc(extendedarr, m))
