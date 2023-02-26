const main = document.querySelector(".main");
const h1 =document.querySelector("h1");
main.style.width = "600px";
main.style.height = "400px";
main.style.backgroundColor = "black";
main.style.margin ="32px";
// main.style.borderTop="15px solid red"
// main.style.borderLeft="5px solid red"
// main.style.borderRight="5px solid red"
// main.style.borderBottom="15px solid red"

const ball = document.querySelector(".Ball");
const b = {
    x:50,y:20,w:40,h:40,direction_x:3,direction_y:3,ani:{},mover:false
}
ball.style.width=`${b.w}px`;
ball.style.height= `${b.h}px`;
ball.style.backgroundColor="red";
ball.style.borderRadius = "50%";
ball.style.position = "relative";
ball.style.left = `${b.x}px`;
ball.style.top = `${b.y}px`;
main.append(ball);
let ball_color = ["#029FD4","#D43702","#1Eff00","#EAEAFF","#FFEA00","#FFFFFF","#AB5252","#DE28D8","#B8255F","#DB4035",
    "#FF9933","#FAD000","#AFB83B","#6ACCBC","#158FAD","#14AAF5","#96C3EB","#884DFF","#AF38ED","#FF8D85","#808080","#CCAC93"];
let random_color = ball_color[Math.floor(Math.random()*ball_color.length)]


h1.addEventListener('click',()=>{
    if(!b.mover){
        b.ani = requestAnimationFrame(mover);
        b.mover = true;
    }
    else{
        cancelAnimationFrame(b.ani);
        b.mover = false;
    }
    
    
})

let count_r=0;
let count_l=0;
let count_t=0;
let count_b=0;
function mover(){
    let ball_color = ["#029FD4","#D43702","#1Eff00","#EAEAFF","#FFEA00","#FFFFFF","#AB5252","#DE28D8","#B8255F","#DB4035",
    "#FF9933","#FAD000","#AFB83B","#6ACCBC","#158FAD","#14AAF5","#96C3EB","#884DFF","#AF38ED","#FF8D85","#808080","#CCAC93"];
    let random_color = ball_color[Math.floor(Math.random()*ball_color.length)]

    b.x +=b.direction_x;
    b.y +=b.direction_y;
    if(b.x >600-b.w ){ //--> right 
        b.direction_x*=-1;
        ball.style.backgroundColor = random_color;
        // main.style.borderRight=`15px solid ${random_color}`
        // alert(`value of direction_x(LR) : ${b.direction_x} \n value of direction_y(TB) : ${b.direction_y}`);
        if(count_r!=0){
        main.style.borderBottom=`15px solid ${random_color}`
        count_r=0;
        setTimeout(()=>{
            main.style.borderBottom ='15px solid black'
        },900)
        }
        else{main.style.borderTop=`15px solid ${random_color}`,count_r=1;
        setTimeout(()=>{
            main.style.borderTop ='15px solid black'
        },1200)
        }

    }
    
    if(b.x < 0){   /// ----> left 
        b.direction_x*=-1;
        ball.style.backgroundColor = random_color;
        // main.style.borderLeft=`15px solid ${random_color}`
        // alert(`value of direction_x(LR) : ${b.direction_x} \n value of direction_y(TB) : ${b.direction_y}`);
        if(count_l!=0){main.style.borderBottom=`15px solid ${random_color}`,count_l=0;
        setTimeout(()=>{
            main.style.borderBottom ='15px solid black'
        },1800)
        }
        else{main.style.borderTop=`15px solid ${random_color}`,count_l=1;
        setTimeout(()=>{
            main.style.borderTop ='15px solid black'
        },2000)
        }
    }
    if(b.y >400-b.h){ // --->Bottom 
        b.direction_y*=-1;
        // main.style.borderBottom=`15px solid ${random_color}`
        // alert(`value of direction_x(LR) : ${b.direction_x} \n value of direction_y(TB) : ${b.direction_y}`);
        ball.style.backgroundColor = random_color;
        if(count_b==0){main.style.borderRight=`15px solid ${random_color}`,count_b=1
        setTimeout(()=>{
            main.style.borderRight ='15px solid black'
        },1500)}
        else if(count_b==1){main.style.borderLeft=`15px solid ${random_color}`,count_b=2;
        setTimeout(()=>{
            main.style.borderLeft ='15px solid black'
        },200)}
        else{main.style.borderTop=`15px solid ${random_color}`,count_b=0;
        setTimeout(()=>{
            main.style.borderTop ='15px solid black'
        },2000)}
    }
    if(b.y < 0){   // -------> top
        b.direction_y*=-1;
        ball.style.backgroundColor = random_color;
        // main.style.borderTop=`15px solid ${random_color}`
        // alert(`value of direction_x(LR) : ${b.direction_x} \n value of direction_y(TB) : ${b.direction_y}`);
        if(count_t==0){main.style.borderBottom=`15px solid ${random_color}`,count_t=1
        setTimeout(()=>{
            main.style.borderBottom ='15px solid black'
        },2000)}
        else if(count_t==1){main.style.borderRight=`15px solid ${random_color}`,count_t=2;
        setTimeout(()=>{
            main.style.borderRight ='15px solid black'
        },1200)}
        else{main.style.borderLeft=`15px solid ${random_color}`,count_t=0;
        setTimeout(()=>{
            main.style.borderLeft ='15px solid black'
        },400)}
        
    }
    //      B*   R*    T*    B*
    //     (+,-)(-,-)(-,+)(-,-)
    //      L*    T*     R*    B*
    //     (+,-)(+,+)(-,+)(-,-)
    //       T*    L                    B    R
    //     (-,+)(+,+)                (+,-)(-,-)
    ball.style.left = `${b.x}px`;
    ball.style.top = `${b.y}px`;
    if(b.mover){
        b.ani = requestAnimationFrame(mover);
    }
    
}



