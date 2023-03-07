// var React = require('react');
// var ReactDOM = require('react-dom');

import React from 'react';
import ReactDOM from 'react-dom';
import * as cal from './App'

ReactDOM.render( 
    <>
        <ul>
            <li> The sum of two number is {cal.default(5,5)}</li>
            <li> The sub of two number is {cal.Sub(5,5)}</li>
            <li> The mal of two number is {cal.Mal(5,5)}</li>
            <li> The div of two number is {cal.Div(10,5)}</li>
        </ul>
    </>
    ,document.getElementById('root'))