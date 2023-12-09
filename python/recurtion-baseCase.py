def countdown(n):
      print(n)
      if n == 0:
         return            
      else:
         countdown(n - 1)   # Recursive call

countdown(10)


#  A return statement is used to end the execution of the function call and 
# “returns” the result (value of the expression following the return keyword) to the caller.
#  The statements after the return statements are not executed. If the return statement is
#  without any expression, then the special value None is returned. A return statement is overall
#  used to invoke a function so that the passed statements can be executed.Base Case in Recursive Function Python