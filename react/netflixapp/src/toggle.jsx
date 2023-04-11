

function onChangeColor() {
    const cardContainer = document.querySelector('.card-container');
    if (cardContainer.style.backgroundColor === "black") {
      cardContainer.style.backgroundColor = "#77b5fe";
      document.body.style.backgroundColor = "black";
      document.querySelector(".cards").style.color = "white";
    }
    else {
      cardContainer.style.backgroundColor = "black";
      document.body.style.backgroundColor = "#77b5fe";
      document.querySelector(".cards").style.color = "black";
  
    }
  }

function Toggle(props) {
    

    return (<div className="toggle"  >
        <input type="checkbox" id="toggle_checkbox" onChange={onChangeColor}/>
        <label htmlFor="toggle_checkbox">
            <div id="star">
                <div className="star" id="star-1">
                    ★
                </div>
                <div className="star" id="star-2">
                    ★
                </div>
            </div>
            <div id="moon" />
        </label>
    </div>
    );
}

export default Toggle;