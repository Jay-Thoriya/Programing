const scores = document.querySelector(".Scores")
const highscore = document.querySelector(".highscore")
const startscreen = document.querySelector(".StartScreen")
const GameArea = document.querySelector(".GameArea")
// console.log(GameArea)

startscreen.addEventListener("click",start);
let player ={ speed:5,score:0,HighScore:0};
let incScore = 500;
let Uesr_name = prompt(" Who Is Playing Game ");


let keys = { ArrowUp : false , ArrowDown : false , ArrowLeft : false , ArrowRight : false,
             W:false , A:false , S:false ,D:false}

document.addEventListener("keydown",keyDown)
document.addEventListener("keyup",keyUp)

function keyDown(e){
    e.preventDefault();
    keys[e.key] = true;
    console.log(e.key)
    console.log(keys)
}
function keyUp(e){
    e.preventDefault();
    keys[e.key] = false;
    // console.log(e.key)
}

function IsCollide(a,b){//a=playercar , b=enemycar
    aRect = a.getBoundingClientRect();
    bRect = b.getBoundingClientRect();
    return !((aRect.top > bRect.bottom)||(aRect.left > bRect.right)
     || (aRect.bottom < bRect.top)||(aRect.right < bRect.left))
}

function MoveLines(){
    let lines = document.querySelectorAll('.lines')
    // console.log(lines)
    lines.forEach(function(item){
        if(item.y >= 700){
            item.y -= 750;
        }
        item.y += player.speed;
        item.style.top = item.y + "px";
        
    })
}

function EndGame(){
    player.start = false;
    startscreen.classList.remove('hide');
    startscreen.innerHTML = " Game Over <br> Your Final Score : " + (player.score + 1) + "<br> Press here to restart the Game";
}
function MoveEnemyCar(car){
    let enamy = document.querySelectorAll('.enamy')
    enamy.forEach(function(item){
        if(IsCollide(car,item)){
            console.log("BOOM HIT!")
            EndGame();
        }
        if(item.y >= 750){
            item.y = -300;// second time function call 1(last_car) != 2(first_car)
            item.style.left=Math.floor(Math.random()* 350) + 'px';
        }
        item.y += player.speed;
        item.style.top = item.y + "px";
        
    })
}

function GamePlay(){
    // console.log("NOw game play")
    let car = document.querySelector(".car")
    let road = GameArea.getBoundingClientRect();
    // console.log(road);
    
    if(player.start){
        MoveLines();
        MoveEnemyCar(car);
        if((keys.ArrowUp || keys.W) && player.y > (road.top + 70) ){ player.y -= player.speed}
        if((keys.ArrowDown || keys.S) && player.y < (road.bottom - 80) ){ player.y += player.speed}
        if((keys.ArrowLeft || keys.A) && player.x > 0 ){ player.x -= player.speed}
        if((keys.ArrowRight || keys.D) && player.x < (road.width - 55)){ player.x += player.speed}

        car.style.top = player.y +'px';
        car.style.left = player.x +'px';

        window.requestAnimationFrame(GamePlay); 
        // console.log(player.score++);

        player.score++;
        scores.innerText = "Score : " + player.score   ;
        highscore.innerText = Uesr_name + " hightscore : "+ localStorage.getItem(Uesr_name);

        // console.log(player.speed)
        if(player.score > incScore){
            player.speed += 1;
            incScore += 1000;
        }
        for(x=0;x>localStorage.length;x++){
            if(Uesr_name != localStorage.getItem(x)){
                localStorage.set(Uesr_name,null);
            }
        }
        if(player.score > localStorage.getItem(Uesr_name)){
            localStorage.setItem(Uesr_name,player.score);
            player.HighScore = player.score;
            console.log(player.HighScore)
        }
        // console.log(player.score)
        // console.log(player.HighScore)
        // console.log(player.speed)
    }
}

function start(){
    // GameArea.classList.remove('hide');
    startscreen.classList.add('hide');
    GameArea.innerHTML = "";
    player.start = true;
    player.score = 0;
    player.speed = 5;
    incScore = 500;
    window.requestAnimationFrame(GamePlay);

    for(x=0;x<5;x++){
    let roadLine = document.createElement('div');
    roadLine.setAttribute('class','lines');
    roadLine.y = (x*150)
    roadLine.style.top = roadLine + "px";
    GameArea.appendChild(roadLine)
    }
    
    let car = document.createElement('div');
    car.setAttribute('class','car');
    // document.body.appendChild('car')
    // document.getElementById("Garea").appendChild(car);
    // document.body.GameArea.appendChild('car');
    GameArea.appendChild(car)

    player.x =car.offsetLeft;
    player.y =car.offsetTop;

    for(x=0;x<3;x++){
        let EnamyCar = document.createElement('div');
        EnamyCar.setAttribute('class','enamy');
        // EnamyCar.y = (x*150);
        EnamyCar.y = ((x+1)*350) * -1; // give the nagative value 1time (0)=-350,(1)=-700...
        EnamyCar.style.top = EnamyCar.y + "px";
        EnamyCar.style.backgroundColor = randomEnemyCar();
        EnamyCar.style.left=Math.floor(Math.random()* 350) + 'px';
        GameArea.appendChild(EnamyCar)
    }
    
}

function randomEnemyCar(){
    // function c(){
    //     let hex = Math.floor(Math.random()*256).toString(16);
    //     return ("0" + String(hex)).substring(-2);//it give list two digit
    // }// coloer code is 0-255 = 256 tostring conver into hex
    // return '#'+c()+c()+c();

    let bgcolor=["#029FD4","#D43702","#1Eff00","#EAEAFF","#FFEA00","#FFFFFF","#AB5252","#DE28D8","#B8255F","#DB4035","#FF9933","#FAD000","#AFB83B","#6ACCBC","#158FAD","#14AAF5","#96C3EB","#884DFF","#AF38ED","#FF8D85","#808080","#CCAC93"];
    return bgcolor[Math.floor(Math.random()*bgcolor.length)];
}