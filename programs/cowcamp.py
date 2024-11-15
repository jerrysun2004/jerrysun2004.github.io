from decimal import *
getcontext().prec = 100
 
T, K = map(int, input().split())
T -= 1
 
prob = [Decimal(1)]
for _ in range(T):
	prob = [(x+y)/2 for x, y in zip([Decimal(0)]+prob, prob+[Decimal(0)])]
 
E = Decimal(T)/2
K -= 1
 
while K > 0:
	K -= 1
	next_E = 0
	for i in range(T+1):
		next_E += prob[i]*max(i,E)
	E = next_E

getcontext().prec = 20
print(E+1)