from tkinter import *
from tkinter.messagebox import *
root = Tk()
root.title("Unit convertor")
# root.configure(bg="pink")
root['background']='#91FF33'
root.iconbitmap("D:/DRIVE 1/coding/projects/units.ico")
# width and height of app
app_width= 500
app_height=300
root.geometry(f'{app_width}x{app_height}+{518}+{182}')
# x and y coordinte in the end that where we want our window when it will pop up

def clear():
    entry.delete(0,END)

def kg_to_g():
    # value=entry.get()
    # chech git
    # global conversion
    # global valuetoconvert
    # valuetoconvert=int(value)
    # entry.delete(0, END)  
    # entry.insert=(0, valuetoconvert*1000)
    output.delete(0,END)
    grams=int(entry.get())
    Answer=grams*1000
    output.insert(0, Answer)
    
def g_to_kg():
    output.delete(0,END)
    kilograms= int(entry.get())
    Answer=kilograms/1000
    output.insert(0,Answer)

def button_clear():
    entry.delete(0,END)
    output.delete(0,END)
title=  Label(root, text="Unit Convertor", font='10,bold',bg='Yellow')
in_kgs= Label(root, text="Input", font='7',bg='#91FF33')
entry=  Entry(root, width = 35, bg="yellow")
in_gms= Label(root, text="Output", font='7',bg='#91FF33')
output= Entry(root, width = 35, bg="yellow")
convert= Button(root, text="Kg to g",command=kg_to_g,activebackground="green")
convert1= Button(root, text="g to kg",command=g_to_kg,activebackground="green")
clear=   Button(root, text="Clear",command=button_clear,activebackground="green")
note= Label(root, text="Note: Valid for only integer values",bg='red',anchor="center")
# entry.bind('Input',exit)

title.grid(row=0,column=0,columnspan=3)
in_kgs.grid(row=1,column=0,sticky=W)
entry.grid(row=3,column=0,columnspan=3)
in_gms.grid(row=4,column=0,sticky=W)
output.grid(row=5,column=0,columnspan=3)
convert.grid(row=6, column= 2,padx=10,pady=10)
convert1.grid(row=6,column=1,padx=10,pady=10)
clear.grid(row=6,column=0,padx=10,pady=10,sticky=W)
note.grid(row=7,column=0,columnspan=3)
