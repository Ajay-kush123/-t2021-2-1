def count_multiples(numbers):
    multiples = {i: 0 for i in range(1, 10)} 
    
    for number in numbers:
        for i in range(1, 10):
            if number % i == 0:
                multiples[i] += 1
    
    return multiples

input_numbers = [1, 2, 8, 9, 12, 46, 76, 82, 15, 20, 30]
result = count_multiples(input_numbers)
print(result)
