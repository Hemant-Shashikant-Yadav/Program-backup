function lifeCalculation(age) {
  var yearsLeft = 90 - age;

  var ageInMonth = age * 12;
  var monthIn90Year = 90 * 12;
  var monthsLeft = monthIn90Year - ageInMonth;

  var ageInWeeks = age * 52;
  var weekIn90Year = 90 * 52;
  var weeksLeft = weekIn90Year - ageInWeeks;

  var ageInDays = age * 365;
  var dayIn90Year = 90 * 365;
  var daysLeft = dayIn90Year - ageInDays;

  console.log(
    "You have " +
      daysLeft +
      " days, " +
      weeksLeft +
      " weeks, " +
      monthsLeft +
      " months and " +
      yearsLeft +
      " years left."
  );
}

lifeCalculation(20);
