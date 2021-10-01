for _ in range(int(input())):
	st,inp,ex=map(int,input().split())
	if(st < inp and st+ex < inp):
		print(0)
		continue
	elif(st > inp and ex==0):
		print(1)
		continue
		
	eq=st+inp+ex
	eqq=0
	c=0
	if(eq%2!=0):
		c+=1
		eqq=eq//2
	else:
		eqq=eq//2
	tempint=eqq-inp	
	print(abs(c+tempint))