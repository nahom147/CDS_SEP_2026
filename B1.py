x = 'my friend om is in class 12th. om is a good boy and om is a good singer. om leads the national team my friend om is in class 12th. om is a good boy and om is a good singer. om leads the national team'

i = x.find('om')

while i != -1:
    print(i)
    i = x.find('om', i+1)