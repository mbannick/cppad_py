# This file can be generated in the lib/xam directory using the command:
# m4 -D `Language_'=python a_fun/property_xam.xam
# -----------------------------------------------------------------------------
#         cppad_py: A C++ Object Library and Python Interface to Cppad
#          Copyright (C) 2017-18 Bradley M. Bell (bradbell@seanet.com)
#              This program is distributed under the terms of the
#              GNU General Public License version 3.0 or later see
#                    https://www.gnu.org/licenses/gpl-3.0.txt
# -----------------------------------------------------------------------------
# a_fun properties
# -----------------------------------------------------------------------------
# BEGIN SOURCE
def a_fun_property_xam() :
	#
	# load the Cppad Py library
	import cppad_py
	#
	# initialize return variable
	ok = True
	# ---------------------------------------------------------------------
	n_ind = 1 # number of independent variables
	n_dep = 2 # number of dependent variables
	n_var = 1 # phantom variable at address 0
	n_op = 1  # special operator at beginning
	#
	# dimension some vectors
	x = cppad_py.vec_double(n_ind)
	ay = cppad_py.vec_a_double(n_dep)
	#
	# independent variables
	x[0] = 1.0
	ax = cppad_py.independent(x)
	n_var = n_var + n_ind # one for each indpendent
	n_op = n_op + n_ind
	#
	# first dependent variable
	ay[0] = ax[0] + ax[0]
	n_var = n_var + 1 # one variable and operator
	n_op = n_op + 1
	#
	# second dependent variable
	ax0 = ax[0]
	ay[1] = ax0.sin()
	n_var = n_var + 2 # two varialbes, one operator
	n_op = n_op + 1
	#
	# define f(x) = y
	af = cppad_py.a_fun(ax, ay)
	n_op = n_op + 1 # speical operator at end
	#
	# check af properties
	ok = ok and af.size_ind() == n_ind
	ok = ok and af.size_dep() == n_dep
	ok = ok and af.size_var() == n_var
	ok = ok and af.size_op() == n_op
	#
	return( ok  )
#
# END SOURCE
# -----------------------------------------------------------------------------
# $begin a_fun_property_xam.py$$ $newlinech #$$
# $spell
#	py
#	perl
#	cppad
#	py
#	xam
#	Jacobian
#	Jacobians
# $$
# $section Python: a_fun Properties: Example and Test$$
# $srcfile|build/lib/example/python/a_fun_property_xam.py|0|# BEGIN SOURCE|# END SOURCE|$$
# $end
#