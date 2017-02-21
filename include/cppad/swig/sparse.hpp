# ifndef CPPAD_SWIG_SPARSE_HPP
# define CPPAD_SWIG_SPARSE_HPP
/* -----------------------------------------------------------------------------
           cppad_swig: A C++ Object Library and Swig Interface to Cppad
            Copyright (C) 2017-17 Bradley M. Bell (bradbell@seanet.com)
                This program is distributed under the terms of the
                GNU General Public License version 3.0 or later see
                      https://www.gnu.org/licenses/gpl-3.0.txt
----------------------------------------------------------------------------- */
# include <vector>
# include <cppad/utility/sparse_rcv.hpp>

# ifdef SWIG
#	define CPPAD_SWIG_LIB_PUBLIC
# else
#	include <cppad_swig_lib_export.h>
# endif

// declarations without definitions
namespace CppAD {
	template <class SizeVector> class sparse_rc;
}

namespace cppad_swig { // BEGIN_CPPAD_SWIG_NAMESPACE

// Swig class that acts the same as CppAD::sparse_rc< std::vector<size_t> >
class CPPAD_SWIG_LIB_PUBLIC sparse_rc
{	// private members are not in Swig interface
	private:
	// sparse_rc< std::vector<size_t> > representation
	CppAD::sparse_rc< std::vector<size_t> >* ptr_;
	// -----------------------------------------------------------------------
	// public members not in Swig interface (see %ignore ptr)
	public:
	const CppAD::sparse_rc< std::vector<size_t> >* ptr(void) const;
	// -----------------------------------------------------------------------
	// public members in Swig interface
	public:
	// constructor
	sparse_rc(void);
	// destructor
	~sparse_rc(void);
	// resize
	void resize(int nr, int nc, int nnz);
	// number of rows in matrix
	int nr(void) const;
	// number of columns in matrix
	int nc(void) const;
	// number of possibly non-zero elements in matrix
	int nnz(void) const;
	// set row and column for a possibly non-zero element
	void put(int k, int r, int c);
	// row indices
	std::vector<int> row(void) const;
	// column indices
	std::vector<int> col(void) const;
	// row-major order
	std::vector<int> row_major(void) const;
	// column-major order
	std::vector<int> col_major(void) const;
	// -----------------------------------------------------------------------
};

// Swig class that acts the same as CppAD::sparse_rcv< std::vector<size_t> >
class CPPAD_SWIG_LIB_PUBLIC sparse_rcv
{	// private members are not in Swig interface
	private:
	// sparse_rc< std::vector<size_t> > representation
	CppAD::sparse_rcv< std::vector<size_t>, std::vector<double> >* ptr_;
	// -----------------------------------------------------------------------
	// public members are in Swig interface
	public:
	// constructor
	sparse_rcv(const sparse_rc& pattern);
	// destructor
	~sparse_rcv(void);
	// set k-th possibly non-zero value
	void put(int k, const double v);
	// number of rows in matrix
	int nr(void) const;
	// number of columns in matrix
	int nc(void) const;
	// number of possibly non-zero elements in matrix
	int nnz(void) const;
	// row indices
	std::vector<int> row(void) const;
	// column indices
	std::vector<int> col(void) const;
	// value of possibly non-zero matrix elements
	std::vector<double> val(void) const;
	// row-major order
	std::vector<int> row_major(void) const;
	// column-major order
	std::vector<int> col_major(void) const;
};

} // END_CPPAD_SWIG_NAMESPACE

# endif