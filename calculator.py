res = 0
def ope():
	print('The result is: {}'.format(res)) #The function for calculator
n1 = float(input('First Number: ')) #Asks the first Number
n2 = float(input('Second Number: ')) #Asks the second Number
print("""Options
[1]Sum
[2]Subtract
[3]Multiply
[4]Division
[5]Int Division
	""") #Show options
es = int(input('Whats your choice?: ')) #Ask what is the choice
if es == 1:
	res = n1 + n2 #sum
	ope()
elif es == 2:
	res = n1 - n2 #subtract
	ope()
elif es == 3:
	res = n1 * n2 #multiply
	ope()
elif es == 4:
	res = n1 / n2 #Divides
	ope()
elif es == 5:
	res = n1 // n2 #Makes int division.
	ope()
print("Thanks for using calculator. Bye")
