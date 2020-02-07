const char webDemoCSS[] PROGMEM = R"=====(
  #gtext {
    z-index: 999;
  }
  body{
    min-width: 700px;
  }
  h1 {
    font-family: Arial, Helvetica, sans-serif;
    height:20px;
  }
  .dummy {
      width:0;
      height:0;
      border:0; 
      border:none;
   }
   .hegapi button{
     width: 100%;
   }
   .hegapi td {
     width: 50%;
   }
   .hegapi input[type=range] {
     width:100%;
   }
   .dattable {
      position: relative;
      table-layout: fixed;
      font-family: Console, Lucida, monospace;
   }
   .dattable th {
      background-color: rgb(54, 54, 54);
      color: chartreuse;
      padding: 5px;
      border: 1px solid white;
      width: 10%;
   }
   .dattable td {
      background-color: rgb(54, 54, 54);
      color: chartreuse;
      padding: 5px;
      border: 1px solid white;
      width: 10%;
   }
  .scoreth { color: honeydew; }
  .canvasContainer {
      position:absolute;
      width: 100%;
      top: 89px;
      height: 500px;
      margin-left: auto;
      margin-right: auto;
      text-align: center;
   }
  .file_wrapper{
    position: absolute;
    color: white;
    cursor: pointer;
    left:     0px;
    top:      100px;
  }
  .vidinput{
    position: absolute;
    right:    0px;
    top:      0px;
  }
  .vidtable {
    width:    20%;
  }
  .vidtable button {
    width:    100%;
  }
  .timeDiv {
    position: absolute;
    margin-left: auto;
    margin-right: auto;
    opacity:0.35;
    left:25%;
    width:50%;
    top: 470px;
  }
  .timeSlider{
    width: 60%;
    margin-left: auto;
    margin-right: auto;
    background-color:rgb(85, 85, 85);
  }
  .timeDiv:hover {
    opacity: 1.0;
  }
  .timeDiv button {
    width: 8%;
  }
  .vidbox {
    position: absolute;
    top:    100px;
    width:  100%;
    height: 430px;
  }
  .vidcss {
    position: absolute;
    height:430px;
    left:22.5%;
    width:55%;
    margin-left: auto;
    margin-right: auto;
    display: block;
  }
  .vidglcss{
    width: 100%;
  }
  .vidbuttons {
    position: absolute;
    color: white;
    height:   20px;
    top:      140px;
  }
  .vidbar {
    text-align:center;
  }
  .vidbar button {
    background-color:rgba(10,10,10,0.3);
    color: white;
    border-color:rgba(54, 54, 54, 0.2);
    font-weight: bolder;
  }
  .vidbar button:hover{
    cursor: pointer;
    background-color:rgb(85, 85, 85)
  }
  .showhide {
    position:absolute;
    opacity: 0.2;
    left:10px;
    top:495px;
  }
  .showhide:hover {
    cursor: pointer;
    opacity: 1.0;
  }
  .scale {
    display: inline-block;
  }
  .scale button {
    width: 100%;
  }
  .webglcss {
    position:  absolute;
    left:      0px;
    width:     100%;
    height:    260px;
    top:       530px;
    min-width: 700px;
   }
   .audiocanvas {
     position:absolute;
     margin-left: auto;
     margin-right: auto;
     top: 100px;
     left: 10%;
     width: 80%;
     min-width: 550px; 
     max-height: 420px;
   }
   .hillapi {
     position:absolute;
     top: 100px;
     min-width: 250px;
   }
   .hillcss {
     width: 80%;
     left: 10%;
     max-height: 440px;
   }
      /**modal styling**/
      .modal {
        position: fixed;
        left: 0;
        top: 0;
        width: 100%;
        height: 100%;
        z-index: 990;

        }
      .modal .overlay {
          position: absolute;
          left: 0;
          top: 0;
          width: 100%;
          height: 100%;
          z-index: 995;
          background: rgba(0, 0, 0, 0);
          
      }
      .modal .modal_content {
          z-index: 999;
          position: absolute;
         
          font-family:Arial, Helvetica, sans-serif;

          top: 50%;
          left: 50%;
          transform: translate(-50%, -50%);
          max-height: 90%;
          overflow: auto;
          background: rgba(0, 78, 131, 0.637);
          color: white;
          padding: 20px;
          box-shadow: 0 1px 5px rgba(0,0,0,0.7);
          text-align: center;
          border-radius: 4px;
          width: 500px; /* This just a default width */
          transition: all 300ms ease-in-out;
      }

          .modal .modal_content > h2 {
              transition: all 300ms ease-in-out;
              color: white;
              font-family: Arial, Helvetica, sans-serif;
              font-size: 1.5em;
              font-weight: 200;
         
              text-align: center;
          }

          .modal .modal_content .buttons_wrapper {
               transition: all 300ms ease-in-out;
              padding: 20px;
          }

      .modal .close_modal {
          position: absolute;
          right: 10px;
          top: 10px;
          cursor: pointer;
          font-size: 18px;
          opacity: 0.5;
          background: none;
          border: none;
          transition: opacity 0.2s ease;
      }

          .modal .close_modal:hover {
              opacity: 0.9;
          }

          .modal2 {
            position: fixed;
            left: 0;
            top: 0;
            width: 100%;
            height: 100%;
            z-index: 990;

            }

      .modal2 .overlay2 {
          position: absolute;
          left: 0;
          top: 0;
          width: 100%;
          height: 100%;
          z-index: 995;
          background: rgba(0, 0, 0, 0);
          
      }

      .modal2 .modal_content2 {
          z-index: 999;
          position: absolute;

          font-family:Arial, Helvetica, sans-serif;

          top: 50%;
          left: 50%;
          transform: translate(-50%, -50%);
          max-height: 90%;
          overflow: auto;
          background: rgba(0, 78, 131, 0.637);
          color: white;
          padding: 20px;
          box-shadow: 0 1px 5px rgba(0,0,0,0.7);
          text-align: center;
          border-radius: 4px;
          width: 700px;
          transition: all 300ms ease-in-out;
      }

          .modal2 .modal_content2 > h2 {
              transition: all 300ms ease-in-out;
              color: white;
              font-family: Arial, Helvetica, sans-serif;
              font-size: 1.5em;
              font-weight: 200;
              text-align: center;
          }

          .modal2 .modal_content2 .buttons_wrapper {
               transition: all 300ms ease-in-out;
              padding: 20px;
          }

      .modal2 .close_modal2 {
          position: absolute;
          right: 10px;
          top: 10px;
          cursor: pointer;
          font-size: 18px;
          opacity: 0.5;
          background: none;
          border: none;
          transition: opacity 0.2s ease;
      }

          .modal2 .close_modal2:hover {
              opacity: 0.9;
          }

          .modal3 {
            position: fixed;
            left: 0;
            top: 0;
            width: 100%;
            height: 100%;
            z-index: 990;
            }

      .modal3 .overlay3 {
          position: absolute;
          left: 0;
          top: 0;
          width: 100%;
          height: 100%;
          z-index: 995;
          background: rgba(0, 0, 0, 0);
          
      }

      .modal3 .modal_content3 {
          z-index: 999;
          position: absolute;
         
          font-family:Arial, Helvetica, sans-serif;

          top: 50%;
          left: 50%;
          transform: translate(-50%, -50%);
          max-height: 90%;
          overflow: auto;
          background: rgba(0, 78, 131, 0.637);
          color: white;
          padding: 20px;
          box-shadow: 0 1px 5px rgba(0,0,0,0.7);
          text-align: center;
          border-radius: 4px;
          width: 500px; /* This just a default width */
          transition: all 300ms ease-in-out;
      }

          .modal3 .modal_content3 > h2 {
              transition: all 300ms ease-in-out;
              color: white;
              font-size: 1.5em;
              font-weight: 200;
         
              text-align: center;
          }

          .modal3 .modal_content3 .buttons_wrapper {
               transition: all 300ms ease-in-out;
              padding: 20px;
          }

      .modal3 .close_modal3 {
          position: absolute;
          right: 10px;
          top: 10px;
          cursor: pointer;
          font-size: 18px;
          opacity: 0.5;
          background: none;
          border: none;
          transition: opacity 0.2s ease;
      }

          .modal3 .close_modal3:hover {
              opacity: 0.9;
          }

  /**Toggle Switch**/
  .switch {
      position: absolute;
      right: 16px;
      top: 95px;
      display: inline-block;
      width: 90px;
      height: 34px;
      z-index: 990;
  }

      .switch input {
          display: none;
      }

  .startslider {
      position: absolute;
      cursor: pointer;
      top: 0;
      left: 0;
      right: 0;
      bottom: 0;
      background-color: #ca2222;
      -webkit-transition: .4s;
      transition: .4s;
      border-radius: 34px;
  }

      .startslider:before {
          position: absolute;
          content: "";
          height: 26px;
          width: 26px;
          left: 4px;
          bottom: 4px;
          background-color: white;
          -webkit-transition: .4s;
          transition: .4s;
          border-radius: 50%;
      }

  input:checked + .startslider {
      background-color: #2ab934;
  }

  input:focus + .startslider {
      box-shadow: 0 0 1px #2196F3;
  }

  input:checked + .startslider:before {
      -webkit-transform: translateX(26px);
      -us-transform: translateX(26px);
      transform: translateX(55px);
  }

  /*------ ADDED CSS ---------*/
  .startslider:after {
      content: 'Off';
      color: white;
      display: block;
      position: absolute;
      transform: translate(-50%,-50%);
      top: 50%;
      left: 50%;
      font-size: 10px;
      font-family: Verdana, sans-serif;
  }

  input:checked + .startslider:after {
      content: 'ON';
  }

  * {
      box-sizing: border-box
  }

  /* Set height of body and the document to 100% */
  body, html {
      width:  100%;
      height: 100%;
      margin: 0;
      background-color: black;
  }

  /* Style tab links */
  .tablink {
      font-family: 'Arial', serif;
      font-weight: bold;
      color: white;
      float: left;
      border: 1px solid rgb(85, 85, 85);
      outline: none;
      cursor: pointer;
      padding: 10px;
      font-size: 1.3em;
      width: 33.33%;
      background-color: black;
  }

    .tablink:hover {
        background-color: rgba(0, 189, 157, 0.644);
    }

    .tabcontent {
        color: white;
        display: none;
        height: 100%;
        font-family: 'Ibarra Real Nova', serif;
    }

  .button {
      font-family: Console, Lucida, monospace;
      color: black;
      float: left;
      border: 1px solid gray;
      outline: none;
      cursor: pointer;
      padding: 14px 16px;
      font-size: 1.6em;
      width: 50%;
      background-color: white;
  }

  .button:hover {
      background-color: rgba(0, 189, 157, 0.644);
  }

  .header {
    width: 50%;
    color: white;
    font-size: .5em;
    text-align: left;
    font-family: 'Ibarra Real Nova', serif;
  }


  input[type=text] {
      width: 100%;
      font-size: 1.5em;
      padding: 14px 16px;
      border: none;
      background-color: rgb(221, 210, 210);
      color: black;
      font-family: 'Ibarra Real Nova', serif;
  }

