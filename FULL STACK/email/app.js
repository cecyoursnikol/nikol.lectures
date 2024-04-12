// Import required modules
const express = require('express');
const nodemailer = require('nodemailer');

// Initialize Express app
const app = express();
const port = 3000; // You can change this to any port you want

// Setup a route to serve your HTML file
app.get('/', (req, res) => {
    res.sendFile(__dirname + '/index.html');
});

// Setup a route to handle button click and send email
app.post('/send-email', (req, res) => {
    // Create a Nodemailer transporter
    let transporter = nodemailer.createTransport({
        service: 'Gmail',
        auth: {
            user: 'students.cec9@gmail.com', // Your email address
            pass: 'pxoy fcrv qqpv ceps' // Your email password
        }
    });

    // Define email options
    let mailOptions = {
        from: 'students.cec9@gmail.com', // Sender address
        to: 'hp747005@gmail.com', // List of recipients
        subject: 'Test Email', // Subject line
        text: 'This is a test email sent from Node.js' // Plain text body
    };

    // Send email
    transporter.sendMail(mailOptions, (error, info) => {
        if (error) {
            console.log(error);
            res.send('Error occurred while sending email');
        } else {
            console.log('Email sent: ' + info.response);
            res.send('Email sent successfully');
        }
    });
});

// Start the server
app.listen(port, () => {
    console.log(`Server is running on http://localhost:${port}`);
});
