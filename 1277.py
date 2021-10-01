def Convert(lst): 
    it = iter(lst) 
    res_dct = dict(zip(it, it)) 
    return res_dct 
          
ll=['0','1','2','3','4','5','6','7','8','9']
for _ in range(int(input())):
	res=0
	for v in range(1,int(input())+1):
		mapu={}
		ct=0
		v=str(v)
		if(len(v)==1):
			res+=1
			continue;	
		else:
			for m in ll:
				print(m,v)
				if v.count(m)>1:
					print('in')
					ct+=1
				if ct>1:
					res+=1
					break
	print(res)