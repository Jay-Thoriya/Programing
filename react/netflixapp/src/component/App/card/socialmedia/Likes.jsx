import { useState } from "react";

function Like(){

  let count = 0 ;
  const [like , setlike] = useState(count);
  function handlercount(){
    setlike(count => count+1);
  }
    //<div class="alert alert-primary" role="alert">
     // This is a primary alert—check it out!
    //</div>
  return( 
      <>
      <div className="likesgroup">
      <h7>{like}</h7>
      <button onClick={handlercount}>
          <img src="heart.png" className="likeImg" alt="like_img"/>
      </button>
      </div>
      </>
  );
  }
  
  export default Like;