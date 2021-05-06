class Robot:

    def __init__(self, name):
        self.name = name

    def say_hi(self):
        print("Hi, I'm from class Robot")
        print("Hi, Ich bin " + self.name)

    def say_hi_to_everybody(self):
        print("Hi to all objects :-)")


class PhysicianRobot(Robot):
    def say_hi_again(self):
        print("Hi, I'm from sub-class PhysicianRobot")
        print("Hi, Ich bin " + self.name)


name_1 = "Marvin"
name_2 = "James"

x = Robot(name_1)
y = PhysicianRobot(name_2)

print(x, type(x))
x.say_hi()
x.say_hi_to_everybody()

print(y, type(y))
y.say_hi()
y.say_hi_again()
y.say_hi_to_everybody()
