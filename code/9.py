for a in range (1, 1001):
	for b in range (1, 1001):
		for c in range (1, 1001):
			ispyt = False
			if a*a+b*b == c*c:
				ispyt = True
			if a+b+c == 1000 and ispyt:
				print(a,b,c,"\n")
				prod = a*b*c
			c += 1
		b += 1
	a += 1

print(prod)
