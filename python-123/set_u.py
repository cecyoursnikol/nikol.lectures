# Prompt the user to enter elements of the set
input_string = input("Enter elements of the set separated by spaces: ")

# Split the input string by spaces and convert it into a list
elements_list = input_string.split()

# Convert the list into a set
user_set = set(elements_list)

print("User-defined set:", user_set)