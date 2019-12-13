const char help_page[] PROGMEM= R"=====(
<!DOCTYPE html>
    <html>
    <head>
    </head>
    <body>
        <div id="header">
        <h1> Help page </h1>
        </div>
        <div id="s0">
        <h3> Section 0: Quick Start Guide </h3>
        <h4> 0. Find the HEG WiFi! </h4>
        <p>
        First thing's first. <br>
        <br>
        1. Power up your HEG by plugging it into your computer or plugging a battery in.<br>
        2. Open up your WiFi signal list and look for "My_HEG". Connect with the password "12345678".<br>
        3. Depending on your OS, open up Chrome or Firefox (recommended) and enter "http://esp32.local" or "http://192.168.4.1" if that doesn't work. This will bring you to a web interface.<br>
        4. Check out the Canvas demo and see if the HEG LEDs come on when you hit start!<br>
        <br>
        You may also connect your HEG through your local WiFi and access it from your main network, enabling online features.<br>
        <br>
        From the main page, go to "Connection Settings" or /connect. The easiest way to get online is to enter your local WiFi name and password, which can be seen<br>
        via scan results at the bottom of the page. Just type in these to pieces of information and hit connect. You can now connect to the ESP32 from your main router<br>
        either via http://esp32.local or an automatically assigned IP address you can find in your router's interface. <br>
        <br>
        You can also assign a "Static IP" if you know the gateway IP and subnet mask, and know an unused local IP address you can assign to the ESP32. We also have a <br>
        "Suggest IP" mode which, when you type in the SSID and password, will connect then disconnect to that router and then suggest you an IP. This is done from the <br>
        default ESP32 access point from the /connect page. when you reconnect to the access point. There is some jank depending on the type of router you connect to,<br> 
        so try a few times if it does not work at first. You cannot connect to a 5GHz router on the ESP32.<br>
            </p>
        <h4> 0a. Your first session, tips and important considerations </h4>
        <p>
        Make sure the HEG sensor is firmly flush against your forehead so you can feel the LEDs and photosensor <br>
        pressing against you but without hurting. You must be in dim indirect lighting for best results.<br>
        <br>
        The easiest way to test your HEG is through our web API. Just go to the<br>
        Web demo from the main page or /webDemo and hit the "Start HEG" button!<br>
        - Chrome or Firefox work the most consistently. <br>
        - We are working on full cross-browser compatibility.<br>
        <br>
        However, you may soon find that after a few seconds, no data comes through, or you get weird <br>
        negative values or giant oscillations on the graph. This is where you remember you're using a <br>
        developer product that isn't always consistent if you don't know what you're supposed to do.<br>
        <br>
        Check these conditions when you are not receiving a stable, positive ratio and cannot control the games:<br>
        - Can you see the Red LED flashing when you hit start?<br>
        - Open up the debug console on your driver and verify if you get "HEGduino Events Connected" on the Web Demo page<br>
        - Check your ambient lighting conditions. You must be in a dim or indirectly lit environment.<br>
            -- If the light sensor is not firmly against your forehead and exposed directly to the LEDs or sunlight, it will be saturated and will not output data.<br>
            -- Even a cloudy day can create too much ambient light for the LEDs to be picked up, and you will get a negative or zero ratio.<br>
        - If you use the command 'D' while the sensor is off it will toggle Debug mode and allow you to see the raw values per LED flash.<br>
        - If you are receiving 32767 your ADC is being saturated. There are several reasons this may be the case.<br>
            -- If there is too much ambient light or the LEDs are directly exposed to the photodiode.<br>
            -- Is your forehead sweaty? This can cause moisture to build up and short the sensor temporarily until it dries again.<br>
                --- We recommend taping a screen protector down over the sensor to buffer moisture. <br>
            -- If there is a short or the photodiode is fried<br>
        - If you are receiving -1, this means the ADC is not set up or connected correctly.<br>
        - If you are receiving repeating low values like 64, 84, etc, that means the photodiode output is not being read and may be damaged or not soldered correctly.<br>
        - Check that no solder points or leads are contacting your skin as this will ground out those voltages. Electrical tape is an easy way to cover this up.	<br>	
        </p>
            </div>
            <div id="sh">
            <h3> Safety Precautions and Disclaimers </h3>
            <h4>Safety Guide - Know Your Limits! </h4>
        <p>
        We've been recommended by clinicians and long-time biofeedback practitioners several<br> 
        key conditions to follow when you begin your training to ensure safe and effective results.<br>
        Like any form of exercise, you can strain yourself too much, leading to unpleasant effects <br>
        or fatigue. The HEG can be a powerful learning and interfacing tool when used correctly.<br>
        <br>
        - Your first sessions should be no more than 5 to 10 minutes between breaks. <br>
        - First just try to get a feel for breathing slow, relaxing, focusing, and noticing how your score increases or decreases based on your moment to moment thoughts and movements.<br>
        - Limit your first few days of using the HEG to 30 minutes of practice.<br>
        - You may feel strain or fatigue after doing the exercises for 10 minutes or more, if you do stop and rest.<br>
        - If you "over train" you may get a small headache in the area you trained. This should subside after a few hours or after a night's rest.<br>
            -- In the unlikely event the headache does not subside the next day, you can "train down" by trying to lower your score while sensing that area, or call your doctor as it may be something else.<br>
        </p>
            <h4>Disclaimers</h4>
        This is an experimental product by enthusiasts for enthusiasts, we are not health professionals and assume no risks in how you use this, <br>
        We assert that we have worked to the best of our ability to ensure the safety and enjoyment of our users, whether they are tech savvy or not. <br>
        <br>
        If you have heart or blood pressure problems or are at risk of stroke or other vascular issues, aerobic exercise can help immensely in any form, <br>
        but be cautious when training your brain blood flow as it is a very sensitive and intricate organ. We do not know all of the potential risks <br>
        associated when using a device like the HEG if you have serious health conditions.<br>
        <br>
        If you are experiencing an episode of a mental or brain disorder, HEG or aerobic exercise in general may help as a form of intervention, <br>
        but there are complex risk factors associated and we again cannot make any calls as to the best procedure. Please follow your doctor's <br>
        recommendations and don't put yourself at unnecessary risk.<br>
        <br>
        Please inform us of any positive or adverse reactions you have when using the HEG so we can document it. <br>
        For technical support please create an issue at https://github.com/moothyknight/HEG_ESP32 so we can publicly resolve it to guide future users.<br>
        You may also contact us for questions or technical support at: brewster.joshua1@gmail.com<br>
        <br>
        FDA Disclaimer:<br>
        These statements have not been evaluated by the Food and Drug Administration. These statements are for informational purposes only and are not <br>
        intended as a substitute for medical counseling. This information is not intended to diagnose, treat, cure, or prevent any disease. The author <br>
        and publisher shall have neither liability nor responsibility to any person or entity with respect to any loss, damage, or injury caused <br>
        directly or indirectly by the information contained herein.<br>
        </div>
        <div id="s1">
        <h3> Section 1: Introduction </h3>
        <h4> Welcome to HEG Biofeedback with the Internet of Things! </h4>
        </h3>
        <p>
        This hardware and software package is designed to have a minimum barrier <br>
        for entry for users wanting to use or develop this unique form of brain training. <br>
        Hemoencephalography (HEG) simply means using blood flow signals for feedback<br>
        data from the body while doing certain actions or experiencing different mental<br>
        states.<br>
        <br>
        Hemo - Meaning blood.<br>
        Encephalography - Imaging brain structure through a particular medium.<br>
        <br>
        This device you are using now belongs to particular classification called fNIRS<br>
        or "functional Near-Infrared Spectroscopy" as we are using Red and InfraRed LEDs<br>
        reflected into a light sensor to measure an important component of brain activity.<br>
        It is a reflectance-based pulse oximeter in closest comparison, and we can gather<br>
        the same data, we just use it in a "functional" way to measure overall O2 saturation<br>
        of a particular region of your brain.<br>
        <br>
        The HEG sensor is able to capture signals from about an inch deep in your skull<br>
        wherever it has been placed. This is done mainly on our forehead and the pre-frontal<br>
        cortex as this is the most accessible area, but smaller sensors will allow for <br>
        measuring other parts of the scalp. <br>
        <br>
        The primary usage of these sensors in our case is for direct aerobic exercise for <br>
        your brain. Normally you energize your brain through normal diet and exercise -<br>
        which add fuel and flexibility to your neurons. Aerobic exercise encourages good<br>
        blood flow and stronger capillary development. It not only stretches your back out<br>
        and loosens your limbs up - but your brain too! This causes energy to be more<br>
        available to your system in general and for it to get more used to stress and strain.<br>
        <br>
        Our brain cells require energy to be immediately available to fire. Neurons receive<br>
        their energy on-demand through astrocytes connected to innumerable tiny capillary tubes<br>
        that wrap around your cells in order to sustain them. Stress, poor diet, dehydration,<br>
        or any number of things that can reduce your well-being have some of their strongest<br>
        impacts on brain health due to the incredibly sensitive and intricate ecosystem they form<br>
        in your noggin. <br>
        <br>
        We can see correlations with poor health and poor state of mind directly with HEG by <br>
        massive reductions or even over-activity in normal blood flow levels, as well as improving <br>
        it through HEG-assisted exercise. This has overall benefits to your body and mind - which <br>
        are not really separate. The main benefits are you will feel more aware, quicker on your <br>
        feet, and able to make better choices when your brain is in shape. The directness of this <br>
        procedure seems to extend the benefits of normal exercise to your brain in very profound <br>
        ways, and may shed light some important ideas about the nature of living consciousness and <br>
        memory.<br>
        <br>
        Before you embark, however, it is important to understand the risks and the experimental <br>
        nature of this work. While general exposure to the HEG is safe, you can over-train and give <br>
        yourself headaches or fatigue - kind of like normal exhaustion after a hard exercise. So <br>
        please learn our recommendations and some of the known side-effects when you are first <br>
        starting with HEG brain exercises.<br>
        <br>
        </p>
        </div>
        <div id="s2">
        <h3> Section 2: Web Demo guide </h3>
        <h4> Features! </h4>
        <p></p>
        </div>
        <div id="s3"> 
        <h3> Section 3: Technical Manual </h3>
        <h4> 3a. First time setup. </h4>
        <h4> 3b. Getting connected. </h4>
        <h4> 3c. Debugging and testing signal. </h4>
        </div>
    </body>
    </html>
)=====";