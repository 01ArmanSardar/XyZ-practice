//html form, audio and video
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>htmlForm</title>
</head>

<body>
    <!--html kono aktah from create korteh <form action=""></form> tag tah likthe hoi,  action attribute a kono aktah page bah er file er address takbhe ,amrah from ei jeh data gulu submit korbho seh data gulu action button a jeh link tah takbhe seh link a chole jabhe ,abong sh unojaie kaj korbhe -->
    <form action="">
        <!-- input</> tag tah use korah hoi form er moddeh input neor jonno,input value tah kon type er seh jonno type atrribute likhe ,text hole text, number holeh number ,password holeh password etc.  -->
        <input type="text" placeholder="type your name" />
        <br>
        <!-- kono aktah form a amrah thik ki type er value input dibho setar hits deor jonno plaxeholder attribute use koreh hints tah die dibho -->
        <input type="number" placeholder="type your contact number" />
        <br>
        <!-- form er moddeh akhebareh jeh value akebarei lagbhe nah holeh noi, seh valuer samneh required attribute tah likteh hobhe -->
        <input type="email" placeholder="type your email" required />
        <br>
        <input type="password" placeholder="type your password" required />
        <br>
        <input type="date" />
        <br>
        <!-- form tah submit korteh input type tah hobhe submit ,ar submit button tah website a kih name a show korabho tar jonno value attribute tah likhe kichu aktah likhe dithe hobhe-->
        <input type="submit" value="login" />
    </form>
    <!-- AUDIO  -->
    <!-- audio add korar jonno audio tag tah use korteh hobhe,ar audio tah thik moto kaj koranor jonno controls attribute tah use korteh hobhe ,ar automaticaly play korar jonno autoplay attribute tah use korteh hoi  -->
    <audio controls >
        <source src="audio.mp3" type="audio/mp3" />
    </audio>
    <!-- VIDEO -->
    <video controls >
        <source src="video.mp4" type="video/mp4" />
    </video>
</body>

</html>
