pre = 0
for x in range(int(input())):
	da = int(input())
	if(da%2==0):
		print(int(da/2))
	else:
		print(pre)
		x = 0
		f = 0
		if (da < 0): 
			f = 1
			da = da * -1
		if(pre == 0):
			x= int(da/2)
			pre = 1
		else:
			x = int(da+1)/2
			pre = 0

		if(f == 1):
			print(int(x*-1))
		else:
			print(int(x))
