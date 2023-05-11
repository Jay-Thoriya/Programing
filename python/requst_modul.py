import requests

r = requests.get("https://financialmodelingprep.com/api/v3/financial-statement-symbol-lists?apikey=YOUR_API_KEY")
print(r.text)
print(r.status_code)

url = "www.something.com"
moviesData = { 
    "p1":4,
    "p2":5
} 

r2 = requests.post(url=url,moviesData=moviesData)