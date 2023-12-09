# from string import Template

# s = Template("my name is $username")
# user = "Khush"
# user1 = "Rudra"

# print(s.substitute({"username":user}))
# print(s.substitute({"username":user1}))

#templates
print("\n\n-------------------------------- : Templates from module:  ")
from string import Template
temp = Template("Hello im $name from $place. are you $name2 ??")
#use substitute
x = temp.substitute(name="python",place="pyLand",name2="Jpython") #simple method
print(x)

#use dictionary
d = {"name":"java",
        "place":"jland",
             "name2":"PYthon"
     }
x = temp.substitute(**d) #method 2
print(x)

#used safe_substitute
x = temp.safe_substitute(**d)
print(x)