'''
fibonacii number:
f0 = 0
f1 = 1
fn = fn-1 + fn-2
'''

f0 = 0
f1 = 1
n = 20
for i in range(2, n+1):
	x = f0 + f1

	f0 = f1
	f1 = x
# f0 is final result
print("fibonacii for", n, "is", f1)

# sample to print chess board
print('----------------------')
print('| R | B | B | Q | K |')
print('----------------------')

# sample to print chess board
print('---------------------')
print('| ♖ | ♗ | ♘ | ♕ | ♔ |')
print('---------------------')
