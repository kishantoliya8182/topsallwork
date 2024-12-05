import tkinter as tk
from tkinter import messagebox

# Function to perform calculations
def calculate(operation):
    try:
        num1 = float(entry1.get())
        num2 = float(entry2.get())
        if operation == '+':
            result = num1 + num2
        elif operation == '-':
            result = num1 - num2
        elif operation == '*':
            result = num1 * num2
        elif operation == '/':
            if num2 != 0:
                result = num1 / num2
            else:
                messagebox.showerror("Error", "Division by zero is not allowed.")
                return
        output_label.config(text=f"Result: {result}")
    except ValueError:
        messagebox.showerror("Input Error", "Please enter valid numbers.")

# Create the main window
root = tk.Tk()
root.title("Simple Calculator")
root.geometry("300x300")

# Add UI components
tk.Label(root, text="Enter Number 1:").pack(pady=5)
entry1 = tk.Entry(root, width=20)
entry1.pack(pady=5)

tk.Label(root, text="Enter Number 2:").pack(pady=5)
entry2 = tk.Entry(root, width=20)
entry2.pack(pady=5)

# Buttons for operations
button_frame = tk.Frame(root)
button_frame.pack(pady=10)

tk.Button(button_frame, text="+", width=5, command=lambda: calculate('+')).grid(row=0, column=0, padx=5)
tk.Button(button_frame, text="-", width=5, command=lambda: calculate('-')).grid(row=0, column=1, padx=5)
tk.Button(button_frame, text="*", width=5, command=lambda: calculate('*')).grid(row=0, column=2, padx=5)
tk.Button(button_frame, text="/", width=5, command=lambda: calculate('/')).grid(row=0, column=3, padx=5)

# Output label
output_label = tk.Label(root, text="Result: ", font=("Arial", 12))
output_label.pack(pady=20)

# Run the application
root.mainloop()
