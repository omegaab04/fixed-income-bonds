#include <Python.h>
#include "bond.c"  

static PyObject* py_price_zero_coupon(PyObject* self, PyObject* args) {
    double fv, r, t;
    if (!PyArg_ParseTuple(args, "ddd", &fv, &r, &t)) return NULL;
    return Py_BuildValue("d", price_zero_coupon(fv, r, t));
}

static PyObject* py_price_coupon_bond(PyObject* self, PyObject* args) {
    double fv, c, r;
    int n;
    if (!PyArg_ParseTuple(args, "dddi", &fv, &c, &r, &n)) return NULL;
    return Py_BuildValue("d", price_coupon_bond(fv, c, r, n));
}

static PyMethodDef BondMethods[] = {
    {"price_zero", py_price_zero_coupon, METH_VARARGS, "Price a zero-coupon bond"},
    {"price_coupon", py_price_coupon_bond, METH_VARARGS, "Price a coupon bond"},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef bondmodule = {
    PyModuleDef_HEAD_INIT, "bond", "Fast Bond Pricing", -1, BondMethods
};

PyMODINIT_FUNC PyInit_bond(void) {
    return PyModule_Create(&bondmodule);
}