import SocialMedia from "./socialMedia/media";

function Card(props) {
    //console.log(" proprs ",   props);
    return ( 
        <>
            <div className="card ">
                <img src={props.Images[0]} className="card-img-top" alt="img" />
                <div className="card-body">
                    <h5 className="card-title"> A Netflix Original Series </h5>
                    <p className="card-text">{props.Title}</p>
                    <div className="card-info">
                        <SocialMedia id={props.imdbID} like={props.imdbVotes} rating={props.imdbRating}/>
                    </div>
                </div>
            </div>
        </> 
    );
}

export default Card;