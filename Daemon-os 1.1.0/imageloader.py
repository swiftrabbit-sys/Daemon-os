import os
os.system("clear")

run = True
print("""

      image loader -- 1.0
      running on python

      """)
while run == True:
    os.system("clear && ls assets/images -al")
    image_input = input(" image > ")
    if ".txt" in image_input:
        os.system('lolcat assets/images/' + image_input)
    if "exit" in image_input:
        os.system("./main")
    pause = input("~")

