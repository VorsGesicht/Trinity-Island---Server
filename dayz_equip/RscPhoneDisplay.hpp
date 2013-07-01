// Generated by unRap v1.06 by Kegetys

class RscPhoneDisplay {
	access = ReadAndWrite;
	idd = 12;
	enableSimulation = 1;
	enableDisplay = 1;
	movingEnable = 0;
	
	class controlsBackground {};
	
	class controls {
		class RscButton_1600 : RscButton {
			idc = 1600;
			text = "1";
			x = 0.379939;
			y = 0.714465;
			w = 0.0635259;
			h = 0.0469146;
		};
		
		class RscButton_1601 : RscButton {
			idc = 1601;
			text = "4";
			x = 0.381459;
			y = 0.771797;
			w = 0.0635259;
			h = 0.0469146;
		};
		
		class RscButton_1602 : RscButton {
			idc = 1602;
			text = "7";
			x = 0.387538;
			y = 0.829129;
			w = 0.0635259;
			h = 0.0469146;
		};
		
		class RscButton_1603 : RscButton {
			idc = 1603;
			text = "*";
			x = 0.396657;
			y = 0.884338;
			w = 0.0635259;
			h = 0.0469146;
		};
		
		class RscButton_1604 : RscButton {
			idc = 1604;
			text = "3";
			x = 0.553192;
			y = 0.718711;
			w = 0.0635259;
			h = 0.0469146;
		};
		
		class RscButton_1605 : RscButton {
			idc = 1605;
			text = "6";
			x = 0.551672;
			y = 0.778167;
			w = 0.0635259;
			h = 0.0469146;
		};
		
		class RscButton_1606 : RscButton {
			idc = 1606;
			text = "9";
			x = 0.544073;
			y = 0.831252;
			w = 0.0635259;
			h = 0.0469146;
		};
		
		class RscButton_1607 : RscButton {
			idc = 1607;
			text = "#";
			x = 0.539514;
			y = 0.884338;
			w = 0.0635259;
			h = 0.0469146;
		};
		
		class RscButton_1608 : RscButton {
			idc = 1608;
			text = "0";
			x = 0.468085;
			y = 0.880091;
			w = 0.0635259;
			h = 0.0469146;
		};
		
		class RscButton_1609 : RscButton {
			idc = 1609;
			text = "8";
			x = 0.468085;
			y = 0.829129;
			w = 0.0635259;
			h = 0.0469146;
		};
		
		class RscButton_1610 : RscButton {
			idc = 1610;
			text = "5";
			x = 0.468085;
			y = 0.778167;
			w = 0.0635259;
			h = 0.0469146;
		};
		
		class RscButton_1611 : RscButton {
			idc = 1611;
			text = "2";
			x = 0.468085;
			y = 0.725082;
			w = 0.0635259;
			h = 0.0469146;
		};
		
		class RscButton_1612 : RscButton {
			idc = 1612;
			text = "send";
			x = 0.378419;
			y = 0.631652;
			w = 0.0802433;
			h = 0.0702721;
		};
		
		class RscButton_1613 : RscButton {
			idc = 1613;
			text = "end";
			x = 0.541034;
			y = 0.633775;
			w = 0.0802433;
			h = 0.0702721;
		};
		
		class RscButton_1614 : RscButton {
			idc = 1614;
			text = "Screen";
			x = 0.392097;
			y = 0.206969;
			w = 0.215502;
			h = 0.382414;
		};
	};
	
	class objects {
		class GPS : RscObject {
			idc = 106;
			type = 82;
			inBack = 0;
			enableZoom = 0;
			moving = 0;
			scale = 1.5;
			position[] = {0, 0, 0.25};
			direction[] = {0, 1, 7.2};
			up[] = {0, 0, -1};
			zoomDuration = 1;
			waitForLoad = 0;
			onMouseButtonClick = "_this call usePhone;";
			onObjectMoved = "_this call movePhone;";
			model = "\dayz_equip\models\phone.p3d";
			x = 0.22;
			xBack = 0.72;
			y = 0.925;
			yBack = 0.5;
			z = 0.22;
			zBack = 0.12;
		};
	};
};