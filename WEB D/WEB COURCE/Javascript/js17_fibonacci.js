function fibonacci(n) {
  var str = [];
  if (n === 0) {
    str.push(0);
    return str;
  }
  if (n === 1) {
    str.push(0);
    str.push(1);
    return str;
  }
  var v1 = 0;
  var v2 = 1;
  str.push(v1);
  str.push(v2);

  for (var index = 0; index < n - 2; index++) {
    var v3 = v1 + v2;
    str.push(v3);
    v1 = v2;
    v2 = v3;
  }
  return str;

}


console.log( fibonacci(5));
