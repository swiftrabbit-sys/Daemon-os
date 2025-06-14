import os

os.system("clear")
os.system("lolcat kamazon_logo")

print("products available // only cash on delivery")

class products:
    products = ["[1]deluxe bar soap\n", 
                ", [2]war millitary ration 500 grams\n",
                ", [3]deluxe royalty bed",
                ", [3]airsoft desert eagle, fun kids toy pistol, 70 pellet ,"]
print(products.products)

choice = int(input("please type a number ~ "))


if choice > 0 and choice < 4:
    print("product will be delivered 8 days from:")
    os.system("date")
if choice == 0:
    os.system("./main")



