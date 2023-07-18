def generate_series(a):
    numbers = []
    for num in range(1, a+1):
        if num % 2 != 0:
            numbers.append(num)
    return numbers

input_value = int(input("Enter the value of 'a': "))
output = generate_series(input_value)
print("Output:", output)
