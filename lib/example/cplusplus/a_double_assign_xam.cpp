// This file can be generated in the lib/xam directory using the command:
// m4 -D Language_=cplusplus a_double/assign_xam.xam
// -----------------------------------------------------------------------------
//         cppad_py: A C++ Object Library and Python Interface to Cppad
//          Copyright (C) 2017-18 Bradley M. Bell (bradbell@seanet.com)
//              This program is distributed under the terms of the
//              GNU General Public License version 3.0 or later see
//                    https://www.gnu.org/licenses/gpl-3.0.txt
// -----------------------------------------------------------------------------
// a_double assignment
// -----------------------------------------------------------------------------
// BEGIN SOURCE
# include <cstdio>
# include <string>
# include <cppad/py/cppad_py.hpp>

bool a_double_assign_xam(void) {
	using cppad_py::a_double;
	using cppad_py::vec_bool;
	using cppad_py::vec_int;
	using cppad_py::vec_double;
	using cppad_py::vec_a_double;
	using cppad_py::a_fun;
	using cppad_py::sparse_rc;
	using cppad_py::sparse_rcv;
	using cppad_py::sparse_jac_work;
	using cppad_py::sparse_hes_work;
	using std::string;
	//
	// initialize return variable
	bool ok = true;
	//------------------------------------------------------------------------
	a_double x = cppad_py::a_double(2.0);
	//
	x = cppad_py::a_double(3.0);
	ok = ok && x.value() == 3.0;
	//
	x += cppad_py::a_double(2.0);
	ok = ok && x.value() == 5.0;
	//
	x -= cppad_py::a_double(1.0);
	ok = ok && x.value() == 4.0;
	//
	x *= cppad_py::a_double(3.0);
	ok = ok && x.value() == 12.0;
	//
	x /= cppad_py::a_double(4.0);
	ok = ok && x.value() == 3.0;
	//
	return( ok );
}
// END SOURCE
//
/*
$begin a_double_assign_xam.cpp$$
$spell
	cplusplus
	cppad
	py
	xam
	Jacobian
	Jacobians
$$
$section C++: a_double Assignment Operators: Example and Test$$
$srcfile|build/lib/example/cplusplus/a_double_assign_xam.cpp|0|// BEGIN SOURCE|// END SOURCE|$$
$end
*/
//
