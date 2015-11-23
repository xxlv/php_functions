array_map(callback,$array) function accept two params .
map function for each array value
array_map() 函数返回用户自定义函数作用后的数组。回调函数接受的参数数目应该和传递给 array_map() 函数的数组数目一致

example:

array_map(function($v){
    return $v.'END';

},[1,2,3])

will return ['1END','2END','3END']

