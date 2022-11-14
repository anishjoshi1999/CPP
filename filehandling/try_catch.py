numerator = float(input("Enter numerator\n"))
denominator = float(input("Enter denominator\n"))
try:
    result = numerator / denominator
    print("The result is {}".format(result))
except ValueError as e:
    print("Error is found: {}".format(e))

finally:
    print("The program is finished")
