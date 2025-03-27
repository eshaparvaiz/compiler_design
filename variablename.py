
import keyword

def is_valid_python_var(s):
    return s.isidentifier() and not keyword.iskeyword(s)

s = input()
print("Valid" if is_valid_python_var(s) else "Invalid")
