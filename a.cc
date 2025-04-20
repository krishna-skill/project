/* Modern Gradient Background */
body {
    font-family: "Poppins", sans-serif;
    background: linear-gradient(135deg, #ff9a9e, #fad0c4, #fad0c4, #ffdde1);
    display: flex;
    justify-content: center;
    align-items: center;
    height: 100vh;
    margin: 0;
    backdrop-filter: blur(10px);
  }
  
  /* Glassmorphism Container */
  .container {
    background: rgba(255, 255, 255, 0.2);
    padding: 30px;
    border-radius: 15px;
    width: 350px;
    text-align: center;
    box-shadow: 0 0 15px rgba(0, 0, 0, 0.1);
    backdrop-filter: blur(15px);
    animation: fadeIn 1s ease-in-out;
  }
  
  /* Title */
  h2 {
    color: white;
    margin-bottom: 20px;
  }
  
  /* Input Groups */
  .input-group {
    display: flex;
    align-items: center;
    background: rgba(255, 255, 255, 0.4);
    padding: 12px;
    border-radius: 10px;
    margin-bottom: 15px;
    border: 1px solid rgba(255, 255, 255, 0.5);
    transition: all 0.3s ease-in-out;
  }
  
  /* Input Fields */
  input {
    border: none;
    outline: none;
    font-size: 16px;
    background: transparent;
    width: 100%;
    color: white;
  }
  
  /* Icons */
  .input-group i {
    margin-right: 10px;
    color: white;
  }
  
  /* Input Hover Effect */
  .input-group:hover {
    background: rgba(255, 255, 255, 0.6);
    transform: scale(1.02);
  }
  
  /* Placeholder Color */
  ::placeholder {
    color: white;
    opacity: 0.8;
  }
  
  /
  