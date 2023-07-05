c=0
# 6 keys per row, 10 rows
print(f"\t\t\tlayout:[")
for x in range(0,10): 
    for y in range(0,7): 
        c+=1
        print(f'\t\t\t\t{{"matrix": [{x}, {y}], "x": {x}, "y": {y}}}, // ')
print("\t\t\t]")
print(f"{c} amount of keys!")
