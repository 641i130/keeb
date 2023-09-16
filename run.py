def generate_matrix_list(x, y):
    matrix_list = []
    for i in range(x):
        for j in range(y):
            matrix_dict = {
                "matrix": [i, j],
                "x": i,
                "y": j
            }
            matrix_list.append(matrix_dict)
    return matrix_list

x = 7  # Replace with your desired x value
y = 5  # Replace with your desired y value

result = generate_matrix_list(x, y)

for item in result:
    print(item,end="")
    print(",")

