const char MAIN_page[] PROGMEM = R"=====(
<!DOCTYPE html>
<html>
<head>
<style>
body {
  background-color: #707070;
  font-family: Arial, Helvetica, sans-serif;
  color: white;
}
h1, h3 {
  text-align:center;
}
hegnav {
  position:relative;
}
form {
  position:absolute;
}
.scform {
  border: 2px solid royalblue;
  border-radius: 8px;
  padding: 8px;
  top:50%;
  left:13%;
}
.cvform{
  border: 2px solid lime;
  border-radius: 8px;
  padding: 8px;
  top:50%;
  left:43%;
}
.csform{
  border: 2px solid tomato;
  border-radius: 8px;
  padding: 8px;
  top:50%;
  left:70%
}
.button {
  border: none;
  border-radius: 12px;
  color: white;
  padding: 15px;
  text-align: center;
  text-decoration: none;
  display: inline-block;
  font-size: 16px;
  margin: 4px 2px;
  cursor: pointer;
}
.scbutton{
  background-color: royalblue; 
}
.cvbutton{
  background-color: lime;
}
.csbutton{
  background-color: tomato;
}

</style>
</head>
<body>
<h3>ESP32 web server demo</h3>
<h1>HEG Pre-Alpha Web Nav</h1>

<div id="HEG_NAV">
  <form class="scform" method="get" action="/sc">StateChanger Demo: <button class="button scbutton" type="submit">GO</button></form><br>
  <form class="cvform" method="get" action="/listen">Canvas Demo: <button class="button cvbutton" type="submit">GO</button></form><br>
  <form class="csform" method="get" action="/connect">Connection Settings: <button class="button csbutton" type="submit">GO</button></form><br>
</div>

</body>
</html>
)=====";