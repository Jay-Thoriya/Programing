
document.getElementById('google').addEventListener('click', function () {
    window.location = "https://google.com"
    window.focus;
})

function loadscript(src, callback) {
    var script = document.createElement("script")
    script.src = src;
    script.onload = function () {
        console.log("loaded script with src: " + src)
        callback(null, src);
    }
    script.onerror = function () {
        console, log(" error loding script with src : " + src)
        callback(new Error('src got some error'));
    }
    document.body.appendChild(script)
}
function Done(src) {
    alert("Script are loaded")
}

loadscript("https://cdn.jsdelivr.net/npm/bootstrap@5.3.0-alpha1/dist/js/bootstrap.bundle.min.js", Done())
