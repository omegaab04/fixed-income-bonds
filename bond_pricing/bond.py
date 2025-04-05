import bond  

def price_zero(face_value: float, rate: float, years: float) -> float:
    """
    Price a zero-coupon bond.

    Parameters:
        face_value (float): The bond's face (par) value.
        rate (float): Annual interest rate (as a decimal).
        years (float): Time to maturity in years.

    Returns:
        float: Present value of the bond.
    """
    return bond.price_zero(face_value, rate, years)

def price_coupon(face_value: float, coupon: float, rate: float, periods: int) -> float:
    """
    Price a fixed-rate coupon bond.

    Parameters:
        face_value (float): The bond's face (par) value.
        coupon (float): The annual coupon payment.
        rate (float): Annual interest rate (as a decimal).
        periods (int): Number of periods until maturity.

    Returns:
        float: Present value of the bond.
    """
    return bond.price_coupon(face_value, coupon, rate, periods)
