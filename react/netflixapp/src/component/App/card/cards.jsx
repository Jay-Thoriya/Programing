import Socialmedia from "./socialmedia/media";

function Card(props) {
    return (
        <>
            <div className="card ">
                <img src={props.imgsrc} className="card-img-top" alt="img" />
                <div className="card-body">
                    <h5 className="card-title"> A Netflix Orignal Series </h5>
                    <p className="card-text">{props.sname}</p>
                    <a href={props.link} className="btn btn-primary" target='_blank' rel="noreferrer" >Watch Now </a>
                    <div className="card-info">
                        <Socialmedia />
                    </div>
                </div>
            </div>

        </>
    );
}

export default Card;