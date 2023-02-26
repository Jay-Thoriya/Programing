
var candies = ['c0','c1', 'c2', 'c3', 'c4,', 'c5'];
const NUM_OF_CANDIES = 6;
const GRID_SIZE =9;

var gameBoard =document.getElementsByClassName('game-board')[0];
var swapbox1 , swapbox2;

function scanRows(){
    var arrayofClasses = [];
    var boxs = document.getElementsByClassName('div');
    for (var rowNum = 0; rowNum < boxs.length; rowNum++) {
        for(var colNum = 0; colNum < boxs.length; colNum++){
            var className = boxs[i].className;
            className = className.replace('box','').trim();
            arrayofClasses.push(className);
        }
       
    }
    
    var countClasses = 0;
    for(var i =1;i<arrayofClasses.length;i++){
        if(arrayofClasses[i]==arrayofClasses[i-1]){
            countClasses++;
        }
        else{
            countClasses = 1;
        }
        if(countClasses >= 3){console.log(countClasses,arrayofClasses[i],i)}
    }
}
function scanBoard(){
    scanRows()
}

function dragover_handler(ev){
    ev.preventDefault();
}

function drop_handler(ev){
    ev.preventDefault();
    swapbox2 = ev.target;
    var proceed = isSwapAllowed(swapbox1,swapbox2);
    if(proceed == true){

        swapBoxes(swapbox1,swapbox2);
        scanBoard();
    }
}

function dragstart_handler(event){
    swapbox1 = event.target;
}

function swapBoxes(box1,box2){
    var classofBox1 = box1.className;
    var classofBox2 = box2.className;
    
    box1.classNmae = classofBox2;
    box2.className = classofBox1;
}

function isSwapAllowed(box1 , box2){
    var id1 = parseInt(box1.dataset.id);
    var id2 = parseInt(box2.dataset.id);

    if(GRID_SIZE%id1===0 && id1-1){
        return false;
    }
    if((id1+1)%GRID_SIZE===0 && id2 == id1+1){

        return false;
    }
    if(id2 == id1+1 || id2 == id1-1 || id2 == id1+GRID_SIZE || id2 == id1-GRID_SIZE){
        return true;
    }
    return false;
}

function createBox(){
    var div = document.createElement('div');
    div.classList.add('box');
}
function Generate_Random_Candies() {
    var boxs = document.getElementsByClassName('box');

    for (var i = 0; i < GRID_SIZE*GRID_SIZE; i++) {
        var c = 'c'+parseInt(Math.random() * NUM_OF_CANDIES);
        createBox(i,c);
        boxs[i].dataset.id =i;
        boxs[i].innerHTML =i;
        boxs[i].classList.add(c);
        boxs[i].draggable = true;
        boxs[i].addEventListener('dragover',dragover_handler)
        boxs[i].addEventListener('drop',drop_handler)
        boxs[i].addEventListener('dragestart',dragstart_handler)
    }
}

function main(){
    Generate_Random_Candies();  
}

main();


