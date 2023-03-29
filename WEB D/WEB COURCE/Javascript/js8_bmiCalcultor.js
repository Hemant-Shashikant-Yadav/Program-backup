// function bmiCalculator(weight, hight) {
//   var bmi = weight / (hight * hight);
//   return bmi;
// }
function bmiCalculator(weight, hight) {
  var bmi = weight / Math.pow(hight, 2);
  return bmi;
}

console.log("Your bmi is = " + Math.floor(bmiCalculator(65, 1.8)));
console.log("Your bmi is = " + Math.round(bmiCalculator(65, 1.8)));
