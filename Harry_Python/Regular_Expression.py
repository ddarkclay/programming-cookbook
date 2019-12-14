import re
data = "At the age of 29, Jamsetji Tata worked injgin his father's company. " \
       "In 1870 with Rs.21,000 capital, he found a trading company grant. " \
       "Furtherrr he bought a bankrupt oil mill at Chinchpokli and converted it into a cotton mill, " \
       "under the name Alexandra Mill which he sold ininiiiin profit after 2 years. " \
       "In 1874, he set up another cotton mill at Nagpur named as Empress Mill. " \
       "He dreamed of achieving 4 goals 45323-6434 , setting up an iron and steel company, an unique hotel, " \
       "a world-class learning institution and a hydro-electric plant. " \
       "During his lifetime, in 1903, the Taj Mahal in Hotel at Colaba waterfront was opened making " \
       "it the first hotel with electricity in India"

mob_no = "+9148537943039,+998955348439,+912984948554,+915462435245,+91893488," \
         "+91934898,+943857298217,+914531453334,+914354564433,+914353245566," \
         "+9943565625742,+925644266572,+913447655,+917656754324,+983455754671,"

# patt = re.compile(r'....ing')
# patt = re.compile(r'the')
# patt = re.compile(r'^At')
# patt = re.compile(r'India$')
# patt = re.compile(r'in{2}')
# patt = re.compile(r'ter*')
# patt = re.compile(r's*t*r')
# patt = re.compile(r'her{3}')
# patt = re.compile(r'(in){2}')
# patt = re.compile(r'in{1}|(tion){1}')

# Speacial Sequence
# patt = re.compile(r'\AAt')
# patt = re.compile(r'\bcompany')
# patt = re.compile(r'ant\b')
patt = re.compile(r'\d{5}-\d{4}')

#Selecting mobile Numbers which starts with +91 and 10 digit Number
# no = re.compile(r'[+91]{3} [0-9]{12}')

matches = patt.finditer(data)
for match in matches:
    print(match)
    print(data[580:584])

# no_matches = no.finditer(mob_no)
# for match in no_matches:
#     print(match)