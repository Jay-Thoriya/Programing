let DigitalClock = ()=>{

    let CurrentDate = new Date();
    let hr = CurrentDate.getHours();
    let mint = CurrentDate.getMinutes();
    let sec = CurrentDate.getSeconds();
    let session = "AM";


    if(hr == 0){
        hr = 12;
    }
    if(hr > 12){
        hr = hr - 12 ;
        session = "PM";
    }

    hr = ( hr < 10) ? "0" + hr : hr;
    mint = ( mint < 10) ? "0" + mint : mint;
    sec = ( sec < 10) ? "0" + sec : sec;

    let formatTime = `${hr} : ${mint} : ${sec} ${session}`;

    let clock = document.getElementById("clock");
    clock.innerText = formatTime;

    setInterval(DigitalClock,1000)
}

DigitalClock();
