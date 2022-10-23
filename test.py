temp = ["1111110", "0110000", "1101101", "1111001", "0110011", "1011011", "1011111", "1110000", "1111111", "1111011"]
ans = ""
for i in range(0, 7):
    ans += "Bit {}: \n".format(i)
    for j in range(0, len(temp)):
        if temp[j][i] == "1":
            ans += (str(bin(j)))[2:].zfill(4) + "\n"
    ans += "\n"
print(ans)
# merge each element in list temp into a string
a = [hex(int(i[::-1], base=2))[2:].zfill(2) for i in temp]
print(" ".join(a))
