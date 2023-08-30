var endDate;

function updateTimer() {
    const now = new Date().getTime();
    const timeLeft = endDate - now;

    const days = Math.floor(timeLeft / (1000 * 60 * 60 * 24));
    const hours = Math.floor((timeLeft % (1000 * 60 * 60 * 24)) / (1000 * 60 * 60));
    const minutes = Math.floor((timeLeft % (1000 * 60 * 60)) / (1000 * 60));
    const seconds = Math.floor((timeLeft % (1000 * 60)) / 1000);

    document.getElementById("days").value = days;
    document.getElementById("hours").value = hours;
    document.getElementById("minutes").value = minutes;
    document.getElementById("seconds").value = seconds;
}


document.getElementById("start-button").addEventListener("click", () => {
    const selectedDate = new Date(document.getElementById("end-date").value).getTime();

    if (!isNaN(selectedDate)) {
        endDate = selectedDate;

        updateTimer();
        interval = setInterval(updateTimer, 1000);
    }
});