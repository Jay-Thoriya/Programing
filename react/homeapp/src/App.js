
import './App.css';

import './index.css';
const currentDate = new Date(2023, 3, 2, 7).toLocaleDateString();
const currentTime = new Date(2023, 3, 2, 7).toLocaleTimeString();


const night = {
    backgroundImage: 'url("https://blog.dana-farber.org/insight/wp-content/uploads/2016/09/NIght-Scene-with-Moon.jpg")',
}
const noon = {
    backgroundImage: 'url("https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQd4aY3Yk1VaTSOPcCmcwc0DkL-GJf--mvm1w&usqp=CAU")',

}
const mornig = {
    backgroundImage: 'url("https://www.google.com/imgres?imgurl=https%3A%2F%2Fstatic.tnn.in%2Fphoto%2Fmsid-95369526%2Cimgsize-491555%2Cwidth-100%2Cheight-200%2Cresizemode-75%2F95369526.jpg&imgrefurl=https%3A%2F%2Fwww.timesnownews.com%2Flifestyle%2F9-lovely-good-morning-images-and-quotes-for-your-whatsapp-status-article-95369526&tbnid=uNB3bB1Ues2pJM&vet=12ahUKEwjE6sXSsb39AhUzw3MBHQ0MAP0QMygXegUIARCOAg..i&docid=e9V1Z88ruBV4jM&w=1920&h=1080&q=mornigimages&ved=2ahUKEwjE6sXSsb39AhUzw3MBHQ0MAP0QMygXegUIARCOAg")',
}

let greeting = '';
function timeing() {
    if (currentDate >= 1 && currentDate < 12) {
        greeting = 'Good Mornig';
        return mornig;
    }
    else if (currentDate >= 12 && currentDate < 19) {
        greeting = 'Good After noon';
        return noon;
    }
    else {
        greeting = 'Good Night';
        return night;
    }

}
function App() {
  return (
    <div style={timeing()}>
        <p >Hello Sir , {greeting}</p> 
        <p>Today Date is {currentDate}</p>
        <p> Current Time is {currentTime}</p>
    </div>
  );
}

export default App;
