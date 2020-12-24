# GasDetectionIOT-Project

### STATEMENT OF PROBLEM:
Safety plays a crucial role in today’s world as accidents are susceptible to happen anywhere. Places which make use of flammable and not easily detectable gases are susceptible to occurrence of accidental fires. The Internet of Things may be a futuristic technology during which interconnection of devices and therefore the Internet is proposed. The automation of the many daily chores has often changed the idea of these words. 
The use of various types of gases has become integral in our daily lives. They have endless applications, ranging from the use of Natural gas for cooking and Compressed Natural gas in automobiles to innumerable gases such as Carbon Monoxide, Town gas, Coal gas, and other forms of Natural gas that are found to play a pivotal part in industries and house hold. Gas monitoring is an underlying and critical requirement in all of the staggering uses of gases. A gas detector is an instrument that is used to continuously monitor and detect hazardous gases and vapors, and most importantly, to generate auditory alarms to alert the people to the existence of these hazards. 
Natural gas is safe and convenient when it is installed and used correctly. Even though we installed the equipment safely and used it correctly sometimes mistakes or accidents may happen, and it may cause a gas leak. Gas leaks can occur anytime. These leaks can lead to physical symptoms and, in some cases, the gas can cause carbon monoxide poisoning in people and animals. A gas explosion can also occur because of gas leakage. Major harm is caused if gas leakage is not detected early. So, gas leakage is a danger and we had to stop it before the gas spreads.
What if you are not available to stop the gas leak. Gas leakages are one of the major reasons behind fires and blast accidents. What happens if you ignored the messages and haven’t heard the alarms set by your smart home. So, now we had to set up a gas leakage detector which not only detects the gas leak but also informs the exhaust fan. So, that the gas can be exhausted automatically. Within the proposed gas detection system, we'll make use of IoT to detect leakage and alert the user along with preventing any longer leakage of the gas. Here we propose an automated gas detection and accident avoider system. The system automatically detects gas leakages. If the leakage is detected system automatically starts exhaust fan. Then the exhaust fan is used to suck the gas out of the room.
It also sends the same time sending out an alert message to turn off the gas supply and also uses a buzzer as an alarm the users. The system efficiently avoids the chances of any fires or blasts which could have been caused due to gas leakage.

### TECHNICAL APPROACH:
The hardware specifications for the project are Heltec WiFi LoRa board, Gas sensor (MiCS-5524), Exhaust fan for exhaust, PIR Relay, Bread board, Buzzer, Jumper wires, 12V Adapter and a power source.
We can detect the gas leakage using the MiCS-5524 gas sensor, which is a robust MEMS sensor for indoor carbon monoxide and natural gas leakage detection. This sensor will be connected to Heltec Wifi LoRa board. This sensor device will continuously monitor the level of Natural gases present in the air. 

 

The device will constantly read the sensor values which digital outputs. While monitoring, if the value of Natural gases in air is within the set limit then the LoRa board LED on the circuit will not glow giving a safe sign and whenever the gas exceeds above the predefined limit then the it will read the digital output of the sensor and give the digital input for the exhaust, LED and buzzer. The LED will glow white and simultaneously the exhaust DC fan and the buzzer will be activated and it gets updated over IOT.

 

The Exhaust fan requires additional electricity or an additional charge from an external power source, so in that case we will be using a 12v adapter and PIR Relay, so that 12v power will be going through the relay and reaching the exhaust fan to work. Then buzzer is connected to the breadboard and through the breadboard the buzzer is connected to heltec lora wifi board.
Now exhaust DC fan and the buzzer will be activated and will run until there is no trace of gas which is detected by the gas sensor. If the natural gases percentage exceeds in the air and then it will give an alarmed message and the buzzer is used to notify if anyone is near the gas leak and so they can stop the leak. 

 
The connections of the various sensors and alarming systems are given in the block diagram below.

 


