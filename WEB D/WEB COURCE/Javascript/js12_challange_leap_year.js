function leapYear(year) {
  if (year % 4 === 0) {
    if (year % 100 === 0) {
        if (year % 400 === 0) {
          console.log("It is a leap year.");
          return
        }
      console.log("It is not a leap year.");
      return;
    }
    console.log("It is a leap year.");
  } else {
    console.log("It is not a leap year.");
  }
}

leapYear(2400);
