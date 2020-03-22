class CfgCloudlets
{
	class Default;
	class smokeMissileFast: Default
	{
		interval="0.4 * interval";
		circleRadius=40;//9.3
		circleVelocity[]={0,0.03,0};
		angleVar=1;
		animationName="";
		timerPeriod=1;
		lifeTime=140;
		moveVelocity[]={0.05,0.085,0.05};
		rotationVelocity=0;
		weight=0.052;
		volume=0.04;
		rubbing=0.025;
		size[]=
		{
			"0.0125 * intensity + 7",
			"0.0125 * intensity + 13",
			"0.0125 * intensity + 14",
			"0.0125 * intensity + 16"
		};
		color[]=
		{
			{0.8,0.8,0.8,0.8},
			{0.9,0.9,0.9,0.9},
			{0.9,0.9,0.9,0.75},
			{0.97,0.97,0.97,0.65},
			{0.97,0.97,0.97,0.6},
			{0.98,0.98,0.98,0.6},
			{1,1,1,0}
		};
		animationSpeed[]={1.5,0.5,0.3,0.25,0.25};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=4;
		positionVar[]={5,12,5};
		MoveVelocityVar[]={0.05,0.05,0.05};
		rotationVelocityVar=20;
		sizeVar=1;
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class smokeMissileSlow: smokeMissileFast
	{
		circleRadius=40;
		interval=0.1;
		positionVar[]={4,8,4};
	};
};
class smokeMissileSmokeEffect
{
	class LightExpSmall
	{
		simulation="light";
		type="ExploLight";
		position[]={0,1.3,0};
		intensity=0.0005;
		interval=1;
		lifeTime=0.4;
	};
	class SmokeCloud
	{
		simulation="particles";
		type="smokeMissileFast";
		position[]={0,0.6,0};
		intensity=500;
		interval=0.5;
		lifeTime=2.2;
	};
	class SmokeCloudLinger
	{
		simulation="particles";
		type="smokeMissileSlow";
		position[]={0,0.6,0};
		intensity=20000;
		interval=0.1;
		lifeTime=180;
	};
};