def convert_to_proper_date_and_print(day, month, year):
    day += 1
    if (month == 1 or month == 3 or month == 5 or month == 7 or month == 8 or month == 10 or month == 12):
        if day > 31:
            day = 1
            month += 1
    elif month == 2:
        if year % 4 != 0:
            if day > 28:
                day = 1
                month += 1
            else:
                if day > 29:
                    day = 1
                    month += 1
        else:
            if day > 28:
                day = 1
                month += 1
    else:
        if day > 30:
            day = 1
            month += 1
            year += 1
    
    if month > 12:
        day = 1
        month = 1
        year += 1
    print(f"The next date [yyyy-mm-dd] is: {year}-{month}-{day}")


year = int(input("Input a year: "))
month = int(input("Input a month [1-12]: "))
day = int(input("Input a day: [1-31]: "))

#checks
if day > 28 and month == 2 and year % 4 != 0:
    print(f"{year} is not a leap year! Try again!")
elif day > 31 or day <= 0:
    print(f"Day cannot be negative or higher than 31! Try again!")
elif month > 12 or month <= 0: 
    print(f"Month cannot be negative or higher than 12! Try again!")

#convert to a proper date
else:
    convert_to_proper_date_and_print(day,month,year)

