# Assignment 3: Character Occurrence Counter

## Overview
This assignment involves creating a C program that reads a file named `story.txt` and counts the number of occurrences of each letter of the alphabet. The program will output a report and a histogram representing these counts.

## Project Requirements
### Functionality
- **File Reading**: Open and read a file named `story.txt`.
- **Character Counting**: Count occurrences of each alphabet letter (assumed to be only lowercase) in the file.
- **Report Generation**:
  - Print a detailed report showing the number of times each letter was used.
- **Histogram Display**:
  - Implement and use a function `printHistogram(int counters[])` to display a histogram of character counts using the extended ASCII character 254 (■).

### Code Organization
- **Main Function**: Should handle file reading and managing counters for each letter.
- **Histogram Function**: Separate function to generate and print the histogram.

### Sample Output
```plaintext
Number of occurrences for the alphabets:
a was used – 120 times.
b was used – 90 times.
c was used – 78 times.
...
Histogram of character counts:
a: ■■■■■■■■■■ (120)
b: ■■■■■■■■ (90)
c: ■■■■■■■ (78)
...
