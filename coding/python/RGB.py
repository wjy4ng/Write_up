import turtle

def move_r(x,y):
    global R
    r.sety(max(0, min(y, 255)))
    R = int(r.ycor())
    screen.bgcolor(R,G,B)

def move_g(x,y):
    global G
    g.sety(max(0, min(y, 255)))
    G = int(g.ycor())
    screen.bgcolor(R,G,B)

def move_b(x,y):
    global B
    b.sety(max(0, min(y, 255)))
    B = int(b.ycor())
    screen.bgcolor(R,G,B)

def make(x,y,color):
    t = turtle.Turtle("circle")
    t.color(color)
    t.shapesize(3, 3, 5)
    t.pensize(10)

    t.up()
    t.goto(x,0)
    t.down()
    t.sety(255)
    t.up()
    t.sety(y)
    t.pencolor('black')
    return t

def main():
    global screen, r, g, b
    global R,G,B
    R=G=B=255

    screen = turtle.Screen()
    screen.delay(0)
    screen.setworldcoordinates(-50, -50, 250, 300)
    screen.colormode(255)

    r = make(0, R, 'red')
    g = make(100, G, 'green')
    b = make(200, B, 'blue')

    r.ondrag(move_r)
    g.ondrag(move_g)
    b.ondrag(move_b)

if __name__=="__main__":
    main()
    turtle.mainloop()
