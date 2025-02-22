days = int(input('Enter the number of days: '))
hours = int(input('Enter the number of hours: '))
minutes = int(input('Enter the number of minutes: '))
seconds = int(input('Enter the number of seconds: '))

calculation = (days * 24 * 3600) + (hours * 3600) + (minutes * 60) + seconds

result = '\nThe calculation of {} day(s), {} hour(s), {} minute(s) and {} second(s) is {}.'.format(days, hours, minutes, seconds, calculation)

print(result)
