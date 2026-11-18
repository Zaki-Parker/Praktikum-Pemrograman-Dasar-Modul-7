kata = input()
kata_lower = kata.lower()

if kata_lower == kata_lower[::-1]:
    print("Kata '" + kata + "' adalah palindrom")
else:
    print("Kata '" + kata + "' bukan palindrom")
