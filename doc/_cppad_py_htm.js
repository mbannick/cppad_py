var list_across0 = [
'_contents.htm',
'_reference.htm',
'_index.htm',
'_search.htm',
'_external.htm'
];
var list_up0 = [
'cppad_py.htm'
];
var list_down0 = [
'testing.htm',
'swig_xam.i.htm',
'library.htm',
'whats_new_2018.htm'
];
var list_current0 = [
'cppad_py.htm#Purpose',
'cppad_py.htm#Under Construction',
'cppad_py.htm#Getting Started',
'cppad_py.htm#C++ Function Speed',
'cppad_py.htm#Supporting Packages',
'cppad_py.htm#Supporting Packages.Required',
'cppad_py.htm#Source Directory',
'cppad_py.htm#License',
'cppad_py.htm#Contents'
];
function choose_across0(item)
{	var index          = item.selectedIndex;
	item.selectedIndex = 0;
	if(index > 0)
		document.location = list_across0[index-1];
}
function choose_up0(item)
{	var index          = item.selectedIndex;
	item.selectedIndex = 0;
	if(index > 0)
		document.location = list_up0[index-1];
}
function choose_down0(item)
{	var index          = item.selectedIndex;
	item.selectedIndex = 0;
	if(index > 0)
		document.location = list_down0[index-1];
}
function choose_current0(item)
{	var index          = item.selectedIndex;
	item.selectedIndex = 0;
	if(index > 0)
		document.location = list_current0[index-1];
}
