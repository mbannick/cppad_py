var list_across0 = [
'_contents.htm',
'_reference.htm',
'_index.htm',
'_search.htm',
'_external.htm'
];
var list_up0 = [
'cppad_py.htm',
'library.htm',
'py_lib.htm',
'py_fun.htm'
];
var list_down3 = [
'setup.py.htm',
'library.htm',
'whats_new_2018.htm'
];
var list_down2 = [
'py_lib.htm',
'cpp_lib.htm'
];
var list_down1 = [
'py_fun.htm',
'py_sparse.htm',
'py_utility.htm',
'more_py.htm'
];
var list_down0 = [
'py_independent.htm',
'py_abort_recording.htm',
'py_fun_ctor.htm',
'py_fun_property.htm',
'py_fun_new_dynamic.htm',
'py_fun_jacobian.htm',
'py_fun_hessian.htm',
'py_fun_forward.htm',
'py_fun_reverse.htm',
'py_fun_optimize.htm'
];
var list_current0 = [
'py_fun.htm#Contents'
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
function choose_down3(item)
{	var index          = item.selectedIndex;
	item.selectedIndex = 0;
	if(index > 0)
		document.location = list_down3[index-1];
}
function choose_down2(item)
{	var index          = item.selectedIndex;
	item.selectedIndex = 0;
	if(index > 0)
		document.location = list_down2[index-1];
}
function choose_down1(item)
{	var index          = item.selectedIndex;
	item.selectedIndex = 0;
	if(index > 0)
		document.location = list_down1[index-1];
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