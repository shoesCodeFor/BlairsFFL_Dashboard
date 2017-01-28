# Team Scoring Module for Blairs FFL
import json


# Model the Data
array = '{"players":[{"GSIS":244532, "POS": "RB"}, {"GSIS":2564532, "POS": "RB"}, {"GSIS":53534532, "POS": "QB"}]}'

# Load the data - This will be as a post eventually
data  = json.loads(array)

def sortTeam(myList = [], *args):
    for i in myList['players']:
        # This singles out the player ID
        print i['GSIS']
        # This singles out the Position        
        print i['POS']

# Print to console to debug
# print data['players']

sortTeam(data)

# Directly to one element
#print data['players'][0]['GSIS']