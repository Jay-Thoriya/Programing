from flask import Flask,render_template
app = Flask(__name__)

@app.route("/")
def hello():
    name="jay"
    return render_template('index.html',name1=name)

@app.route("/jay")
def jay():
    return " Hello jay boi 111"


app.run(debug="True")