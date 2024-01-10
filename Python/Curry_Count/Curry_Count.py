import tkinter as tk
import pickle

class CurryCounterApp:
    def __init__(self, root):
        self.root = root
        self.root.title("Curry_Counter")
        self.root.configure(bg="#d9d9d9")  # Set background color to grey

        # Initialize food stock
        self.food_stock = {}
        self.load_data()

        # GUI Elements
        self.label_item = tk.Label(root, text="Item:", bg="#d9d9d9")  # Set background color to grey
        self.label_quantity = tk.Label(root, text="Quantity:", bg="#d9d9d9")  # Set background color to grey

        self.entry_item = tk.Entry(root)
        self.entry_quantity = tk.Entry(root)

        self.btn_enter = tk.Button(root, text="Enter", command=self.enter_item)
        self.btn_display = tk.Button(root, text="Display Stock", command=self.display_stock)

        # Stock Display
        self.stock_display = tk.Text(root, height=10, width=30, bg="#d9d9d9")  # Set background color to grey
        self.stock_display.insert(tk.END, "Current Food Stock:\n")
        self.stock_display.config(state=tk.DISABLED)

        # Grid layout
        self.label_item.grid(row=0, column=0, padx=10, pady=10)
        self.label_quantity.grid(row=0, column=1, padx=10, pady=10)
        self.entry_item.grid(row=1, column=0, padx=10, pady=10)
        self.entry_quantity.grid(row=1, column=1, padx=10, pady=10)
        self.btn_enter.grid(row=2, column=0, columnspan=2, pady=10)
        self.btn_display.grid(row=3, column=0, columnspan=2, pady=10)
        self.stock_display.grid(row=4, column=0, columnspan=2, pady=10)

    def enter_item(self):
        item = self.entry_item.get()
        quantity = int(self.entry_quantity.get())

        if item in self.food_stock:
            self.food_stock[item] += quantity
        else:
            self.food_stock[item] = quantity

        if self.food_stock[item] <= 0:
            del self.food_stock[item]

        self.save_data()
        self.update_stock_display()
        self.clear_entries()

    def decrement_quantity(self, item):
        if item in self.food_stock and self.food_stock[item] > 0:
            self.food_stock[item] -= 1
            if self.food_stock[item] <= 0:
                del self.food_stock[item]
            self.save_data()
            self.update_stock_display()

    def display_stock(self):
        self.update_stock_display()

    def update_stock_display(self):
        self.stock_display.config(state=tk.NORMAL)
        self.stock_display.delete("1.0", tk.END)
        self.stock_display.insert(tk.END, "Current Food Stock:\n")
        for item, quantity in self.food_stock.items():
            decrement_button = tk.Button(
                self.stock_display,
                text="-",
                command=lambda i=item: self.decrement_quantity(i),
            )
            self.stock_display.window_create(tk.INSERT, window=decrement_button)
            self.stock_display.insert(tk.END, f"{item}: {quantity}\n")
        self.stock_display.config(state=tk.DISABLED)

    def clear_entries(self):
        self.entry_item.delete(0, tk.END)
        self.entry_quantity.delete(0, tk.END)

    def save_data(self):
        with open("curry_counter_data.pkl", "wb") as file:
            pickle.dump(self.food_stock, file)

    def load_data(self):
        try:
            with open("curry_counter_data.pkl", "rb") as file:
                self.food_stock = pickle.load(file)
        except FileNotFoundError:
            self.food_stock = {}

def main():
    root = tk.Tk()
    app = CurryCounterApp(root)
    root.mainloop()

if __name__ == "__main__":
    main()