### PROJECT SUCCESSES:
The main highlight of the project is that the project not only detects the natural gas but also exhausts it safely. This project can be installed in homes or industries.   
This project achieved the goal of natural gas leakage detection and auto exhaust. The main key factor of the project is the sensor will detect any sort of natural gas leakage and it exhausts the harmful natural gas out through the exhaust fan. In the project the natural gas leakage will be detected accurately with the help of MiCS-5524 gas sensor. 
The project has been designed to be a single system so that it is easy for the user to install and switch on the device. The installation process is made easy because it is a single system application.   


The project emphasis on the natural gas detection so that the system can before an explosion occur. The system is so accurate and fast, if the sensor catches a small trace amounts of natural gas in the air then it will alarm all the systems which are exhaust, buzzer, LED and gives a visual alert message on serial monitor.   

UNEXPECTED CHALLENGES:
In the project testing I got an unexpected challenge regarding the natural gas which is available at a gas leakage. To ensure the project’s success rate we had to test the project where the device must detect the gas leak, alert the systems and exhaust the natural gases safely. To do that we have to create an artificial gas leak but there is a slight problem with creating an artificial gas leak, where I cannot use my gas stove to create the leak, which is dangerous. So, I saw the gases involved in natural gas then I figured that natural gas contains some amount of carbon monoxide (CO). So, I found that CO can be found in any heating or burning material. For example, every incense stick contains some amount of carbon monoxide (CO). So, I used those sticks to create an artificial gas leak to test my system. 
To adjust the sound alarm with the amount of gas leak we have to use analog read but to send the analog read values we also need analog write to write the various intensities of the buzzer to alarm but we got an unexpected error in analog read. So, we used digital read and it worked fine with the buzzer and exhaust systems. 

### LESSONS LEARNED:
I learned how to use the gas sensors and how to work efficiently by using them in the project. Now, I can say that I have practical experience in working with the gas sensors. I also learned that there are wide range gas sensors available and for every gas there is a sensor to detect it. The main issue with gas sensors is that they can only detect a particular type of gas but they cannot distinguish or determine which gas they have been detected. If we have gas sensor which detects LPG, natural gas and propane. If the sensor encounters one of these gases, then the sensor will give an alert message saying that it detected one of the three gases, but it cannot say which gas it has been detected. So, if we really want to know which gas has been leaking or which gas has been found then we need to have separate sensors for separate gases.




I learned that we had to use the objects which are in our surroundings to complete the project successfully on our own. As I have mentioned already about it in the above section of unexpected challenges in the project report. I faced some difficulties in testing the project because we have to have a gas leak in order to test it and we need to create an artificial gas leak to test the project but after I have seen the components of natural gas in the internet and there is carbon monoxide as one of the major components of the natural gas. In our day to day life we find carbon monoxide gas everywhere. For example, like clothes dryers, water heaters, furnaces or boilers, fireplaces, both gas and wood burnings, gas stoves, ovens, motor vehicles, grills, generators, power tools, lawn equipment etc. I also found out that the incense sticks we use release a trace amounts of carbon monoxide, then I have decided to use the incense sticks which release carbon monoxide in trace amounts. I used these sticks because not only they are safe but also they release only trace amounts of carbon monoxide, so, if the sensor detects these trace amounts of carbon monoxide then the system can easily detects the natural gas leakage if it occurs.  
By this I learned how should we solve our problems and how to find new methods to solve the problems. To complete any project, the problem-solving skills are as important and necessary as programming skills.

### Recommendations:
The IOT system can be connect to the gas stove to check whether the gas stove is switched on or switched off, if the gas stove is witched off then the exhaust will work as usual but if the gas stove is switched on and the gas leak is happening then the IOT system sends a signal to switch off the stove so that their will be no further gas leakage and also the exhaust fan will be used to exhaust the remaining natural gas to avoid any further issues or problems. 

We can also make an app to check our natural gas systems. If there is a gas leakage, then we will be getting an SMS alert to our mobile and we will set a buzzer near the natural gas installation systems. So, that if there is a gas leakage then we get an SMS and also an alarm which has been set in our kitchens.  The IOT system will send an alert message to the user’s phone via an app. The app can have multiple users for a single IOT device and also multiple IOT devices can be set everywhere in the home where there is a usage of natural gas. So that the user can find which system has been leaking the gas and the user will also get alert message regarding the systems name and location which are already set by user.



