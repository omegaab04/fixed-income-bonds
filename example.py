import bond_pricing

# Zero-coupon bond: $100 face value, 5% rate, 10 years
z = bond_pricing.price_zero(100, 0.05, 10)
print(f"Zero-coupon bond price: {z:.2f}")

# Coupon bond: $100 face value, $5 annual coupon, 5% rate, 10 years
c = bond_pricing.price_coupon(100, 5, 0.05, 10)
print(f"Coupon bond price: {c:.2f}")