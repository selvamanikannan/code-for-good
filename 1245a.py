def printDivisors(n) : 
	arr=[]
	i = 2
	while i <= n : 
		if (n % i==0) : 
			arr.append(i)
		i = i + 1
	return arr

for _ in range(int(input())):
	a,b=map(int,input().split())
	m1=printDivisors(a)
	m2=printDivisors(b)
	f=0
	for x in m1:
		if x in m2:
			f=1
			break
	if(f==1):
		print("Infinite")
	else:
		print("Finite")
