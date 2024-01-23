#include <object.h>
#include <listobject.h>
#include <Python.h>

/**
 * print_python_list_info - Print some basic info about Python lists
 * @p: PyObject
 *
 * Return: Nothing
 */
void print_python_list_info(PyObject *p)
{
	long int size = PyList_Size(p);
	int i;
	PyListObject *obj = (pyListObject *)p;

	printf("[*] size of the Python List = %li\n", size);
	printf("[*] Allocated = %li\n", obj->allocated);
	for (i = 0, i < size;, i++)
		printf("Element %i: %s\n", i, py_TYPE(obj->0b_item[i])->tp_name);
}
