//Create setup.py
//py setup.py build_ext --inplace
//sudo apt-get update //or sudo  apt-get ¡Vfix-missing.
//sudo apt-get install python3-dev #for Linux
//sudo apt-get install python-dev #for Linux
#include <Python.h>

static PyObject* say_hello(PyObject* self, PyObject* args)
{
    const char* name;

    if (!PyArg_ParseTuple(args, "s", &name))
        return NULL;

    printf("Hello %s!\n", name);

    Py_RETURN_NONE;
}

static PyMethodDef HelloMethods[] =
{
     {"say_hello", say_hello, METH_VARARGS, "Greet somebody."},
     {NULL, NULL, 0, NULL}
};

static struct PyModuleDef hellomodule = {
    PyModuleDef_HEAD_INIT,
    "hello", /* module name */
    NULL, /* module documentation, may be NULL */
    -1,
    HelloMethods /* the methods array */
};

PyMODINIT_FUNC PyInit_hello(void)
{
    return PyModule_Create(&hellomodule);
}