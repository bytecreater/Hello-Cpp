const carousel = document.querySelector('.carousel');
const slides = document.querySelectorAll('.slide');
const prevButton = document.getElementById('prev');
const nextButton = document.getElementById('next');
const addTextBoxButton = document.getElementById('addTextBox');
const fontSelector = document.getElementById('fontSelector');
const fontSizeInput = document.getElementById('fontSize');

let currentIndex = 0;

// Navigate to the next slide
nextButton.addEventListener('click', () => {
  if (currentIndex < slides.length - 1) {
    currentIndex++;
  } else {
    currentIndex = 0;
  }
  updateCarousel();
});

// Navigate to the previous slide
prevButton.addEventListener('click', () => {
  if (currentIndex > 0) {
    currentIndex--;
  } else {
    currentIndex = slides.length - 1;
  }
  updateCarousel();
});

// Update carousel position
function updateCarousel() {
  const offset = -currentIndex * 100;
  slides.forEach((slide, index) => {
    slide.style.transform = `translateX(${(index - currentIndex) * 100}%)`;
  });
}

// Add a draggable text box to the current slide
addTextBoxButton.addEventListener('click', () => {
  const currentSlide = slides[currentIndex];
  const textBox = document.createElement('div');
  textBox.className = 'text-box';
  textBox.contentEditable = true; // Allow direct text editing
  textBox.textContent = 'Type here...';
  textBox.style.position = 'absolute';
  textBox.style.top = '50%';
  textBox.style.left = '50%';
  textBox.style.transform = 'translate(-50%, -50%)';
  textBox.style.minWidth = '100px';
  textBox.style.minHeight = '50px';
  textBox.style.padding = '5px';
  textBox.style.border = '1px dashed #333';
  textBox.style.backgroundColor = 'rgba(255, 255, 255, 0.8)';
  currentSlide.appendChild(textBox);

  makeDraggable(textBox);
});

// Update font family of selected text boxes
fontSelector.addEventListener('change', (e) => {
  const activeElement = document.activeElement;
  if (activeElement && activeElement.classList.contains('text-box')) {
    activeElement.style.fontFamily = e.target.value;
  }
});

// Update font size of selected text boxes
fontSizeInput.addEventListener('input', (e) => {
  const activeElement = document.activeElement;
  if (activeElement && activeElement.classList.contains('text-box')) {
    activeElement.style.fontSize = `${e.target.value}px`;
  }
});

// Function to make a text box draggable
function makeDraggable(element) {
  let isDragging = false;
  let startX = 0;
  let startY = 0;
  let elementX = 0;
  let elementY = 0;

  element.addEventListener('mousedown', (e) => {
    isDragging = true;
    startX = e.clientX;
    startY = e.clientY;
    elementX = parseInt(element.style.left) || 0;
    elementY = parseInt(element.style.top) || 0;
    element.style.cursor = 'grabbing';

    e.preventDefault(); // Prevent text selection
  });

  document.addEventListener('mousemove', (e) => {
    if (isDragging) {
      const dx = e.clientX - startX;
      const dy = e.clientY - startY;
      element.style.left = `${elementX + dx}px`;
      element.style.top = `${elementY + dy}px`;
    }
  });

  document.addEventListener('mouseup', () => {
    isDragging = false;
    element.style.cursor = 'move';
  });
}

document.addEventListener('dragstart', (e) => e.preventDefault());
