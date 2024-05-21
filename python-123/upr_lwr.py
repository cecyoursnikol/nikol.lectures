def convert(string):
    # Count the number of uppercase and lowercase letters
    upper_count = sum(1 for char in string if char.isupper())
    lower_count = sum(1 for char in string if char.islower())
    
    # Check if the string should be converted to uppercase or lowercase
    if upper_count > lower_count:
        return string.upper()
    else:
        return string.lower()

# Test the function
test_string = input("Enter a string: ")
print("Converted string:", convert(test_string))
