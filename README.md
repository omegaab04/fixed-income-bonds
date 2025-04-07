# Bond Pricing 

I did option pricing in C. Got bored and decided to do some bond pricing... in **C**. Supports zero-coupon and fixed-coupon bonds.

Oh yeah. And you can call the code in **Python**. 

---

Below is a sample script showing how to use the bond pricing module.

First, call
```
python
```

Or

```
python3
```

Then


```python
import bond_pricing

# Bond parameters
face_value = 1000       # Par value of the bond
rate = 0.05             # Annual interest rate (5%)
years = 10              # Time to maturity for zero-coupon bond
coupon = 50             # Annual coupon payment
periods = 10            # Total number of coupon periods (e.g., years)

# Price of a zero-coupon bond
zero_price = bond_pricing.price_zero(face_value, rate, years)
print(zero_price)

# Price of a bond that pays coupons
coupon_price = bond_pricing.price_coupon(face_value, coupon, rate, periods)
print(coupon_price)
```

Just change the parameters to your liking.

---

This project has an MIT License.
---

Email me at adam.bouchenaf23@gmail.com

