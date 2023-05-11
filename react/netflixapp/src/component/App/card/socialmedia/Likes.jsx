import { useState } from "react";

function Like(props){
  //console.log(props.like)
  let count ;
  
  const [like , setLike] = useState(count);
  function handlerEvent_Start(){
    setLike(props.like);
  }

  function HandlerEvent_end(){
    setLike("");
  }
  
  return( 
      <>
      <div className="likesGroup">
      <button onMouseEnter={handlerEvent_Start}  onMouseLeave={HandlerEvent_end}>
          <img src="heart.png" className="likeImg" alt="like_img"/>
      </button>
      <h7>{like}</h7>
      </div>
      </>
  );
  }
  
  export default Like;