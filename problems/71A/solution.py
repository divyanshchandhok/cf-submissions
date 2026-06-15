for _ in range(int(input())):
    word = input()
    length_word = len(word)
    if length_word > 10:
        abr = word[0] + str(length_word - 2) + word[-1]
        print(abr)
    
    else:
        print(word)