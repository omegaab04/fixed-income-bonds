#include <math.h>

// Price of a zero-coupon bond: PV = FV / (1 + r)^t
double price_zero_coupon(double face_value, double rate, double years) {
    return face_value / pow(1.0 + rate, years);
}

// Price of a coupon bond: PV = Σ (C / (1 + r)^t) + FV / (1 + r)^T
double price_coupon_bond(double face_value, double coupon, double rate, int periods) {
    double pv = 0.0;
    for (int t = 1; t <= periods; t++) {
        pv += coupon / pow(1.0 + rate, t);
    }
    pv += face_value / pow(1.0 + rate, periods);
    return pv;
}