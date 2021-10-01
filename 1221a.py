import math

def Log2(x): 
    if x == 0: 
        return 0; 
  
    return (math.log10(x) / 
            math.log10(2)); 

for _ in range(int(input())):
	l=int(input())
	li=list(map(int,input().split()))
	li.sort(reverse=True)
	aa=Log2(li.count(1))
	print(aa)
	if(aa==int(aa)):	
		while True:
			# print(li)
			if (2048 in li):
				print("YES")
				break
			elif(len(li)==1):
				print("NO")
				break
			else:
				li[0]=li.pop(0)+li[0]
	else:
		print("NO")