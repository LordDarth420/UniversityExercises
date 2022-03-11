class Phone:
    def __init__(self, brand, model, price, amount):
        self.brand = brand
        self.model = model
        self.price = price
        self.amount = amount
    def print_phone(self):
        print(f"Brand = {self.brand}, Model = {self.model}, Price = {self.price}")
    
def save_phones_to_list(*args):
    phones_list = []
    for phone in args:
            for i in range(0, phone.amount):
                phones_list.append(phone)
    return phones_list

phone1 = Phone("Samsung", "Galaxy 5", 235, 1)
phone2 = Phone("Huawei", "P Smart Z", 543, 2)
phones_list = save_phones_to_list(phone1, phone2)

priceMax = phones_list[0].price
sum_prices = 0
for phone in phones_list:
    sum_prices += phone.price
    if phone.price > priceMax:
        priceMax = phone.price
    phone.print_phone()

print(f"Phone with max price: {priceMax}\nSum of all prices: {sum_prices}\nAverage of all prices: {round(sum_prices / len(phones_list),2)}")

brand = input("Enter brand to search the list for: ")
same_brand_phones_list = [phone for phone in phones_list if phone.brand == brand]
print(f"List of all {brand} phones: ")
for phone in same_brand_phones_list:
    phone.print_phone()




