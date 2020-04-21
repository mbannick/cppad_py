# cppad\_py: A Python Connection to CppAD

## Description
A C++ Algorithmic Differentiation Object Library and Python Interface to CppAD

## License
<pre>
Copyright (C) 2017-20 Bradley M. Bell (bradbell@seanet.com)
    This program is distributed under the terms of the
    GNU General Public License version 3.0 or later see
        https://www.gnu.org/licenses/gpl-3.0.txt
</pre>

## Pip Install

### Current Version
2020.4.20

### Install Command
```sh
pip install -i https://test.pypi.org/simple/ cppad-py
```

### Error
If you get the error message:

`ERROR: Could not install packages due to` ...  `Permission denied:`

install a local copy (in your user space) using:
```sh
pip install -i https://test.pypi.org/simple/ cppad-py --user
```

## Simple Example
```python
import numpy
import cppad_py
x    = numpy.array( [ 1, 2], dtype = float)
ax   = cppad_py.independent(x)
ay   = ax * ax
f    = cppad_py.d_fun(ax, ay)
x[0] = 2.0
x[1] = 3.0
y    = f.forward(0, x)
assert all( y == x * x )
J    = f.jacobian(x)
assert J.shape == (2,2)
assert J[0,0] == 2.0 * x[0]
assert J[0,1] == 0.0
assert J[1,0] == 0.0
assert J[1,1] == 2.0 * x[1]
```

## Documentation
<https://bradbell.github.io/cppad_py/doc>
