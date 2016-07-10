# treess
import turtle
def tree(branchLen,tu):
if branchLen > 5:
tu.forward(branchLen)
tu.right(20)
tree(branchLen-15,tu)
tu.left(40)
tree(branchLen-15,tu)
tu.right(20)
tu.backward(branchLen)
def main():
tu = turtle.Turtle()
myWin = turtle.Screen()
tu.left(90)
tu.up()
tu.backward(100)
tu.down()
tu.color("green")
tree(75,tu)
myWin.exitonclick()
main()
