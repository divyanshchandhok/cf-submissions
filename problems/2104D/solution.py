primes = [0]
 
def SieveOfEratosthenes():
     
    n = 5800100
     
    prime = [True for i in range(n + 1)] 
     
    p = 2
    while (p * p <= n): 
           
        if (prime[p] == True): 
               
            for i in range(p * p, n + 1, p): 
                prime[i] = False
                 
        p += 1
       
    for p in range(2, n + 1): 
        if prime[p]: 
            primes.append(p + primes[-1]) 
   
SieveOfEratosthenes()

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    a.sort(reverse=True)
    prefs = [a[0]]

    for i in range(1, n):
        prefs.append(a[i] + prefs[i-1])
    
    for i in range(0, n+1):
        if prefs[n-1-i] >= primes[n-i]:
            print(i)
            break


