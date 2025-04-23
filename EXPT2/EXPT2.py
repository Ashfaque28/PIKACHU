import math
while True:

  print("\t\t*****MENU****")
  print("\t\t1.AREA OF CIRLE")
  print("\t\t2.AREA OF TRIANGLE")
  print("\t\t3.AREA OF RECTANGLE")
  

  x=int(input("ENTER YOUR CHOICE : "))
  if (x==1):
    r=int(input("ENTER THE RADIUS OF CIRCLE : "))
    area=3.142*r**2
    print(f"THE AREA OF CIRCLE IS {area}")

  elif (x==2):
    b=int(input("ENTER THE BASE OF TRIANGLE :"))
    h=int(input("ENTER THE HEIGTH OF TRIANGLE :"))
    area=0.5*b*h
    print(f"THE AREA OF TRIANGLE IS {area}")

  elif(x==3):
    l=int(input("ENTER THE LENGTH OF REACTANGLE :"))
    b=int(input("ENTER THE BASE OF RECTANGLE :"))
    area=l*b
    print(f"THE AREA OF RECTANGLE IS {area}")


  else:
    print("INVALID! PLEASE ENTER VALID NUMBER")

  again=input("DO YOU WANT TO PERFORM THIS AGAIN YES/NO = ").upper()
  if again=='NO':
    print("\t\t****THANK YOU****")
    break
