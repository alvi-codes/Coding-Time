# def only_odd_digits(n):
# Check	that	the	given	positive	integer	n	contains	only	odd	digits	(1,	3,	5,	7	and	9)	when	it	is	written	
# out.	 Return	True	if	 this	is	 the	 case,	 and	False	 otherwise.	Note	 that	 this	 question	is	 not	 asking	
# whether	the	number	n	itself	is	odd	or	even.	You	therefore	will	have	to	look	at	every	digit	of	the	given	
# number	before	you	can	proclaim	that	the	number	contains	no	even	digits.
# To	extract	the	lowest	digit	of	a	positive	integer	n,	use	the	expression	n%10.	To	chop	off	the	lowest	
# digit	and	keep	the	rest	of	the	digits,	use	the	expression	n//10.	Or,	if	you	don’t	want	to	be	this	fancy,	
# you	can	first	convert	the	number	into	a	string	and	whack	it	from	there	with	string	operations

def only_odd_digits(n):
    temp = str(n)
    all_odd = True
    for i in range (len(temp)):
        if (int(temp[i]) % 2 == 0):
            all_odd = False
            break
    return all_odd

n = input("Enter the number to test: ")
print(only_odd_digits(n))