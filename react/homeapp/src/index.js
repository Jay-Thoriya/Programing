// var React = require('react');
// var ReactDOM = require('react-dom');

import React  from 'react';
import ReactDOM from 'react-dom';
const currentDate = new Date().toLocaleDateString();
const currentTime = new Date().toLocaleTimeString();

const fname = "jay";
const lname = "Thoriya";

ReactDOM.render( 
[
<h1>My frist name is {fname} and last name is {lname} .</h1> ,
<p>Today Date is {currentDate}</p>,
<p> Current Time is {currentTime}</p>
],
document.getElementById('root'))