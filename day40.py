item_name = input("What item are you buying? ")
price = float(input("Enter the item price: $"))
quantity = int(input("How many are you buying? "))
discount = float(input("Enter discount amount (in dollars): $"))
total_cost = (price * quantity) - discount

print(f"\n🛒 RECEIPT FOR: {item_name.upper()}")
print(f"Total Amount Due: ${total_cost:.2f}")
