import tkinter as tk
from datetime import datetime, timedelta

class StopwatchApp:
    def __init__(self, root):
        # Colors and Styles
        self.bg_color = "#333"
        self.text_color = "#DDD"
        self.button_bg_color = "#555"
        self.button_hover_bg_color = "#666"
        self.button_fg_color = "#DDD"
        self.button_font = ("Arial", 9, "bold")
        self.label_font = ("Arial", 24)
        self.small_label_font = ("Arial", 12)
        self.play_color = "#0F0"  # Green
        self.pause_color = "#F00"  # Red

        self.root = root
        self.root.title("Study Timer")
        self.root.configure(bg=self.bg_color)

        # Variables
        self.start_time = None
        self.running = False
        self.lap_start_actual_time = None
        self.lap_list = []
        self.current_time = timedelta()
        self.last_lap_time = timedelta()
        self.stay_on_top = tk.BooleanVar()  # Variable to track the state of the toggle button
        
        # UI Elements
        self.time_label = tk.Label(root, text="00:00:00", font=self.label_font, bg=self.bg_color, fg=self.text_color)
        self.time_label.pack(pady=20)

        self.play_pause_label = tk.Label(root, text="Paused", font=self.small_label_font, bg=self.pause_color, fg=self.bg_color)
        self.play_pause_label.pack(pady=1)

        self.real_time_label = tk.Label(root, text="", font=self.small_label_font, bg=self.bg_color, fg=self.text_color)
        self.real_time_label.pack(pady=10)

        self.button_frame = tk.Frame(root, bg=self.bg_color)
        self.button_frame.pack(pady=10)

        self.start_button = self.create_button(self.button_frame, "Study", self.start)
        self.start_button.pack(side=tk.LEFT, padx=5)
        
        self.pause_button = self.create_button(self.button_frame, "Pause", self.pause)
        self.pause_button.pack(side=tk.LEFT, padx=5)
        
        self.reset_button = self.create_button(self.button_frame, "Reset", self.reset)
        self.reset_button.pack(side=tk.LEFT, padx=5)

        self.top_toggle_button = tk.Checkbutton(root, text="Always On Top", variable=self.stay_on_top, command=self.toggle_on_top, bg=self.bg_color, fg=self.text_color, selectcolor=self.bg_color)
        self.top_toggle_button.pack(pady=10)
        
        self.lap_frame = tk.Frame(root, bg=self.bg_color)
        self.lap_frame.pack(pady=20, fill=tk.X, padx=10)
        
        self.update_real_time()
        self.update_display()

    def create_button(self, parent, text, command):
        button = tk.Button(parent, text=text, command=command, bg=self.button_bg_color, fg=self.button_fg_color, font=self.button_font, relief=tk.FLAT, borderwidth=0, padx=15, pady=5)
        button.bind("<Enter>", lambda e, btn=button: btn.configure(bg=self.button_hover_bg_color))
        button.bind("<Leave>", lambda e, btn=button: btn.configure(bg=self.button_bg_color))
        return button

    def toggle_on_top(self):
        if self.stay_on_top.get():
            self.root.attributes('-topmost', 1)
        else:
            self.root.attributes('-topmost', 0)
    
    def format_time(self, delta):
        hours, remainder = divmod(delta.total_seconds(), 3600)
        minutes, seconds = divmod(remainder, 60)
        return f"{int(hours):02}:{int(minutes):02}:{int(seconds):02}"
    
    def start(self):
        if not self.running:
            self.running = True
            self.play_pause_label.config(text="Studying...", bg=self.play_color)
            if self.start_time is None:
                self.start_time = datetime.now()
                self.lap_start_actual_time = self.start_time
            else:
                elapsed = self.current_time
                self.start_time = datetime.now() - elapsed
                self.lap_start_actual_time = datetime.now() - (self.current_time - self.last_lap_time)
            self.update_display()
    
    def pause(self):
        if self.running:
            self.running = False
            self.play_pause_label.config(text="Paused", bg=self.pause_color)
            lap_start_time = self.lap_start_actual_time.strftime("%I:%M:%S %p")
            lap_end_time = datetime.now().strftime("%I:%M:%S %p")
            duration = self.format_time(self.current_time - self.last_lap_time)
            self.lap_list.append((lap_start_time, lap_end_time, duration))
            self.last_lap_time = self.current_time
            self.lap_start_actual_time = datetime.now()
            
            # Display lap details
            lap_label = tk.Label(self.lap_frame, text=f"{lap_start_time} - {lap_end_time}   ---   {duration}", bg=self.bg_color, fg=self.text_color)
            lap_label.pack(anchor=tk.W)
    
    def reset(self):
        self.running = False
        self.play_pause_label.config(text="Paused", bg=self.pause_color)
        self.start_time = None
        self.lap_start_actual_time = None
        self.current_time = timedelta()
        self.last_lap_time = timedelta()
        self.lap_list.clear()
        for widget in self.lap_frame.winfo_children():
            widget.destroy()
        self.update_display()
    
    def update_display(self):
        if self.running:
            self.current_time = datetime.now() - self.start_time
            self.time_label.config(text=self.format_time(self.current_time))
            self.root.after(100, self.update_display)
        else:
            self.time_label.config(text=self.format_time(self.current_time))
    
    def update_real_time(self):
        current_time = datetime.now().strftime("%I:%M:%S %p")
        self.real_time_label.config(text=f"{current_time}")
        self.root.after(1000, self.update_real_time)

root = tk.Tk()
app = StopwatchApp(root)
root.mainloop()
