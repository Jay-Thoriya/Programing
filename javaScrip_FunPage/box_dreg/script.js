let player = document.querySelector('.player')
let object = document.querySelectorAll('div.object') //__ using network

let color = ['c1', 'c2', 'c3', 'c4,', 'c5'];
let random_color = color[Math.floor(Math.random()*color.length)]


window.addEventListener("mousemove", (e) => {
    let objectbounds = object.getBoundingClientRect();
    let playerbounds = player.getBoundingClientRect();

    player.style.left = e.clientX + "px";
    player.style.top = e.clientY + "px";

    if (playerbounds.bottom >= objectbounds.top &&
        playerbounds.left <= objectbounds.right &&
        playerbounds.right >= objectbounds.left &&
        playerbounds.top <= objectbounds.bottom
    ) {
        player.classList.add(random_color)
    }
    else {

        player.classList.remove(random_color)
    }
})