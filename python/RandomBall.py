import turtle
import random

def make_ball(size=30):
    x = random.randint(x1, x2)
    y = random.randint(y1, y2)
    color = random.choice(["red", "green", 'blue', 'yellow', 'pink', 'purple'])
    while True:
        dx = random.randint(-4, 4)
        dy = random.randint(-4, 4)
        if dx != 0 or dy != 0:
            break
    return [x,y,size,color,dx,dy]

def animate_ball(pen, ball_list):
    turtle.tracer(0)
    while True:
        pen.clear()
        for i in range(len(ball_list)):
            bx, by, size, color, dx, dy = ball_list[i]
            bx += dx
            by += dy
            ball_list[i][0] = bx
            ball_list[i][1] = by
            if (bx<x1) or (bx>x2): ball_list[i][4] *= -1
            if (by<y1) or (by>y2): ball_list[i][5] *= -1
            pen.goto(bx, by)
            pen.dot(size, color)
        turtle.update()

def main():
    global x1, x2, y1, y2
    x1 = -400; x2 = 400
    y1 = -300; y2 = 300
    turtle.setup(x2*2, y2*2)

    t = turtle.Turtle()
    t.up()
    t.ht()
    ball_list = []
    for i in range(50):
        ball = make_ball(random.randint(30, 50))
        ball_list.append(ball)
    animate_ball(t, ball_list)

if __name__ == "__main__":
    main()
