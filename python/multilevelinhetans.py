class Grendfather :
    age = 70
    hobby = "play cricekt"


class Father(Grendfather):
    age = 45
    
    def ishobby():
        return f"yes ! i have play cricets ."

class Sun(Father):
    age = 14;
    
    def ishobby():
        return f"ohh nice it is over writing ."

#print(jay.ishobby())

jay = Grendfather
print(jay.age)
jay = Father
print(jay.age)
jay = Sun
print(jay.age)