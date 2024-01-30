#!/usr/bin/python3
largest_palindrome = 0
for i in range(999, 99, -1):
    for j in range(i, 99, -1):
        product = i * j
        if str(product) == str(product)[::-1] and product > largest_palindrome:
            largest_palindrome = product

with open('102-result', 'w') as f:
    f.write(str(largest_palindrome))
