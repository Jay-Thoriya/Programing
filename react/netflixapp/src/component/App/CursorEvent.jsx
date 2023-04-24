import { useState } from "react";

function Curesorevent({ children }) {
    const [Position, setPosition] = useState({ x: 0, y: 0 })



    return (
        // <>
        // <div className="outer-circle"  onPointerMove={e => {
        //         setPosition({
        //             x: e.clientX,
        //             y: e.clientY
        //         });
        // console.log(Position.x)
        // console.log(Position.y)
        //     }}>
        //     <div className="circle"
        //     // style={{ transform: `translate(${Position.x}px, ${Position.y}px)` }}
        //     >
        //     </div>
        // </div >
        // </>
        <>
            <div className="outer-circle"
                onPointerMove={e => {
                    setPosition({
                        x: e.clientX,
                        y: e.clientY + window.scrollY
                    });
                    //console.log(window.scrollY)
                }}> {children}
                <div className="circle" style={{
                    top : Position.y - 15 ,
                    left : Position.x - 15 ,
                }} />
            </div>
        </>

    );
}

export default Curesorevent;