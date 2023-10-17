input_str = input()
jari_jarii, tinggii = map(float, input_str.split())
volumez = 22/7 * jari_jarii ** 2 * tinggii
luas_permukaanz = 2 * 22/7 * jari_jarii * (jari_jarii + tinggii)
kelilingz = 2 * 22/7 * jari_jarii
print(f"Volume = {volumez:.2f}")
print(f"Luas = {luas_permukaanz:.2f}")
print(f"Keliling = {kelilingz:.2f}")
