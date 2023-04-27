import SocialMedia from "./socialMedia/media";

function Card(props) {
    return (
        <>
            <div className="card ">
                <img src={props.SeriesImgSRC} className="card-img-top" alt="img" />
                <div className="card-body">
                    <h5 className="card-title"> A Netflix Original Series </h5>
                    <p className="card-text">{props.SeriesName}</p>
                    <a href={props.link} className="btn btn-primary" target='_blank' rel="noreferrer" >Watch Now </a>
                    <div className="card-info">
                        <SocialMedia id={props.id} />
                    </div>
                </div>
            </div>

        </>
    );
}

export default Card;