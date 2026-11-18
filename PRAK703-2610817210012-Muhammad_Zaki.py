kalimat = input("Kalimat : ")

vokal = 0
konsonan = 0

for huruf in kalimat:
    if huruf.lower() in "aiueo":
        vokal += 1
    elif huruf != " " and huruf.isalpha():
        konsonan += 1

print("Jumlah Vokal :", vokal)
print("Jumlah Konsonan :", konsonan)
