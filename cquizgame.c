#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void show_record();
void reset_score();
void help();
void edit_score(float , char []);
int main()   //start 'main function'
     {
     int countr,r,r1,count,i,n;
     float score;
     char choice;
     char playername[20];

     mainhome:   //start 'mainhome'
     system("cls");
     printf("\t\t\tC PROGRAM QUIZ GAME\n");
     printf("\n\t\t________________________________________");
     printf("\n\t\t\t   WELCOME ");
     printf("\n\t\t\t      to ");
     printf("\n\t\t\t   THE GAME ");
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t   BECOME A MILLIONAIRE!!!!!!!!!!!    ") ;
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t > Press S to start the game");
     printf("\n\t\t > Press V to view the highest score  ");
     printf("\n\t\t > Press R to reset score");
     printf("\n\t\t > press H for help");
     printf("\n\t\t > press Q to quit");
     printf("\n\t\t________________________________________\n\n");
     choice=toupper(getch());
     if (choice=='V')
	{show_record();goto mainhome;}
     else if (choice=='H')
	{help();getch();goto mainhome;}
	else if (choice=='R')
	{reset_score();getch();goto mainhome;}
	else if (choice=='Q')
	exit(1);
    else if(choice=='S')
    {
     system("cls");

    printf("\n\n\n\n\n\n\n\n\n\n\t\t\tResister your name:");
     gets(playername);

    system("cls");
	printf("\n ------------------  Welcome  **%s**   to C Program Quiz Game --------------------------",playername);
    printf("\n\n\n Here are some tips you might wanna know before playing:");
    printf("\n -------------------------------------------------------------------------");
    printf("\n >> There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 5 questions to test your");
    printf("\n    knowledge about subject. You are eligible to play the game if you give atleast 2");
    printf("\n    or more right answers, otherwise you can't proceed further to the Challenge Round.");
    printf("\n >> Your game starts with CHALLANGE ROUND.");
    printf("\n    in this round there are 10 questions are given");
    printf("\n    Each right answer will be awarded $100,000!");
    printf("\n    By this way you can win upto ONE MILLION cash prize!!!!!..........");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.");
    printf("\n >> You will be asked questions continuously, till right answers are given");
    printf("\n >> No negative marking for wrong answers!");
    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf("\n\n\n Press Y  to start the game!\n");
    printf("\n Press any other key to return to the main menu!");
	    
    if (toupper(getch())=='Y')
		{ goto home;}
	else
		{ goto mainhome;system("cls");}  //close 'mainhome'

     home:              // start 'home'
     system("cls");     
    char ch;
    printf("\n\n\n\t\t");
	printf("Enter your option in which subjetc like most\n\n\n");
	printf("\t\tPress A. for   Physics subject\n");
	printf("\t\tPress B. for   Chemistry subject\n");
	printf("\t\tPress C. for   Biology subject\n");
	printf("\t\tPress D. for   Computer Science\n");
	printf("\t\tPress E. for   Sports\n");
	printf("\t\tPress F. for   History Subject\n");
	printf("\t\tPress G. for   General knowledge\n");
	printf("\t\tPress H. for   Miscellaneous\n");
	printf("\n\n\t\tEnter your choice");
	printf("\t\t for go back main menu press 'Z'\n\n");
	ch=toupper(getch());
	if(ch=='Z')
	{  goto mainhome;}
	switch(ch)   //start 'main switch'
	{
	 case 'A':    //start quiz for 'histry' 
	 	
     count=0;
     for(i=1;i<=5;i++)   //start 'for loop 1'
     {
    system("cls");
     r1=i;
    printf("\n\n\t Welcome in Physics subject \n\n");  
     switch(r1)    
		{             //start 'switch 1'
		case 1:
		printf("\n\n The rate of change of momentum of body is equal to the resultant:");
		printf("\n\nA.Energy\n\nB.Power\n\nC.Force\n\nD.Implse");
		if (toupper(getch())=='C')
 			{ printf("\n\nCorrect!!!");count++;
			    getch();  break; }
		else
		    { printf("\n\nWrong!!! The correct answer is C.Force");
		      getch(); break;}
		      
        case 2:
		printf("\n\n\nThe SI unit of machanical energy..");
		printf("\n\nA.Watt\n\nB.Joule-Second\n\nC.Joule\n\nD.Newton");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");count++;
			getch();break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Joule");
		       getch();break;}

        case 3:
		printf("\n\n\nNewton law of motion do not hold good for objects..");
		printf("\n\nA.at rest\n\nB.Moving with velocity comprable to light\n\nC.Moving slowly\n\nD.Moving with high velocity");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");count++;
	         getch();break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Moving with velocity comprable to light");
		       getch();break;}

        case 4:
		printf("\n\n\nThe main source of energy in sun...");
		printf("\n\nA.Heat Energy\n\nB.Nuclear fusion\n\nC.Chemical reaction\n\nD.Mechanical energy");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");count++;
			getch();break;}
		else
		    {printf("\n\nWrong!!! The correct answer is B.Nuclear fusion");
		     getch(); break;}

        case 5:
        printf("\n\n\nWhich one among the following colour has the highest wavelength?");
        printf("\n\nA.Red\n\nB.Green\n\nC.Yellow\n\nD.Violet");
        if (toupper(getch())=='A')
               {printf("\n\nCorrect!!!");count++;
               getch();break;}
        else
		       {printf("\n\nWrong!!! The correct answer is A.red");
		       getch();break;}
      }   //close 'switch 1'
	  }   // close 'for loop 1'
      
	if(count>=2)
	{goto test1;}
	else
	{
	system("cls");
	printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
	getch();goto mainhome;}
	
     test1:     //start 'test1'
     system("cls");
     printf("\n\n\t*** CONGRATULATION   **%s**   you are eligible to play the Game ***",playername);
     printf("\n\n\tyou give more than 2 corrrect answer \n");
     printf("\n\tThat is '%d' correct answer out of 5 questions",count);
     printf("\n\n\n\n\t!Press 'P' to Start the Game!      otherwise press any key");
     if(toupper(getch())=='P')
		{goto game1;}
	 else
	 { goto home;}   //close 'test1'

  game1:        //start 'game1'
     countr=0;
     for(i=1;i<=10;i++)   //start 'for loop 2'
     {
	 system("cls");r=i;

     switch(r)       //start 'switch 2'
		{
		case 1:
		printf("\n\nA mobile phone charger is ..");
		printf("\n\nA.Inverter\n\nB.UPS\n\nC.Stepdown transformer\n\nD.Stepup transformer");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Stepdown transformer");getch();
		       goto score;break;}

		case 2:
		printf("\n\n\nStudy of Earthquake is called............,");
		printf("\n\nA.Seismology\n\nB.Cosmology\n\nC.Orology\n\nD.Etimology");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Seismology");getch();
		      goto score;break;}

        case 3:
		printf("\n\n\nLED converts....");
		printf("\n\nA.Electrical energy to light\n\nB.Thermal energy to light\n\nC.Light energy to electrical energy\n\nD.Machanica energy to electrical energy");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Light energy to electrical energy");getch();
		       goto score;break;}

        case 4:
		printf("\n\n\nThe Laws of Electromagnetic Induction were given by?");
		printf("\n\nA.Faraday\n\nB.Tesla\n\nC.Maxwell\n\nD.Coulomb");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is A.Faraday");getch();
		       goto score;break;}

        case 5:
		printf("\n\n\nIn what unit is electric power measured?");
		printf("\n\nA.Coulomb\n\nB.Watt\n\nC.Power\n\nD.Units");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is B.Power");
		       getch();goto score;break;}

		case 6:
		printf("\n\n\nThe celcius tempreture is..");
		printf("\n\nA.Approximate temperature\n\nB.Relative temperature\n\nC.Absolute Temperature\n\nD.Specific temperature");
		if (toupper(getch())=='B' )
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Relative temperature");goto score;
		       getch();break;}

        case 7:
		printf("\n\n\nThe gas used in refrigerator is..");
		printf("\n\nA.cooled down on flowing\n\nB.heated up on flowing\n\nC.Heated up when compressed\n\nD.cooled down when expended ");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Cooled down when expanded");getch();
		       goto score;break;}

        case 8:
		printf("\n\n\nWhen ice melt its ..");
		printf("\n\nA.Volume increase\n\nB.Volume decrease\n\nC.Mass increase\n\nD.Mass decrease");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Volume decrease");getch();
		       goto score;break;}

        case 9:
		printf("\n\n\nHair of shaving brush cling together when the brush is removed from water due to..");
		printf("\n\nA.Surface tension\n\nB.Elasticity\n\nC.Friction\n\nD.Viscosity");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Surface tension");getch();
		       goto score;break;}

        case 10:
		printf("\n\n\nA blackboard seems black because it .");
		printf("\n\nA.Does not reflect any colour\n\nB.reflect every colour\n\nC.Absorbs black colour\n\nD.Reflect black colour");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Does not reflect any colour");
			   getch();goto score;break;}
	}   //close 'switch 2'
    }   //close 'for loop 2'
		//close 'game 1'
			 //close 'quiz for Physics'  
	case 'B':
	            //start 'quiz for Chemistry'	
	 count=0;
     for(i=1;i<=5;i++)   //start 'for loop 1'
     {
    system("cls");
     r1=i;
    printf("\n\n\t Welcome Chemistry subject \n\n");  
     switch(r1)
		{            //start 'switch 1'
		case 1:
		printf("\n\nThe atomic theory of matter was first invented by..");
		printf("\n\nA.J.J.Thomson\n\nB.Niel Bohr\n\nC.John Dalton\n\nD.Rutherford");
		if (toupper(getch())=='C')
			{ printf("\n\nCorrect!!!");count++;
			    getch();  break; }
		else
		    { printf("\n\nWrong!!! The correct answer is C.John Dalton");
		      getch(); break;}
		      
        case 2:
		printf("\n\n\nWhich one of the following is a non-renewable resource..");
		printf("\n\nA.Soler energy\n\nB.Water\n\nC.coal\n\nD.Fisheries");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");count++;
			getch();break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Coal");
		       getch();break;}

        case 3:
		printf("\n\n\nWhich one among the following fuels is used in gas welding ");
		printf("\n\nA.LPG\n\nB.Acetylene\n\nC.Methane\\n\nD.Ethylene");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");count++;
	         getch();break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Acetylene");
		       getch();break;}

        case 4:
		printf("\n\n\nThe main constituent of Gobar Gas is .");
		printf("\n\nA.Ethane\n\nB.Methane\n\nC.Propene\n\nD.Acetylene");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");count++;
			getch();break;}
		else
		    {printf("\n\nWrong!!! The correct answer is B.Methane");
		     getch(); break;}

        case 5:
        printf("\n\n\nSodium metal should ve store in ..");
        printf("\n\nA.Water\n\nB.Kerosene oil\n\nC.Alcohol\n\nD.HCL");
        if (toupper(getch())=='B')
               {printf("\n\nCorrect!!!");count++;
               getch();break;}
        else
		       {printf("\n\nWrong!!! The correct answer is B.Kerosene");
		       getch();break;}
      }   //close 'switch 1'
	  }   //close 'for loop 1'
      
	if(count>=3)
	{goto test2;}
	else
	{
	system("cls");
	printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
	getch();goto mainhome;}
	
     test2:   //start 'test 2'
     system("cls");
     printf("\n\n\t*** CONGRATULATION   **%s**   you are eligible to play the Game ***",playername);
     printf("\n\n\tyou give more than 2 corrrect answer \n");
     printf("\n\tThat is '%d' correct answer out of 5 questions",count);
     printf("\n\n\n\n\t!Press 'P' to Start the Game!      otherwise press any key");
     if(toupper(getch())=='P')
		{goto game2;}
	 else
	 { goto mainhome;}
                  //close 'test 2'
  game2:          //start 'game 2'
     countr=0;
     for(i=1;i<=10;i++)   //start for loop 2'
     {
	 system("cls");r=i;

     switch(r)
		{               //start switch 2'
		case 1:
		printf("\n\nWhich of the following is good lubricant..");
		printf("\n\nA.Molten carbon\n\nB.Iron powder\n\nC.Graphit powder\n\nD.Diamond powder");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Graphit powder");getch();
		       goto score;break;}

		case 2:
		printf("\n\n\nChromiun oxide in paint makes the colour of paint..");
		printf("\n\nA.Green\n\nB.Red\n\nC.White\n\nD.Blue");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Green");getch();
		      goto score;break;}

        case 3:
		printf("\n\n\nWhat type of mixture is smoke.");
		printf("\n\nA.Liquid mixed with gas\n\nB.Gas mixed with gas\n\nC.Gas mixed with in liquid and solid\n\nD.Solid mixed with gas");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Gas mixed with in liquid and solid ");getch();
		       goto score;break;}

        case 4:
		printf("\n\n\nthe gas which turn lime water milky in..");
		printf("\n\nA.Carbon dioxide\n\nB.Carbon monoxide\n\nC.Ammonia\n\nD.Nitrogen");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is A.Carbon dioxide");getch();
		       goto score;break;}

        case 5:
		printf("\n\n Which amonge the following would expend the most on being heated..");
		printf("\n\nA.Water\n\nB.Air\n\nC.Glass\n\nD.Alcohol");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is B.Air");
		       getch();goto score;break;}

		case 6:
		printf("\n\n\nThe coil in a heater is made of..");
		printf("\n\nA.Tungsten\n\nB.Nichrome\n\nC.Copper\n\nD.Iron");
		if (toupper(getch())=='B' )
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Nichrome");goto score;
		       getch();break;}

        case 7:
		printf("\n\n\nWhich one of tje following is not a mixture..");
		printf("\n\nA.Soap\n\nB.Vinegar\n\nC.Toothpaste\n\nD.Baking soda");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.aking soda");getch();
		       goto score;break;}

        case 8:
		printf("\n\n\nWhich one of the following is not needed in a nuclear fission reactor..");
		printf("\n\nA.Coolant\n\nB.Accelerator\n\nC.Control divice\n\nD.Moderator");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Accelerator");getch();
		       goto score;break;}

        case 9:
		printf("\n\n\nContact lenses are made from .");
		printf("\n\nA.Lucit\n\nB.Teflon\n\nC.PVC\n\nD.Polystyrene");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Lucit");getch();
		       goto score;break;}

        case 10:
		printf("\n\n\nVermicompost is a ..");
		printf("\n\nA.Organic biofertiliser\n\nB.Inorganic fertiliser\n\nC.Toxic substance\n\nD.Synthetic fertiliser");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Organic biofertiliser");
			   getch();goto score;break;}
       }    //close 'switch 2'
	   }    //close 'for loop 2'
	               //close 'for quiz Chemitry'   
	case 'C':
	            //start 'quiz for Biology'	
	 count=0;
     for(i=1;i<=5;i++)   //start 'for loop 1'
     {
    system("cls");
     r1=i;
    printf("\n\n\t Welcome Biology subject \n\n");  
     switch(r1)
		{            //start 'switch 1'
		case 1:
		printf("\n\nWhich one of the following types of molecule is glucose..");
		printf("\n\nA.Nucleice acid\n\nB.Fat\n\nC.Carbohydrate\n\nD.Protein");
		if (toupper(getch())=='C')
			{ printf("\n\nCorrect!!!");count++;
			    getch();  break; }
		else
		    { printf("\n\nWrong!!! The correct answer is C.Carbohydrate");
		      getch(); break;}
		      
        case 2:
		printf("\n\n\nWhich one of the following hormones contains peptide chain..");
		printf("\n\nA.Cortisone\n\nB.Corticotrophin\n\nC.Insulin\n\nD.Oxytocin");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");count++;
			getch();break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Insulin");
		       getch();break;}

        case 3:
		printf("\n\n\nWhich of the following is not gaseous air pollutant.... ");
		printf("\n\nA.Oxide of Sulphar\n\nB.Oxides of Nitrogen\n\nC.Smoke\n\nD.Hydrocarbon");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");count++;
	         getch();break;}
		else
		       {printf("\n\nWrong!!! The correct answer isC.Smoke");
		       getch();break;}

        case 4:
		printf("\n\n\nCobalt is associated with .. .");
		printf("\n\nA.Hormone\n\nB.Vitamine B-12\n\nC.Haemoglobin\n\nD.Enzymes");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");count++;
			getch();break;}
		else
		    {printf("\n\nWrong!!! The correct answer is B.Vitamine B-12");
		     getch(); break;}

        case 5:
        printf("\n\n\nPenicillin inhibits synthesis of bacterial ..");
        printf("\n\nA.DNA\n\nB.Cell Wall\n\nC.Protein\n\nD.RNA");
        if (toupper(getch())=='B')
               {printf("\n\nCorrect!!!");count++;
               getch();break;}
        else
		       {printf("\n\nWrong!!! The correct answer is B.Cell Wall");
		       getch();break;}
      }   //close 'switch 1'
	  }   //close 'for loop 1'
      
	if(count>=3)
	{goto test3;}
	else
	{
	system("cls");
	printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
	getch();goto mainhome;}
	
     test3:   //start 'test 3'
     system("cls");
     printf("\n\n\t*** CONGRATULATION   **%s**   you are eligible to play the Game ***",playername);
     printf("\n\n\tyou give more than 2 corrrect answer \n");
     printf("\n\tThat is '%d' correct answer out of 5 questions",count);
     printf("\n\n\n\n\t!Press 'P' to Start the Game!      otherwise press any key");
     if(toupper(getch())=='P')
		{goto game3;}
	 else
	 { goto mainhome;}
                  //close 'test 3'
  game3:          //start 'game 3'
     countr=0;
     for(i=1;i<=10;i++)   //start for loop 2'
     {
	 system("cls");r=i;

     switch(r)
		{               //start switch 2'
		case 1:
		printf("\n\nWhich one among the following structures or cells is not present in connective tissues..");
		printf("\n\nA.chondrocytes\n\nB.collagen fibre\n\nC.Axon\n\nD.Lympocytes");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Axon");getch();
		       goto score;break;}

		case 2:
		printf("\n\n\nThe word 'Vaccination' has been derives from a Latin word which relates to..");
		printf("\n\nA.Pig\n\nB.Horse\n\nC.Dog\n\nD.Cow");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Cow");getch();
		      goto score;break;}

        case 3:
		printf("\n\n\nWhich one of the following plants is used for green manuring in India..");
		printf("\n\nA.Cotton\n\nB.Wheat\n\nC.Sunnhemp\n\nD.Rice");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Sunnhemp");getch();
		       goto score;break;}

        case 4:
		printf("\n\n\nItching due to insert bite is caused by..");
		printf("\n\nA.Formic acid\n\nB.Acetic acid\n\nC.Lactic acid\n\nD.Maleic acid");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is A.Forming acid");getch();
		       goto score;break;}

        case 5:
		printf("\n\n Which one fo the following is not biodegradable..");
		printf("\n\nA.Woollen mat\n\nB.Silver foil\n\nC.Leather bag\n\nD.Jute basket");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is B.Silver foil");
		       getch();goto score;break;}

		case 6:
		printf("\n\n\nWhich one of the following is commomly used as a flavouring agent during the preparation of noodles..");
		printf("\n\nA.Saffron\n\nB.Ajinomoto\n\nC.Olive oil\n\nD.Cinnamon");
		if (toupper(getch())=='B' )
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Ajinomoto");goto score;
		       getch();break;}

        case 7:
		printf("\n\n\nChemically silk fibres are predominantly..");
		printf("\n\nA.Mixture of polysaccharide and fat\n\nB.Complex lipid\n\nC.Carbohydrate\n\nD.Protein");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Protein");getch();
		       goto score;break;}

        case 8:
		printf("\n\n\nThe vitamin,Which is generally excreted in urin is..");
		printf("\n\nA.Vitamin-A\n\nB.Vitamin-B\n\nC.Vitamin-E\n\nD.Vitamin-D and K");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Vitamin-B");getch();
		       goto score;break;}

        case 9:
		printf("\n\n\nMosquito can be a Vector for the folloowing disease except..");
		printf("\n\nA.Kala-azar\n\nB.Yellow fever\n\nC.Dengue fever\n\nD.filariasis");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Kala-azar");getch();
		       goto score;break;}

        case 10:
		printf("\n\n\nHuman bodies main organ of balance is located in..");
		printf("\n\nA.Middle part of ear\n\nB.Inner part of ear\n\nC.Front part of brain\n\nD.Top part of Vertbral column");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Inner part of ear");
			   getch();goto score;break;}
       }    //close 'switch 2'
	   }    //close 'for loop 2'
	               //close 'for quiz Biology'
	               
	case 'D':    //Start for Computer science
		
	 count=0;
     for(i=1;i<=5;i++)   //start 'for loop 1'
     {
    system("cls");
     r1=i;
    printf("\n\n\t Welcome Computer Science subject \n\n");  
     switch(r1)
		{            //start 'switch 1'
		case 1:
		printf("\n\nA parallel port is most often used by..");
		printf("\n\nA.Mouse\n\nB.Moniter\n\nC.Printer\n\nD.Keyboard");
		if (toupper(getch())=='C')
			{ printf("\n\nCorrect!!!");count++;
			    getch();  break; }
		else
		    { printf("\n\nWrong!!! The correct answer is C.Printer");
		      getch(); break;}
		      
        case 2:
		printf("\n\n\nWhich one of the following is an example of an optical disk..");
		printf("\n\nA.Magnetic disk\n\nB.Memory disk\n\nC.Digital versatile disk\n\nD.Hard disk");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");count++;
			getch();break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Digital versatile disk");
		       getch();break;}

        case 3:
		printf("\n\n\nWhich of the following is an example of storage devices.... ");
		printf("\n\nA.Tapes\n\nB.DVDs\n\nC.Magnetic Disk\n\nD.All of these");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");count++;
	         getch();break;}
		else
		       {printf("\n\nWrong!!! The correct answer is All of these");
		       getch();break;}

        case 4:
		printf("\n\n\nIC chips used in computers are made of...");
		printf("\n\nA.Chromium\n\nB.Silicon\n\nC.Lead\n\nD.Silver");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");count++;
			getch();break;}
		else
		    {printf("\n\nWrong!!! The correct answer is B.Silicon");
		     getch(); break;}

        case 5:
        printf("\n\n\nWhich of the folowing is not an example of Operating System..");
        printf("\n\nA.Mirosoft Office\n\nB.Windows Vista\n\nC.Unix\n\nD.Ubuntu Linux");
        if (toupper(getch())=='A')
               {printf("\n\nCorrect!!!");count++;
               getch();break;}
        else
		       {printf("\n\nWrong!!! The correct answer is A.Microsoft Office");
		       getch();break;}
      }   //close 'switch 1'
	  }   //close 'for loop 1'
      
	if(count>=3)
	{goto test4;}
	else
	{
	system("cls");
	printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
	getch();goto mainhome;}
	
     test4:   //start 'test 4'
     system("cls");
     printf("\n\n\t*** CONGRATULATION   **%s**   you are eligible to play the Game ***",playername);
     printf("\n\n\tyou give more than 2 corrrect answer \n");
     printf("\n\tThat is '%d' correct answer out of 5 questions",count);
     printf("\n\n\n\n\t!Press 'P' to Start the Game!      otherwise press any key");
     if(toupper(getch())=='P')
		{goto game4;}
	 else
	 { goto mainhome;}
                  //close 'test 4'
  game4:          //start 'game 4'
     countr=0;
     for(i=1;i<=10;i++)   //start for loop 2'
     {
	 system("cls");r=i;

     switch(r)
		{               //start switch 2'
		case 1:
		printf("\n\nWhich super computer is developed by the Indian Scientist..");
		printf("\n\nA.Jaguar\n\nB.Mira\n\nC.Param\n\nD.Sequoia");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Param");getch();
		       goto score;break;}

		case 2:
		printf("\n\n\nReusable optical storage will typically have the acronym..");
		printf("\n\nA.CD\n\nB.DVD\n\nC.ROM\n\nD.RW");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.RW");getch();
		      goto score;break;}

        case 3:
		printf("\n\n\nA computer cannot 'boot' if it does not have the..");
		printf("\n\nA.Assembler\n\nB.Compiler\n\nC.Operating nystem\n\nD.Loader");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Operating System");getch();
		       goto score;break;}

        case 4:
		printf("\n\n\nWhich of following is READ only disc..");
		printf("\n\nA.DVD-ROM\n\nB.DVD-R\n\nC.DVDRW\n\nD.CD-R");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is A.DVD-ROM");getch();
		       goto score;break;}

        case 5:
		printf("\n\n POP3 and IMAP are e-mail accounts in which..");
		printf("\n\nA.One automatically gets ones mail everyday\n\nB.One only has to be connected to the server to send and receive email\n\nC.One does not need any telephone lines\n\nD.One has to be connected to the server to read or write ones mail");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is B.One only has to be connected to the server to send and receive email");
		       getch();goto score;break;}

		case 6:
		printf("\n\n\nYahoo was developed by..");
		printf("\n\nA.Dennis Ritchie and Ken Thompson\n\nB.David Filo and Jerry Yang\n\nC.Steve Case and Jeff Bezos\n\nD.Vint Cerf and Robert Kahn");
		if (toupper(getch())=='B' )
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.David Filo and Jerry Yang");goto score;
		       getch();break;}

        case 7:
		printf("\n\n\nA Personal Computer uses a number of chips mounted on a circuit board called..");
		printf("\n\nA.Microprocessor\n\nB.System Board\n\nC.Daughter board\n\nD.Mother board");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Mother Board");getch();
		       goto score;break;}

        case 8:
		printf("\n\n\nThe term DNS stands for..");
		printf("\n\nA.Defense Nuclear System\n\nB.Domain Name System\n\nC.Downloadable New Software\n\nD.Dependent Name server");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Domain Name System");getch();
		       goto score;break;}

        case 9:
		printf("\n\n\nErrors in computer programmes are called..");
		printf("\n\nA.Bugs\n\nB.Follies\n\nC.Mistakes\n\nD.Spam");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Bugs");getch();
		       goto score;break;}

        case 10:
		printf("\n\n\nThe process of laying out a document with text,graphics,headlines are involved in..");
		printf("\n\nA.Deck Top Publising\n\nB.Desk Top Publising\n\nC.Desk Top printing\n\nD.Deck Top printing");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Desk Top Publising");
			   getch();goto score;break;}
       }    //close 'switch 2'
	   }    //close 'for loop 2'
	   
	               //close 'for quiz Computer Science'
	
	case 'E':    //Start for Sports
		
	 count=0;
     for(i=1;i<=5;i++)   //start 'for loop 1'
     {
    system("cls");
     r1=i;
    printf("\n\n\t Welcome Sports subject \n\n");  
     switch(r1)
		{            //start 'switch 1'
		case 1:
		printf("\n\nDurand Cup is related with Which game..");
		printf("\n\nA.Hockey\n\nB.Volleyball\n\nC.Football\n\nD.Cricket");
		if (toupper(getch())=='C')
			{ printf("\n\nCorrect!!!");count++;
			    getch();  break; }
		else
		    { printf("\n\nWrong!!! The correct answer is C.Football");
		      getch(); break;}
		      
        case 2:
		printf("\n\n\nWho was the first cricket ODI captain for India..");
		printf("\n\nA.Kapil Dev\n\nB.Sunil Gavaskar\n\nC.Ajit Wadekar\n\nD.Ravi Shastri");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");count++;
			getch();break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Ajit Wadekar");
		       getch();break;}

        case 3:
		printf("\n\n\nWhich was the 1st non Test playing country to beatIndia in an International Match.... ");
		printf("\n\nA.East Afrika\n\nB.Zimbambwe\n\nC.Canada\n\nD.Sri Lanka");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");count++;
	         getch();break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Sri Lanka");
		       getch();break;}

        case 4:
		printf("\n\n\nIn 1958, Hockey was introduced in the asian Games in which city...");
		printf("\n\nA.Singapore\n\nB.Tokyo\n\nC.Bangkok\n\nD.Paris");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");count++;
			getch();break;}
		else
		    {printf("\n\nWrong!!! The correct answer is B.Tokyo");
		     getch(); break;}

        case 5:
        printf("\n\n\nThe 'Dronacharya Award' is given to..");
        printf("\n\nA.Physios\n\nB.Coaches\n\nC.Captains\n\nD.Players");
        if (toupper(getch())=='B')
               {printf("\n\nCorrect!!!");count++;
               getch();break;}
        else
		       {printf("\n\nWrong!!! The correct answer is B.Coaches");
		       getch();break;}
      }   //close 'switch 1'
	  }   //close 'for loop 1'
      
	if(count>=3)
	{goto test5;}
	else
	{
	system("cls");
	printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
	getch();goto mainhome;}
	
     test5:   //start 'test 5'
     system("cls");
     printf("\n\n\t*** CONGRATULATION   **%s**   you are eligible to play the Game ***",playername);
     printf("\n\n\tyou give more than 2 corrrect answer \n");
     printf("\n\tThat is '%d' correct answer out of 5 questions",count);
     printf("\n\n\n\n\t!Press 'P' to Start the Game!      otherwise press any key");
     if(toupper(getch())=='P')
		{goto game5;}
	 else
	 { goto mainhome;}
                  //close 'test 5'
  game5:          //start 'game 5'
     countr=0;
     for(i=1;i<=10;i++)   //start for loop 2'
     {
	 system("cls");r=i;

     switch(r)
		{               //start switch 2'
		case 1:
		printf("\n\nWhich one among the following structures or cells is not present in connective tissues..");
		printf("\n\nA.chondrocytes\t\tB.collagen fibre\n\nC.Axon\t\tD.Lympocytes");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Axon");getch();
		       goto score;break;}

		case 2:
		printf("\n\n\nThe word 'Vaccination' has been derives from a Latin word which relates to..");
		printf("\n\nA.Pig\t\tB.Horse\n\nC.Dog\t\tD.Cow");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Cow");getch();
		      goto score;break;}

        case 3:
		printf("\n\n\nWhich one of the following plants is used for green manuring in India..");
		printf("\n\nA.Cotton\t\tB.Wheat\n\nC.Sunnhemp\t\tD.Rice");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Sunnhemp");getch();
		       goto score;break;}

        case 4:
		printf("\n\n\nItching due to insert bite is caused by..");
		printf("\n\nA.Formic acid\t\tB.Acetic acid\n\nC.Lactic acid\t\tD.Maleic acid");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is A.Forming acid");getch();
		       goto score;break;}

        case 5:
		printf("\n\n Which one fo the following is not biodegradable..");
		printf("\n\nA.Woollen mat\t\tB.Silver foil\n\nC.Leather bag\t\tD.Jute basket");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is B.Silver foil");
		       getch();goto score;break;}

		case 6:
		printf("\n\n\nWhich one of the following is commomly used as a flavouring agent during the preparation of noodles..");
		printf("\n\nA.Saffron\t\tB.Ajinomoto\n\nC.Olive oil\t\tD.Cinnamon");
		if (toupper(getch())=='B' )
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Ajinomoto");goto score;
		       getch();break;}

        case 7:
		printf("\n\n\nChemically silk fibres are predominantly..");
		printf("\n\nA.Mixture of polysaccharide and fat\t\tB.Complex lipid\n\nC.Carbohydrate\t\tD.Protein");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Protein");getch();
		       goto score;break;}

        case 8:
		printf("\n\n\nThe vitamin,Which is generally excreted in urin is..");
		printf("\n\nA.Vitamin-A\t\tB.Vitamin-B\n\nC.Vitamin-E\t\tD.Vitamin-D and K");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Vitamin-B");getch();
		       goto score;break;}

        case 9:
		printf("\n\n\nMosquito can be a Vector for the folloowing disease except..");
		printf("\n\nA.Kala-azar\t\tB.Yellow fever\n\nC.Dengue fever\t\tD.filariasis");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Kala-azar");getch();
		       goto score;break;}

        case 10:
		printf("\n\n\nHuman bodies main organ of balance is located in..");
		printf("\n\nA.Middle part of ear\t\tB.Inner part of ear\n\nC.Front part of brain\t\tD.Top part of Vertbral column");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Inner part of ear");
			   getch();goto score;break;}
       }    //close 'switch 2'
	   }    //close 'for loop 2'
	               //close 'for quiz Sports'
		
	case 'F':    //Start for History
		
	 count=0;
     for(i=1;i<=5;i++)   //start 'for loop 1'
     {
    system("cls");
     r1=i;
    printf("\n\n\t Welcome History subject \n\n");  
     switch(r1)
		{            //start 'switch 1'
		case 1:
		printf("\n\nKamandakas Nitisara is a contribution to ..");
		printf("\n\nA.Grammar\n\nB.Mathematics\n\nC.political morality\n\nD.logic and philosophy");
		if (toupper(getch())=='C')
			{ printf("\n\nCorrect!!!");count++;
			    getch();  break; }
		else
		    { printf("\n\nWrong!!! The correct answer is C.Political Morality");
		      getch(); break;}
		      
        case 2:
		printf("\n\n\nThe Lilavati of Bhaskara is a standard text on..");
		printf("\n\nA.Peotics\n\nB.Surgery\n\nC.Mathematics\n\nD.Linguistics");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");count++;
			getch();break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Mathematics");
		       getch();break;}

        case 3:
		printf("\n\n\nThe followers of gorakhnath were called.... ");
		printf("\n\nA.Jogis\n\nB.nath panthis\n\nC.tantriks\n\nD.sanyasis");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");count++;
	         getch();break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Jogis");
		       getch();break;}

        case 4:
		printf("\n\n\nWhat were the 12 states of the Sikh confederacy called .. .");
		printf("\n\nA.Gurmata\n\nB.Misl\n\nC.Sardari\n\nD.Rakhi");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");count++;
			getch();break;}
		else
		    {printf("\n\nWrong!!! The correct answer is B.Misl");
		     getch(); break;}

        case 5:
        printf("\n\n\nThe Agrahara in early India was..");
        printf("\n\nA.The garland of flowers of Agar\n\nB.The name  of a village or land granted to Brahmins\n\nC.Land of village settled by Vaishya farmers\n\nD.The grant of land to officers and soldiers");
        if (toupper(getch())=='B')
               {printf("\n\nCorrect!!!");count++;
               getch();break;}
        else
		       {printf("\n\nWrong!!! The correct answer is B.The name  of a village or land granted to Brahmins");
		       getch();break;}
      }   //close 'switch 1'
	  }   //close 'for loop 1'
      
	if(count>=3)
	{goto test6;}
	else
	{
	system("cls");
	printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
	getch();goto mainhome;}
	
     test6:   //start 'test 6'
     system("cls");
     printf("\n\n\t*** CONGRATULATION   **%s**   you are eligible to play the Game ***",playername);
     printf("\n\n\tyou give more than 2 corrrect answer \n");
     printf("\n\tThat is '%d' correct answer out of 5 questions",count);
     printf("\n\n\n\n\t!Press 'P' to Start the Game!      otherwise press any key");
     if(toupper(getch())=='P')
		{goto game6;}
	 else
	 { goto mainhome;}
                  //close 'test 6'
  game6:          //start 'game 6'
     countr=0;
     for(i=1;i<=10;i++)   //start for loop 2'
     {
	 system("cls");r=i;

     switch(r)
		{               //start switch 2'
		case 1:
		printf("\n\nWhich kingdom did the temple of Hazara Rama belong to..");
		printf("\n\nA.Avadh\n\nB.Travancore\n\nC.Vijayanagara\n\nD.Ahom");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Vijayanagara");getch();
		       goto score;break;}

		case 2:
		printf("\n\n\nWho among the following was not a painter at Akabar_s court..");
		printf("\n\nA.Basawan\n\nB.Abdus Samad\n\nC.Daswanth\n\nD.Kalyan Das");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Kalyan Das");getch();
		      goto score;break;}

        case 3:
		printf("\n\n\nIn ancient India the 'Yaudheyas' were..");
		printf("\n\nA.Vassals of the cholas\n\nB.A sect of the Jainism\n\nC.A republican tribe\n\nD.A sect of the Buddhism");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.A republican tribe");getch();
		       goto score;break;}

        case 4:
		printf("\n\n\nThe ruins of the vijayanagara at hampi were brought to light in 1800 by..");
		printf("\n\nA.Colonel Colin Mackenzie\n\nB.Jhon Marshall\n\nC.Andrew Fraser\n\nD.Sir Jhon shore");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is A.Colonel Colin Mackenzie");getch();
		       goto score;break;}

        case 5:
		printf("\n\nWhich of the four linguistic regions in south India remained unaffected by the Non-cooperation Movement (1921-1922..");
		printf("\n\nA.Andhra Pradesh\n\nB.Karnataka\n\nC.Tamilnadu\n\nD.Kerala");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is B.Karnataka");
		       getch();goto score;break;}

		case 6:
		printf("\n\n\nThe only Inscribed stone portrait of Emperor Ashoka has been found at ..");
		printf("\n\nA.sanchi\n\nB.Kanaganahalli\n\nC.Amaravati\n\nD.Ajanta");
		if (toupper(getch())=='B' )
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Kanaganahalli");goto score;
		       getch();break;}

        case 7:
		printf("\n\n\nThe University of Nalnda was set-up by Which Gupta ruler..");
		printf("\n\nA.Samudragupta\n\nB.Chandragupta II\n\nC.Kumargupta I\n\nD.Kumaragupta");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Kumargupta I");getch();
		       goto score;break;}

        case 8:
		printf("\n\n\nRajtarangini Authored by Kalhan, describes the history of..");
		printf("\n\nA.Bangal\n\nB.Kashmir\n\nC.Punjab\n\nD.Gujarat");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Kashmir");getch();
		       goto score;break;}

        case 9:
		printf("\n\n\nThe name of Ram prashad Bismil is associated with..");
		printf("\n\nA.Kakori Conspiracy Case\n\nB.Kanpur Conspiracy Case\n\nC.Alipore Conspiracy Case\n\nD.Meerut Conspiracy Case");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Kakori Conspiracy Case");getch();
		       goto score;break;}

        case 10:
		printf("\n\n\nThe site of Harappa is located on the bank of river..");
		printf("\n\nA.Saraswasti\n\nB.Ravi\n\nC.Indus\n\nD.Beas");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Ravi");
			   getch();goto score;break;}
       }    //close 'switch 2'
	   }    //close 'for loop 2'	   
	               //close 'for quiz History'

	case 'G':    //Start for General Knowledge
		
	 count=0;
     for(i=1;i<=5;i++)   //start 'for loop 1'
     {
    system("cls");
     r1=i;
    printf("\n\n\t Welcome General Knowledge \n\n");  
     switch(r1)
		{            //start 'switch 1'
		case 1:
		printf("\n\nThe first summit of the Forum for India-Pacific-Islands-Cooperation(FIPIC) was held in..");
		printf("\n\nA.Port Moresby\n\nB.New Delhi\n\nC.Suva\n\nD.Jaipur");
		if (toupper(getch())=='C')
			{ printf("\n\nCorrect!!!");count++;
			    getch();  break; }
		else
		    { printf("\n\nWrong!!! The correct answer is C.Suva");
		      getch(); break;}
		      
        case 2:
		printf("\n\n\nWhich one of the following services of 'India Post' has Permanently been discontinued..");
		printf("\n\nA.Inland latter\n\nB.Postal life Insueance\n\nC.Telegram\n\nD.Mani order");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");count++;
			getch();break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Telegram");
		       getch();break;}

        case 3:
		printf("\n\n\nThe Erawan Shrine,Which Witnessed a major bomb blast in August,2015,is located at.... ");
		printf("\n\nA.Kabul\n\nB.Kuala Lumpur\n\nC.Bangkok\n\nD.Singapur");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");count++;
	         getch();break;}
		else
		       {printf("\n\nWrong!!! The correct answer isC.Bangkok");
		       getch();break;}

        case 4:
		printf("\n\n\nLeander Paes won the US Open Mixed Doubles Tennis Title(2015) partnering with...");
		printf("\n\nA.Sania Mirza\n\nB.Martina Hingis\n\nC.Kristina Mladenovic\n\nD.Flavia Pennetta");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");count++;
			getch();break;}
		else
		    {printf("\n\nWrong!!! The correct answer is B.Martina Hingis");
		     getch(); break;}

        case 5:
        printf("\n\n\nWho among the following is the winner of the World Food Prize(2015)..");
        printf("\n\nA.Sanjaya Rajaram\n\nB.Sir Fazle Hasan Abed\n\nC.Rajendra Singh Paroda\n\nD.Baldev Singh Dhillon");
        if (toupper(getch())=='B')
               {printf("\n\nCorrect!!!");count++;
               getch();break;}
        else
		       {printf("\n\nWrong!!! The correct answer is B.Sir Fazle Hasan Abed");
		       getch();break;}
      }   //close 'switch 1'
	  }   //close 'for loop 1'
      
	if(count>=3)
	{goto test7;}
	else
	{
	system("cls");
	printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
	getch();goto mainhome;}
	
     test7:   //start 'test 7'
     system("cls");
     printf("\n\n\t*** CONGRATULATION   **%s**   you are eligible to play the Game ***",playername);
     printf("\n\n\tyou give more than 2 corrrect answer \n");
     printf("\n\tThat is '%d' correct answer out of 5 questions",count);
     printf("\n\n\n\n\t!Press 'P' to Start the Game!      otherwise press any key");
     if(toupper(getch())=='P')
		{goto game7;}
	 else
	 { goto mainhome;}
                  //close 'test 7'
  game7:          //start 'game 7'
     countr=0;
     for(i=1;i<=10;i++)   //start for loop 2'
     {
	 system("cls");r=i;

     switch(r)
		{               //start switch 2'
		case 1:
		printf("\n\nWho amonmg the following id the auther of the autobiography entitled 'Amar Katha(1913)'..");
		printf("\n\nA.Ganesh Chandra Ghosh\n\nB.Satyajit Ray\n\nC.Binodini Dasi\n\nD.Rassundari Devi");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Binodini Dasi");getch();
		       goto score;break;}

		case 2:
		printf("\n\n\n'The Dashakumaracharita' or 'tales of ten princes' was composed by..");
		printf("\n\nA.Bhasa\n\nB.Banabhatta\n\nC.Bhatti\n\nD.Dandin");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Dandin");getch();
		      goto score;break;}

        case 3:
		printf("\n\n\n'And Then One Day : A Memoir' is an autobiography of.");
		printf("\n\nA.Karn Johar\n\nB.Shahrukh khan\n\nC.Naseeruddin Shah\n\nD.Kamal Hasan");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Naseeruddin Shah");getch();
		       goto score;break;}

        case 4:
		printf("\n\n\n'Arihant' is the name of ..");
		printf("\n\nA.A Nuclear-Powered submarine\n\nB.An infantry combat vihicle\n\nC.An attack helicopter\n\nD.A ballistic Missile");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is A.A Nuclear-Powered submarine");getch();
		       goto score;break;}

        case 5:
		printf("\n\n Master Chief Petty Officer is a rank in the..");
		printf("\n\nA.Indian Airforce\n\nB.Indian Navy\n\nC.Military Engineering Service\n\nD.Army Aviation Crops ");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is B.Indian Navy");
		       getch();goto score;break;}

		case 6:
		printf("\n\n\nStepwell 'Rani-ki-Vav' was approved as a World Heritage Site by the UNESCO recently. It is located at..");
		printf("\n\nA.Maharashtra\n\nB.Gujarat\n\nC.Rajasthan\n\nD.Madhya Pradesh");
		if (toupper(getch())=='B' )
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Gujarat");goto score;
		       getch();break;}

        case 7:
		printf("\n\n\nNovak Djokovic who won the Men-s Wimbledon tennis tournament 2014 is from..");
		printf("\n\nA.England\n\nB.Switzre land\n\nC.Spain\n\nD.Serbia");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Serbia");getch();
		       goto score;break;}

        case 8:
		printf("\n\n\nThe technique of inducing rain from cloud is called..");
		printf("\n\nA.Cloud Computing\n\nB.Cloud Seeding\n\nC.Cloud Control\n\nD.Cloud Engineering");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Cloud Seeding");getch();
		       goto score;break;}

        case 9:
		printf("\n\n\nWho is the author of the book 'Conquest of Self'..");
		printf("\n\nA.Mahatma Gandhi\n\nB.Ravindra nath tagore\n\nC.Aurobindo Ghosh\n\nD.S.Radhakrishnan");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Mahtma Gandhi");getch();
		       goto score;break;}

        case 10:
		printf("\n\n\nWhich legendary actor has been Awarded the Dada Saheb Phalke Award,2012 ..");
		printf("\n\nA.Soumitra Chatterjee\n\nB.Pran krishan Sikand\n\nC.Shashi Kapoor\n\nD.Anupam Kher");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Pran krishan Sikand");
			   getch();goto score;break;}
       }    //close 'switch 2'
	   }    //close 'for loop 2'
	               //close 'for quiz General Knowledge'
	               
	case 'H':    //Start for Miscellaneous
		
	 count=0;
     for(i=1;i<=5;i++)   //start 'for loop 1'
     {
    system("cls");
     r1=i;
    printf("\n\n\t Welcome Miscellaneous \n\n");  
     switch(r1)
		{            //start 'switch 1'
		case 1:
		printf("\n\nWhich one of the following is not a footbal tournament..");
		printf("\n\nA.Durand Cup\n\nB.Bardoloi trophy\n\nC.Irani Trophy\n\nD.I-League");
		if (toupper(getch())=='C')
			{ printf("\n\nCorrect!!!");count++;
			    getch();  break; }
		else
		    { printf("\n\nWrong!!! The correct answer is C.Irani Trophy");
		      getch(); break;}
		      
        case 2:
		printf("\n\n\nWhich one of the following is the central theame of the Chipko  Movement started by Sunderlal Bahuguna in 1973..");
		printf("\n\nA.Protection of Cheetahs\n\nB.Protection of birds\n\nC.Conservaton of forests\n\nD.Conservation of River-Water");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");count++;
			getch();break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Conservaton of forests");
		       getch();break;}

        case 3:
		printf("\n\n\nIn the year 2009 japan launched its first setellite to monitor greenhouse gases.What is the name of the satellite... ");
		printf("\n\nA.Kuoto\n\nB.Yasushi\n\nC.Ibuki\n\nD.Tadami");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");count++;
	         getch();break;}
		else
		       {printf("\n\nWrong!!! The correct answer isC.Ibuki");
		       getch();break;}

        case 4:
		printf("\n\n\nCobalt is associated with .. .");
		printf("\n\nA.Hormone\n\nB.Vitamine B-12\n\nC.Haemoglobin\n\nD.Enzymes");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");count++;
			getch();break;}
		else
		    {printf("\n\nWrong!!! The correct answer is B.Vitamine B-12");
		     getch(); break;}

        case 5:
        printf("\n\n\nPiramal life science is an..");
        printf("\n\nA.PSU dealing with healthcare amenities\n\nB.Drug Research Company\n\nC.Life Insurance Company\n\nD.SEZ(Special Economic Zone)");
        if (toupper(getch())=='B')
               {printf("\n\nCorrect!!!");count++;
               getch();break;}
        else
		       {printf("\n\nWrong!!! The correct answer is B.Drug Research Company");
		       getch();break;}
      }   //close 'switch 1'
	  }   //close 'for loop 1'
      
	if(count>=3)
	{goto test8;}
	else
	{
	system("cls");
	printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
	getch();goto mainhome;}
	
     test8:   //start 'test 8'
     system("cls");
     printf("\n\n\t*** CONGRATULATION   **%s**   you are eligible to play the Game ***",playername);
     printf("\n\n\tyou give more than 2 corrrect answer \n");
     printf("\n\tThat is '%d' correct answer out of 5 questions",count);
     printf("\n\n\n\n\t!Press 'P' to Start the Game!      otherwise press any key");
     if(toupper(getch())=='P')
		{goto game8;}
	 else
	 { goto mainhome;}
                  //close 'test 8'
  game8:          //start 'game 8'
     countr=0;
     for(i=1;i<=10;i++)   //start for loop 2'
     {
	 system("cls");r=i;

     switch(r)
		{               //start switch 2'
		case 1:
		printf("\n\nBluetooth technology allows..");
		printf("\n\nA.Wireless communation between equipments\n\nB.Satellite television communication\n\nC.Landlines to mobile phone communication\n\nD.Signal transmission on Mobiles phones only");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Wireless communation between equipments");getch();
		       goto score;break;}

		case 2:
		printf("\n\n\nThe word 'Vaccination' has been derives from a Latin word which relates to..");
		printf("\n\nA.Pig\n\nB.Horse\n\nC.Dog\n\nD.Cow");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Cow");getch();
		      goto score;break;}

        case 3:
		printf("\n\n\n'An Inconvenient Truth' is film directed by Al Gore to promote public awareness about..");
		printf("\n\nA.Communalism\n\nB.Nuclear Threats\n\nC.Global Warming\n\nD.Terrorism");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Global Warming");getch();
		       goto score;break;}

        case 4:
		printf("\n\n\nWhich one of the following is an indigenously built light combat aircraft of India..");
		printf("\n\nA.Tajas\n\nB.Akash\n\nC.Vikrant\n\nD.Arjun");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is A.Tejas");getch();
		       goto score;break;}

        case 5:
		printf("\n\n Which one fo the following is nuclear-capable-submarine-launched ballistic missile..");
		printf("\n\nA.Shourya\n\nB.Sagarika\n\nC.Prithvi\n\nD.Nag");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is B.Sagarika");
		       getch();goto score;break;}

		case 6:
		printf("\n\n\nSukhoi-30 MKI Squadron is not stationed at..");
		printf("\n\nA.Tezpur\n\nB.Jamnagar\n\nC.Pune\n\nD.Bereilly");
		if (toupper(getch())=='B' )
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Jamnagar");goto score;
		       getch();break;}

        case 7:
		printf("\n\n\nWhich one among the following is not included in the basic functions of Operating system ..");
		printf("\n\nA.Data mangement\n\nB.Memory management\n\nC.Job control\n\nD.Job scheduling");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Job scheduling");getch();
		       goto score;break;}

        case 8:
		printf("\n\n\nSIMBEX is an annual joint maritime bilateral exercise conducted between..");
		printf("\n\nA.China and India\n\nB.India and Singapore\n\nC.Singapore and Indonesia\n\nD.Malaysia and Thailand");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.India and Singapore");getch();
		       goto score;break;}

        case 9:
		printf("\n\n\nEco-Mark is given to an Indian product which is ..");
		printf("\n\nA.Environment friendly\n\nB.Rich in protein\n\nD.Economically viable\n\nD.Pure and unadulterated");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.ENvironment friendly");getch();
		       goto score;break;}

        case 10:
		printf("\n\n\nHuman bodies main organ of balance is located in..");
		printf("\n\nA.Middle part of ear\n\nB.Inner part of ear\n\nC.Front part of brain\n\nD.Top part of Vertbral column");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Inner part of ear");
			   getch();goto score;break;}
       }    //close 'switch 2'
	   }    //close 'for loop 2'
	   
	               //close 'for quiz Miscellaneous'
			   
        default:
        	printf("*** ivalid input ***");
        	printf("\n\n\t\tpress 'T' to try again.");
        	if(toupper(getch())=='T')
        	  goto home;
        	else
        	  goto mainhome;
   }  //close 'main switch'
   
	score:   // start 'score'
    system("cls");
    float score;
	score=countr*100000;
	if(score>0.00 && score<1000000)
	{
	   printf("\n\n\t\t**************** CONGRATULATION *****************");
	     printf("\n\t You won $%.2f",score);goto go;}
	 
	 else if(score==1000000.00)
	{
	    printf("\n\n\n \t\t**************** CONGRATULATION ****************");
	    printf("\n\t\t\t\t YOU ARE A MILLIONAIRE!!!!!!!!!");
	    printf("\n\t\t You won $%.2f",score);
	    printf("\n\n\t\t Thank You!!");
	    printf(" \n\n\tfor going on quiz press 'G'  ");
	    printf("otherwise press any key to go main menu");
	    if(toupper(getch())=='G')
		   goto home;
	    else 
	       goto mainhome;
	}
	 else
    {
	 printf("\n\n\t******** SORRY YOU DIDN'T WIN ANY CASH ********");
	    printf("\n\t\t Thanks for your participation");
	    printf("\n\t\t TRY AGAIN");goto go;}

	go:   //start 'go'
	puts("\n\n Press Y if you want to play next game");
	puts(" Press any key if you want to go main menu");
	if (toupper(getch())=='Y')
		goto home;
	else
		{
		edit_score(score,playername);
		goto mainhome;}
         		
		//close 'go' and  'score'
    }
	}   //close 'main fuction' 
	
