# 🚗 Automatic Vehicle Quotation Tool  

### 📌 Project Overview  
This project was developed as the **Final Project of C Programming (CCPR224064E)** at **Ho Chi Minh City University of Technology and Education**.  
The goal is to build a **vehicle quotation tool** that helps customers estimate the total price of a Porsche car, including:  
- Car model  
- Paint color  
- Interior option  
- Warranty package  
- Discount code (if available)  

This system simulates the process of car purchasing with discounts and promotions, making it easier for customers and sales staff to calculate the total cost.  

---

### 👥 Team Members  
- **Kim Ngọc Hưng – 21145015**  
- **Lê Hồ Minh Khoa – 21145019**  
- **Bùi Anh Kiệt – 21145590**  

---

### ⚙️ Features  
✅ Select Porsche car models with base prices  
✅ Choose paint color with additional cost  
✅ Configure interior (from low-class to premium)  
✅ Add warranty packages  
✅ Apply discount codes for special promotions  
✅ Display final total price  

---

### 📖 How It Works  
**Flowchart of the program logic:**  

```
Start
   ↓
Enter car model
   ↓
Enter paint color
   ↓
Enter interior option
   ↓
Enter warranty package
   ↓
Insert discount code
   ↓
[Correct] → Total * 0.75 → Print Total
[Wrong]   → Print Total
   ↓
End
```

---
### 🛠️ Technology Stack  
- **Language:** C  
- **Concepts Used:**  
  - Structs for data organization  
  - File I/O to load car options and prices  
  - Loops and conditions for user input  
  - String comparison for discount code checking  

---

### 📂 Project Structure  
```
├── car_line.txt        # Data for Porsche models
├── car_paint.txt       # Data for paint colors
├── car_interior.txt    # Data for interior options
├── car_insurance.txt   # Data for warranty packages
└── main.c              # Main C program
```

---

### ▶️ How to Run  
1. Clone this repository:  
   ```bash
   git clone https://github.com/<your-username>/Automatic-Vehicle-Quotation-Tool.git
   cd Automatic-Vehicle-Quotation-Tool
   ```

2. Compile the program:  
   ```bash
   gcc main.c -o quotation
   ```

3. Run the program:  
   ```bash
   ./quotation
   ```

---
### 📷 Demo Screenshot (Optional)  
*(You can add a GIF or screenshot of the console output here)*  

---

### 🚀 Future Improvements  
- Add more car brands beyond Porsche  
- Build a GUI version (desktop/web)  
- Connect with database for real-time car price updates  
- Multi-language support (English & Vietnamese)  

---

### 📜 License  
This project was built for **educational purposes** as part of the **C Programming course** at HCMUTE.  
