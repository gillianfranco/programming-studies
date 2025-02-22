def toFahrenheit(celsius):
    return ((9 * celsius) / 5) + 32

celsius_temperature = float(input('Enter a Celsius temperature: '))
print('---> In Fahrenheit, it\'s {} degrees'.format(toFahrenheit(celsius_temperature)))