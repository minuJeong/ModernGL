#include "UniformBlock.hpp"

PyObject * MGLUniformBlock_tp_new(PyTypeObject * type, PyObject * args, PyObject * kwargs) {
	MGLUniformBlock * self = (MGLUniformBlock *)type->tp_alloc(type, 0);

	if (self) {
	}

	return (PyObject *)self;
}

void MGLUniformBlock_tp_dealloc(MGLUniformBlock * self) {
	Py_TYPE(self)->tp_free((PyObject *)self);
}

int MGLUniformBlock_tp_init(MGLUniformBlock * self, PyObject * args, PyObject * kwargs) {
	return -1;
}

PyObject * MGLUniformBlock_tp_str(MGLUniformBlock * self) {
	return PyUnicode_FromFormat("<ModernGL.UniformBlock>");
}

PyMethodDef MGLUniformBlock_tp_methods[] = {
	{0},
};

PyGetSetDef MGLUniformBlock_tp_getseters[] = {
	{0},
};

const char * MGLUniformBlock_tp_doc = R"(
	UniformBlock
)";

PyTypeObject MGLUniformBlock_Type = {
	PyVarObject_HEAD_INIT(0, 0)
	"ModernGL.UniformBlock"         ,                       // tp_name
	sizeof(MGLUniformBlock),                                // tp_basicsize
	0,                                                      // tp_itemsize
	(destructor)MGLUniformBlock_tp_dealloc,                 // tp_dealloc
	0,                                                      // tp_print
	0,                                                      // tp_getattr
	0,                                                      // tp_setattr
	0,                                                      // tp_reserved
	(reprfunc)MGLUniformBlock_tp_str,                       // tp_repr
	0,                                                      // tp_as_number
	0,                                                      // tp_as_sequence
	0,                                                      // tp_as_mapping
	0,                                                      // tp_hash
	0,                                                      // tp_call
	(reprfunc)MGLUniformBlock_tp_str,                       // tp_str
	0,                                                      // tp_getattro
	0,                                                      // tp_setattro
	0,                                                      // tp_as_buffer
	Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,               // tp_flags
	MGLUniformBlock_tp_doc,                                 // tp_doc
	0,                                                      // tp_traverse
	0,                                                      // tp_clear
	0,                                                      // tp_richcompare
	0,                                                      // tp_weaklistoffset
	0,                                                      // tp_iter
	0,                                                      // tp_iternext
	MGLUniformBlock_tp_methods,                             // tp_methods
	0,                                                      // tp_members
	MGLUniformBlock_tp_getseters,                           // tp_getset
	&MGLProgramMember_Type,                                 // tp_base
	0,                                                      // tp_dict
	0,                                                      // tp_descr_get
	0,                                                      // tp_descr_set
	0,                                                      // tp_dictoffset
	(initproc)MGLUniformBlock_tp_init,                      // tp_init
	0,                                                      // tp_alloc
	MGLUniformBlock_tp_new,                                 // tp_new
};
