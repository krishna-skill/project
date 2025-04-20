// scripts.js
document.getElementById('contactForm').addEventListener('submit', function (event) {
    event.preventDefault(); // Prevent form submission

    // Basic validation
    const name = document.getElementById('name').value;
    const email = document.getElementById('email').value;
    const message = document.getElementById('message').value;

    if (name === '' || email === '' || message === '') {
        alert('Please fill out all fields.');
    } else {
        alert('Thank you for your message! We will get back to you soon.');
        // Here you can add code to send the form data to a server
        // Example: Using fetch() to send data to a backend API
    }
});