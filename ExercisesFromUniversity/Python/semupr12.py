jacket_price = 120
helmet_price = 75
pair_shoes_price = 299.90
total_cost_for_all = 0

skiers_in_need = int(input("How many skiers want to buy something?: "))
for i in range(1, skiers_in_need + 1):
    print(f"Skier {i}:")
    print()
    jacket_count = int(input("How many jackets?: "))
    helmet_count = int(input("How many helmets?: "))
    pair_shoes_count = int(input("How many pair of shoes?: "))
    
    cost_for_skier = (jacket_count * jacket_price + helmet_count * helmet_price + pair_shoes_count * pair_shoes_price) + 0.2 *(jacket_count * jacket_price + helmet_count * helmet_price + pair_shoes_count * pair_shoes_price)
    total_cost_for_all += cost_for_skier
    print()

print(f"Total cost for all skiers: {total_cost_for_all:.2f} leva!")



