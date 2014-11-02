class IGUIBack
{
	access = 0;
	background = 1;
	type = 0;
	style = 0;
	idc = -1;
	colorBackground[] = {0,0,0,0.5};
	colorShadow[] = {0,0,0,0.5};
	colorText[] = {1,1,1,0.5};
	text = "";
	fixedWidth = 0;
	x = 0;
	y = 0;
	h = 0;
	w = 0;
	shadow = 1;
	font = "puristaMedium";
	SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	moving = 1;
};

class RscPicture
{
	access = 0;
	type = 0;
	style = 0x30 + 0x800;
	idc = -1;
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};
	font = "puristaMedium";
	SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0)";
	lineSpacing = 0;
	text = "";
	fixedWidth = 0;
	shadow = 0;
	x = 0;
	y = 0;
	w = 0.2;
	h = 0.15;
};

class RscProgress 
{ 
	type = 8; 
	style = 0; 
	colorFrame[] = {0,0,0,0}; 
	colorBar[] = {1,1,1,1};
	texture = "#(argb,8,8,3)color(1,1,1,1)";
	shadow = 0;
	x = 0;
	y = 0;
	w = 0;
	h = 0;
}; 	