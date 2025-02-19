const randomNumber = 1;
let attempts = 5;

const guessInput = document.getElementById('guessInput');
const submitGuess = document.getElementById('submitGuess');
const feedback = document.getElementById('feedback');

submitGuess.addEventListener('click', function () {
  const userGuess = parseInt(guessInput.value);

  if (isNaN(userGuess) || userGuess < 1 || userGuess > 100) {
    feedback.textContent = "Please enter a valid number between 1 and 100.";
    feedback.className = "text-danger";
    return;
  }

  if (userGuess === randomNumber) {
    feedback.textContent = ` Correct! The number was 1. You win!`;
    feedback.className = "text-success";
    submitGuess.disabled = true;
  } else {
    attempts--;

    if (attempts === 0) {
      feedback.textContent = `Game over! The correct number was ${randomNumber}.`;
      feedback.className = "text-danger";
      submitGuess.disabled = true;
    } else {
      feedback.textContent =
        userGuess > randomNumber
          ? `Too high! You have ${attempts} attempts left.`
          : `Too low! You have ${attempts} attempts left.`;
      feedback.className = "text-warning";
    }
  }

  guessInput.value = "";
});
