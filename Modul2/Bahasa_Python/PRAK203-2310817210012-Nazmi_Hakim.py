input_str = input()
values = input_str.split()
len(values) == 6
a, b, i, j, x, y = map(float, values)
hasil = (a - b) * (i / j) - (x + y)
print(f'{hasil:.3f}')