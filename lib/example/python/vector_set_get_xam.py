# This file can be generated in the lib/xam directory using the command:
# m4 -D `Language_'=python vector/set_get_xam.xam
# -----------------------------------------------------------------------------
#         cppad_py: A C++ Object Library and Python Interface to Cppad
#          Copyright (C) 2017-18 Bradley M. Bell (bradbell@seanet.com)
#              This program is distributed under the terms of the
#              GNU General Public License version 3.0 or later see
#                    https://www.gnu.org/licenses/gpl-3.0.txt
# -----------------------------------------------------------------------------
# std::vector<double>
# -----------------------------------------------------------------------------
# BEGIN SOURCE
def vector_set_get_xam() :
	#
	# load the Cppad Py library
	import cppad_py
	#
	# initialize return variable
	ok = True
	# ---------------------------------------------------------------------
	n = 4
	bv = cppad_py.vec_bool(n)
	iv = cppad_py.vec_int(n)
	dv = cppad_py.vec_double(n)
	av = cppad_py.vec_a_double(n)
	#
	# setting elements
	for i in range( n  ) :
		bv[i] = i > n / 2
		iv[i] = 2 * i
		dv[i] = 3.0 * i
		av[i] = cppad_py.a_double(4.0 * i)
	#
	#
	for i in range( n  ) :
		be = bv[i]
		ok = ok and be == (i > n / 2)
		#
		ie = iv[i]
		ok = ok and ie == 2 * i
		#
		de = dv[i]
		ok = ok and de == 3.0 * i
		#
		ae = av[i]
		ok = ok and ae.value() == 4.0 * i
	#
	#
	return( ok )
#
# END SOURCE
#
# $begin vector_set_get_xam.py$$ $newlinech #$$
# $spell
#	py
#	perl
#	cppad
#	py
#	xam
#	Jacobian
#	Jacobians
# $$
# $section Python: Setting and Getting Vector Elements: Example and Test$$
# $srcfile|lib/example/python/vector_set_get_xam.py|0|# BEGIN SOURCE|# END SOURCE|$$
# $end
#
