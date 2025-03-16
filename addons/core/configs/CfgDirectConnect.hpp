class CfgMainMenuSpotlight {
    class JEF_DirectConnect {
        text = "JEF Main Server"; // Text displayed on the button
        textIsQuote = 0;
        picture = "\x\JEF\core\images\jef-logo.paa";
		action = "connectToServer [""116.202.244.176"", 2302, ""Vanguard93""]"; //This Goes [""IP"", Port, ""Password""]
        actionText = "Connect"; // Tooltip text
        condition = "true"; // Always show this spotlight
    };
};