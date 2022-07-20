# def list_mutator(l):
#     l[0] = 1


# l = [0, 1, 2, 3, 4]
# list_mutator(l)
# print(l[0])

# d = {x: x*x for x in range(10)}
# print(d[10])

# d1 = [10, 20, 30, 40, 50]
# d2 = [1, 2, 3, 4, 5]
# print(d1 - d2)


# def addto(listcontainer):
#     listcontainer += [10]


# mylist = [10, 20, 30, 40]
# addto(mylist)
# print(len(mylist))


def summator(*args):
    sum = 0
    print(args)
    for i in args:
        sum += i
    return sum


print(summator(1, 2, 3))


def greet_decorator(greet):
    ...
