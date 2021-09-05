from twilio.rest import Client


account_sid = 'AC3a4751f994118a4425c3a25b9c5b67ab'
auth_token = '27a5dfbbdab1e45d3727bfcb31ef8c11'
my_cell = '+917587272575'
my_twilio = '+19729458707'

client = Client(account_sid, auth_token)

my_msg = "Your Message Here..."

message = client.messages.create(to=my_cell, from_=my_twilio,
                                     body=my_msg)