void show_record()   //start show record function
    {system("cls");
	char name[20];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&name,&scr);
	printf("\n\n\t\t*************************************************************");
	printf("\n\n\t\t %s has secured the Highest Score %0.2f",name,scr);
	printf("\n\n\t\t*************************************************************");
	fclose(f);
	getch();
	}  //close show record function

void reset_score()  //start reset score function
    {system("cls");
    float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r+");
	fscanf(f,"%s%f",&nm,&sc);
	sc=0;
	fprintf(f,"%s,%.2f",nm,sc);
    fclose(f);
	}  //close reset score function

void edit_score(float score, char plnm[20])  //start edit score function
	{system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	if (score>=sc)
	  { sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",plnm,sc);
	    fclose(f);}
	}  //close edit score function

void help()  //start help function
	{system("cls");
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......................... C program Quiz Game...........");
    printf("\n >> There are two rounds in the game, WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your general");
    printf("\n    knowledge. You will be eligible to play the game if you can give atleast 2");
    printf("\n    right answers otherwise you can't play the Game...........");
    printf("\n >> Your game starts with the CHALLANGE ROUND. In this round you will be asked");
    printf("\n    total 10 questions each right answer will be awarded $100,000.");
    printf("\n    By this way you can win upto ONE MILLION cash prize in USD...............");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option");
    printf("\n >> You will be asked questions continuously if you keep giving the right answers.");
    printf("\n >> No negative marking for wrong answers");
	printf("\n\n\t*********************BEST OF LUCK*********************************");
	printf("\n\n\t*****C PROGRAM QUIZ GAME is developed by CODE WITH C TEAM********"); 
} //close help function
