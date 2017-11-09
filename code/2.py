import math
def isprime(i):
	test = 2
	counter = 2
	if i == 1 or i == 3 or i == 5 or i == 7:
		return 1
	while test < math.sqrt(i):
		if i%test != 0:
			counter += 1
		test += 1
	if test == counter:
		return 1
	return 0

val = 600851475143
limit = math.sqrt(val)
num = 2
biggest = 0
while num < limit:
	if val%num == 0:
		fac = val/num
		if isprime(fac) == 1 and fac > biggest:
			factor = fac
			biggest = factor
	if val%num == 0 and num > biggest and isprime(num) == 1:
		factor = num
		biggest = factor
	num += 1
print(biggest)
