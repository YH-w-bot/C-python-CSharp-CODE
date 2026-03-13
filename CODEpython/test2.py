import tkinter as tk
import random
import math

WIDTH, HEIGHT = 800, 500

class Particle:
    def __init__(self):
        self.x = random.randint(0, WIDTH)
        self.y = random.randint(0, HEIGHT)
        self.angle = random.uniform(0, 2 * math.pi)
        self.speed = random.uniform(1, 3)
        self.r = random.randint(3, 6)
        self.color = random.choice(['#10DEDE', '#144A9B', '#a1e3fb', '#2a73f9', '#10cbe6'])

    def move(self):
        self.x += math.cos(self.angle) * self.speed
        self.y += math.sin(self.angle) * self.speed
        if not (0 < self.x < WIDTH): self.angle = math.pi - self.angle
        if not (0 < self.y < HEIGHT): self.angle = -self.angle

class ParticleAnimation:
    def __init__(self, root):
        self.canvas = tk.Canvas(root, width=WIDTH, height=HEIGHT, bg='#0D233C', highlightthickness=0)
        self.canvas.pack()
        self.particles = [Particle() for _ in range(80)]
        self.animate()

    def animate(self):
        self.canvas.delete('all')
        for p in self.particles:
            # 绘制粒子
            self.canvas.create_oval(p.x-p.r, p.y-p.r, p.x+p.r, p.y+p.r, fill=p.color, outline="")
            p.move()
        # 绘制连线
        for i, a in enumerate(self.particles):
            for b in self.particles[i+1:]:
                dist = math.hypot(a.x - b.x, a.y - b.y)
                if dist < 80:
                    alpha = int(100 * (1 - dist/80))
                    line_color = f'#10DEDE{hex(alpha)[2:].zfill(2)}'
                    self.canvas.create_line(a.x, a.y, b.x, b.y, fill="#DE10B5", width=1)
        self.canvas.after(25, self.animate)

if __name__ == "__main__":
    root = tk.Tk()
    root.title('科技风粒子动画')
    ParticleAnimation(root)
    root.mainloop()