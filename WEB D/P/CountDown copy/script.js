let targetEndDate;

function updateCountdown() {
  const currentTime = new Date().getTime();
  const timeRemaining = targetEndDate - currentTime;

  const days = Math.floor(timeRemaining / (1000 * 60 * 60 * 24));
  const hours = Math.floor((timeRemaining % (1000 * 60 * 60 * 24)) / (1000 * 60 * 60));
  const minutes = Math.floor((timeRemaining % (1000 * 60 * 60)) / (1000 * 60));
  const seconds = Math.floor((timeRemaining % (1000 * 60)) / 1000);

  document.getElementById("days").value = days;
  document.getElementById("hours").value = hours;
  document.getElementById("minutes").value = minutes;
  document.getElementById("seconds").value = seconds;
}

document.getElementById("start-button").addEventListener("click", () => {
  const selectedDateTime = new Date(document.getElementById("end-date").value).getTime();

  if (!isNaN(selectedDateTime)) {
    targetEndDate = selectedDateTime;

    updateCountdown();
    interval = setInterval(updateCountdown, 1000);
  }
});
