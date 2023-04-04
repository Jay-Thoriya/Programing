
function Card(props) {
    return (
        <>
            <div class="card ">
                <img src={props.imgsrc} class="card-img-top" alt="img" />
                <div class="card-body">
                    <h5 class="card-title"> A Netflix Orignal Series </h5>
                    <p class="card-text">{props.sname}</p>
                    <a href={props.link} class="btn btn-primary" target='_blank' rel="noreferrer" >Watch Now </a>
                </div>
            </div>

        </>
    );
}

export default Card;