input[type=range].slider {
  -webkit-appearance: none;
  min-width: 200px;
  width: 100%;
  margin: 8.4px 0;
}
input[type=range].slider:focus {
  outline: none;
}
input[type=range].slider::-webkit-slider-runnable-track {
  width: 100%;
  height: 6.2px;
  cursor: pointer;
  box-shadow: 1px 1px 1px #000000, 0px 0px 1px #0d0d0d;
  background: rgba(0, 141, 255, 0.3);
  border-radius: 0px;
  border: 0px solid #010101;
}
input[type=range].slider::-webkit-slider-thumb {
  box-shadow: 0.8px 0.8px 1.9px rgba(0, 0, 62, 0.67), 0px 0px 0.8px rgba(0, 0, 88, 0.67);
  border: 1.5px solid rgba(0, 30, 0, 0.57);
  height: 23px;
  width: 23px;
  border-radius: 49px;
  background: #E600EE;
  cursor: pointer;
  -webkit-appearance: none;
  margin-top: -8.4px;
}
input[type=range].slider:focus::-webkit-slider-runnable-track {
  background: rgba(71, 173, 255, 0.3);
}
input[type=range].slider::-moz-range-track {
  width: 100%;
  height: 6.2px;
  cursor: pointer;
  box-shadow: 1px 1px 1px #000000, 0px 0px 1px #0d0d0d;
  background: rgba(0, 141, 255, 0.3);
  border-radius: 0px;
  border: 0px solid #010101;
}
input[type=range].slider::-moz-range-thumb {
  box-shadow: 0.8px 0.8px 1.9px rgba(0, 0, 62, 0.67), 0px 0px 0.8px rgba(0, 0, 88, 0.67);
  border: 1.5px solid rgba(0, 30, 0, 0.57);
  height: 23px;
  width: 23px;
  border-radius: 49px;
  background: #E600EE;
  cursor: pointer;
}
input[type=range].slider::-ms-track {
  width: 100%;
  height: 6.2px;
  cursor: pointer;
  background: transparent;
  border-color: transparent;
  color: transparent;
}
input[type=range].slider::-ms-fill-lower {
  background: rgba(0, 102, 184, 0.3);
  border: 0px solid #010101;
  border-radius: 0px;
  box-shadow: 1px 1px 1px #000000, 0px 0px 1px #0d0d0d;
}
input[type=range].slider::-ms-fill-upper {
  background: rgba(0, 141, 255, 0.3);
  border: 0px solid #010101;
  border-radius: 0px;
  box-shadow: 1px 1px 1px #000000, 0px 0px 1px #0d0d0d;
}
input[type=range].slider::-ms-thumb {
  box-shadow: 0.8px 0.8px 1.9px rgba(0, 0, 62, 0.67), 0px 0px 0.8px rgba(0, 0, 88, 0.67);
  border: 1.5px solid rgba(0, 30, 0, 0.57);
  height: 23px;
  width: 23px;
  border-radius: 49px;
  background: #E600EE;
  cursor: pointer;
  height: 6.2px;
}
input[type=range].slider:focus::-ms-fill-lower {
  background: rgba(0, 141, 255, 0.3);
}
input[type=range].slider:focus::-ms-fill-upper {
  background: rgba(71, 173, 255, 0.3);
}
)=====";