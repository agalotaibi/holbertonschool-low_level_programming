# 📘 Hello World — Low-Level Programming

This directory contains the introductory C programming tasks from Holberton School.
Each exercise focuses on a fundamental concept: compilation, preprocessing, assembly, linking, and basic output.

Below is an explanation of each task using conceptual descriptions and pseudocode, not the actual solutions.



## 📝 Task 0 — Preprocessor

🧠 What this task teaches

	•	How the C preprocessor works (cpp)
  
	•	How header files are expanded
  
	•	How macros are replaced

📌 Conceptual explanation

 ```bash
Given a C source file:
    - Run it through the C preprocessor
    - Produce an output file containing only preprocessed code
        → No variables compiled
        → No linking
        → Only macros expanded and includes replaced

Think of it like:
    expanded_code = preprocess(original_code)
    save(expanded_code)
```

## 📝 Task 1 — Compiler


🧠 What this task teaches

	•	How to compile C code without linking
  
	•	How .c becomes a .o file
  

📌 Conceptual explanation

 ```bash
Given a C source file:
    - Compile it
    - Do not link it into an executable
    - Produce an object file:
        input:  file.c
        output: file.o

Steps:
    tokens = compile_to_object(source_code)
    save(tokens)
```


## 📝 Task 2 — Assembler


🧠 What this task teaches

	•	How to generate assembly code from C source
  
	•	Understanding intermediate compilation stages
  

📌 Conceptual explanation


 ```bash
Given a C file:
    - Convert the C code into assembly instructions
    - Save the assembly output to a .s file

assembler_output = c_to_assembly(source_code)
save(assembler_output)
```

## 📝 Task 3 — Name


🧠 What this task teaches

	•	How to compile and link a C file into an executable
  
	•	Full build pipeline: preprocess → compile → assemble → link
  

📌 Conceptual explanation

 ```bash
Given a C source file:
    - Compile the file
    - Link it
    - Produce an executable named 'cisfun'

Executable pipeline:
    preprocessed = preprocess(code)
    object_file = compile(preprocessed)
    binary = link(object_file)

save_as(binary, "cisfun")
```

## 📝 Task 4 — Hello, puts


🧠 What this task teaches

	•	How to use the puts() function
  
	•	How to print strings in C
  

📌 Conceptual explanation

 ```bash
Program behavior:
    - Start main()
    - Print a specific string using puts()
    - Return 0

Pseudocode:
    function main():
        puts("desired output")
        return 0
```

## 📝 Task 5 — Hello, printf

🧠 What this task teaches

	•	Using printf()
  
	•	Formatting output
  
	•	Understanding standard output buffering
  

📌 Conceptual explanation

 ```bash
Program behavior:
    - Start main()
    - Use printf() to print the required sentence
    - End with return 0

Pseudocode:
    function main():
        printf("desired sentence\n")
        return 0
```

## 📝 Task 6 — Size is not grandeur


🧠 What this task teaches

	•	Using sizeof
  
	•	Understanding primitive data type sizes
  
	•	Output formatting
  

📌 Conceptual explanation

 ```bash
Program behavior:
    - For each data type (char, int, long, etc.)
        → Calculate its size in bytes
        → Print the result

Pseudocode:
    function main():
        print("Size of a char: ", sizeof(char))
        print("Size of an int: ", sizeof(int))
        ...
        return 0

```

## 📝 Task 8 — Printing to stderr

🧠 What this task teaches

	•	Difference between stdout and stderr
  
	•	How to write output to the error stream
  
	•	How to use system-level write calls
  

📌 Conceptual explanation

 ```bash
Program behavior:
    - Send a specific message to stderr
    - Return 1

Pseudocode:
    function main():
        write_to_stderr("error message")
        return 1
```

### 🎯 Learning Outcomes


By completing this project, you understand:

	•	The entire C compilation process
  
	•	Preprocessing, compiling, assembling, linking
  
	•	Basic C I/O (puts, printf, write)
  
	•	Difference between stdout and stderr
  
	•	How to automate builds using scripts
  

