#include<stdio.h>
#include<math.h>
#include<string.h>
#define bold   "\033[1m"
#define reset  "\033[0m"


int main()

{
	int a, b;
	int score[2][10] = {
	{1,2,3,4,5,6,7,8,9,10},
	{0,0,0,0,0,0,0,0,0,0}
	};
	int totals;
	float percentage;

	
	printf("      ====================="bold "Welcome to Quiz Master" reset"===========================\n");
	printf("\nHere are 5 sections English, Mathematics, IQ, General Knowledge and Computer.\n");
	printf("\nAlso, it has 3 Difficulty Levels \"Easy\", \"Medium\", \"Hard\"\n");
	printf("\n==================================================================================\n");
    
    printf("\n Now, Let's Get start it!!!! \n\n"  );
    printf("="bold"SUJBECTS"reset"=\n");
    
    const char *subjects[] = {
	"English", 
	"IQ",
	"Mathematics", 
	"General Knowledge",
	"Computer"
	};
	    
	int subject_count = sizeof(subjects) / sizeof(subjects[0]);
	char ans;
	do
	{
	for(int i = 0; i<subject_count; i++)
	   {
	   	printf("%d. %s: \n", i+1, subjects[i]);
	} 
	totals = 0;
	for(int i = 0; i < 10; i++)
	{
	    score[1][i] = 0;
	}
		
    printf("\nEnter your choice: "); 
    scanf("%d", &a);
      
    printf("\n=====================================================\n");
    printf("\n"bold"DIFFICULTY LEVEL"reset"\n");
    printf("\n=====================================================\n");	
      
    const char *levels[] =
	{
	    "Easy",
		"Medium",
		"Hard" 
	};
	  
	int all = sizeof(levels) / sizeof(levels[0]);
	  
	for(int i= 0; i<all; i++)
	  {
	  	printf("%d. %s: \n", i+1, levels[i]);
	}
	  
	printf("\nEnter your choice: ");
	scanf("%d", &b);
	  
	  int e;
	  if(a == 1)
	  {
	  	if (b == 1){
	  	   printf("\nWhat is the plural of child? \n1.Childs \n2.Children \n3.Childes \n4.Childrens\n");
	  	   scanf("%d", &e);
	  	   if(e == 2){
	  	      	printf("\nCorrect!\n");
				score[1][0] = 1;
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nChoose the correct spelling.\n1.Beautifull \n2.Beutiful \n3.Beautiful \n4.Butiful\n");
	  	   scanf("%d", &e);
	  	   if(e == 3){
	  	      	printf("\nCorrect!\n");
				score[1][1] = 1;
				}
				else
				printf("\n\aIncorrect!\n");
			printf("\nOpposite of hot? \n1.Warm \n2.Cold \n3.Dry \n4.Bright\n");
	  	   scanf("%d", &e);
	  	   if(e == 2){
	  	      	printf("\nCorrect!\n");
				score[1][2] = 1;
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nChoose the correct sentence. \n1.She are happy \n2.She is happy \n3.She am happy \n4.She be happy\n");
	  	   scanf("%d", &e);
	  	   if(e == 2){
	  	      	printf("\nCorrect!\n");
				score[1][3] = 1;
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nComplete: I ___ a student. \n1.Is \n2.Are \n3.Am \n4.Be\n");
	  	   scanf("%d", &e);
	  	   if(e == 3){
	  	      	printf("\nCorrect!\n");
				score[1][4] = 1;
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nChoose the correct article: ___ umbrella. \n1.A \n2.An \n3.Thee \n4.No article\n");
	  	   scanf("%d", &e);
	  	   if(e == 2){
	  	      	printf("\nCorrect!\n");
				score[1][5] = 1;
				}
				else
				printf("\n\aIncorrect!\n");
			
			printf("\nWhat is the comparative form of tall? \n1.Tallest \n2.More tall \n3.Taller \n4.Tallful\n");
	  	   scanf("%d", &e);
	  	   if(e == 3){
	  	      	printf("\nCorrect!\n");
				score[1][6] = 1;
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nPast tense of eat?  \n1.Eated \n2.Ate \n3.Eating \n4.Eaten\n");
	  	   scanf("%d", &e);
	  	   if(e == 2){
	  	      	printf("\nCorrect!\n");
				score[1][7] = 1;
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nWhich word is an adverb? \n1.Slowly \n2.Slow \n3.Slowness \n4.Slower\n");
	  	   scanf("%d", &e);
	  	   if(e == 1){
	  	      	printf("\nCorrect!\n");
				score[1][8] = 1;
				}
				else
				printf("\n\aIncorrect!\n");	
				
			printf("\nWhich word is a verb? \n1.Happiness \n2.Slowness \n3.Blue \n4.Jump\n");
	  	   scanf("%d", &e);
	  	   if(e == 4){
	  	      	printf("\nCorrect!\n");
				score[1][9] = 1;
				}
				else
				printf("\n\aIncorrect!\n");									
		  }
		  
		else  if (b == 2){
	  	   printf("\nChoose the past perfect form. \n1.She has left \n2.She had left \n3.She have left \n4.She leaving\n");
	  	   scanf("%d", &e);
	  	   if(e == 2){
	  	      	printf("\nCorrect!\n");
				score[1][0] = 1;
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nChoose the correct preposition: \nShe is interested ___ music. \n1.In \n2.On \n3.At \n4.By\n");
	  	   scanf("%d", &e);
	  	   if(e == 1){
	  	      	printf("\nCorrect!\n");
				score[1][1] = 1;
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nWhat is the synonym of rapid? \n1.Fast \n2.Slow \n3.Weak \n4.Quiet\n");
	  	   scanf("%d", &e);
	  	   if(e == 1){
	  	      	printf("\nCorrect!\n");
				score[1][2] = 1;
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nChoose the correct passive sentence for \"Ali wrote the letter\". \n1.The letter wrote Ali. \n2.The letter was written by Ali. \n3.Ali was written the letter. \n4.The letter is write by Ali. \n");
	  	   scanf("%d", &e);
	  	   if(e == 2){
	  	      	printf("\nCorrect!\n");
				score[1][3] = 1;
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nComplete the sentence: Ali and I _______ studying at Library. \n1.Is \n2.Are \n3.Am \n4.Be\n");
	  	   scanf("%d", &e);
	  	   if(e == 2){
	  	      	printf("\nCorrect!\n");
				score[1][4] = 1;
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nChoose the correct article: He is ____ Honest man. \n1.A \n2.The \n3.An \n4.No article\n");
	  	   scanf("%d", &e);
	  	   if(e == 2){
	  	      	printf("\nCorrect!\n");
				score[1][5] = 1;
				}
				else
				printf("\n\aIncorrect!\n");
			
			printf("\nBy next month, I _____ all my final exams and can finally relax.  \n1. will finish \n2. will have finished \n3. will be finishing \n4. finished\n");
	  	   scanf("%d", &e);
	  	   if(e == 2){
	  	      	printf("\nCorrect!\n");
				score[1][6] = 1;
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nCorrect spelling is?  \n1.Accommodation \n2.Accomodation \n3.Acomodation \n4.Acommodation\n");
	  	   scanf("%d", &e);
	  	   if(e == 1){
	  	      	printf("\nCorrect!\n");
				score[1][7] = 1;
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nFind the mistake, \nShaheer and Hamza are going to university.? \n1.Helping Verb \n2.Noun \n3.Punctuation \n4.None\n");
	  	   scanf("%d", &e);
	  	   if(e == 4){
	  	      	printf("\nCorrect!\n");
				score[1][8] = 1;
				}
				else
				printf("\n\aIncorrect!\n");	
				
			printf("\nThe restaurant _____ we had dinner last night was awarded a Michelin star. \n1.where \n2.whose \n3.who \n4.which\n");
	  	   scanf("%d", &e);
	  	   if(e == 1){
	  	      	printf("\nCorrect!\n");
				score[1][9] = 1;
				}
				else
				printf("\n\aIncorrect!\n");									
		  }
		  else if(b == 3){
	  	   printf("\nShe almost spent 1000$ in herself. \n1. Dangling Modifier \n2. Phrase Modifier \n3.Misplaced Modifier \n4.Complex Modifier\n");
	  	   scanf("%d", &e);
	  	   if(e == 3){
	  	      	printf("\nCorrect!\n");
				score[1][0] = 1;
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nChoose the correct preposition: \nThe agreement is contingent __ approval from the board.. \n1.In \n2.On \n3.At \n4.By\n");
	  	   scanf("%d", &e);
	  	   if(e == 2){
	  	      	printf("\nCorrect!\n");
				score[1][1] = 1;
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nWalking into the room, the lights turned off. \n1. Dangling Modifier \n2. Phrase Modifier \n3.Misplaced Modifier \n4.Complex Modifier\n");
	  	   scanf("%d", &e);
	  	   if(e == 1){
	  	      	printf("\nCorrect!\n");
				score[1][2] = 1;
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nWhich kind of Phrase it has? \nShe spoke very softly during the meeting. \n1.Verb phrase. \n2.Noun phrase. \n3.Adverb phrase. \n4.Adjective phrase.\n");
	  	   scanf("%d", &e);
	  	   if(e == 3){
	  	      	printf("\nCorrect!\n");
				score[1][3] = 1;
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nChoose the correctly punctuated sentence. \n1.However I disagree with you \n2.However, I disagree with you \n3.However I, disagree with you \n4.However; I, disagree with you\n");
	  	   scanf("%d", &e);
	  	   if(e == 2){
	  	      	printf("\nCorrect!\n");
				score[1][4] = 1;
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nChoose the correct agreement. \n1.Neither the teacher nor the students was ready \n2.Neither teacher or students were ready \n3.Neither the teacher nor the students were ready \n4.Neither the teacher nor students is ready yesterday\n");
	  	   scanf("%d", &e);
	  	   if(e == 3){
	  	      	printf("\nCorrect!\n");
				score[1][5] = 1;
				}
				else
				printf("\n\aIncorrect!\n");
			
			printf("\nWhich is the correct spelling?  \n1.Conscientious \n2.Consciencious \n3.Conscentious \n4.Conscientous\n");
	  	   scanf("%d", &e);
	  	   if(e == 1){
	  	      	printf("\nCorrect!\n");
				score[1][6] = 1;
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nWhat does 'mitigate' mean?  \n1.Make worse \n2Make less severe \n3.Ignore completely \n4Measure exactly\n");
	  	   scanf("%d", &e);
	  	   if(e == 2){
	  	      	printf("\nCorrect!\n");
				score[1][7] = 1;
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nWhat does 'loquacious' mean? \n1.Talkative \n2.Silent \n3.Angry \n4.Forgetful\n");
	  	   scanf("%d", &e);
	  	   if(e == 1){
	  	      	printf("\nCorrect!\n");
				score[1][8] = 1;
				}
				else
				printf("\n\aIncorrect!\n");	
				
			printf("\nChoose the correct sentence. \n1.Despite of the rain, we went out \n2.Despite the rain, we went out \n3.Although the rain, we went out \n4.Despite it was raining, we went out\n");
	  	   scanf("%d", &e);
	  	   if(e == 2){
	  	      	printf("\nCorrect!\n");
				score[1][9] = 1;
				}
				else
				printf("\n\aIncorrect!\n");									
		  }
	  }
	  
	else if(a == 2)
	  {
	  	if (b == 1){
	  	   printf("\nWhat comes next: 2, 4, 6, 8, ? \n1.16 \n2.14 \n3.12 \n4.10\n");
	  	   scanf("%d", &e);
	  	   if(e == 4){
	  	      	printf("\nCorrect!\n");
				score[1][0] = 1;
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nWhich one is different? \n1.Apple \n2.Mango \n3.Carrot \n4.Banana\n");
	  	   scanf("%d", &e);
	  	   if(e == 3){
	  	      	printf("\nCorrect!\n");
				score[1][1] = 1;
				}
				else
				printf("\n\aIncorrect!\n");
			printf("\nIf CAT becomes DBU, what does DOG become? \n1.EPH \n2.EOG \n3.FPH \n4.DPI\n");
	  	   scanf("%d", &e);				
	  	   if(e == 1){
	  	      	printf("\nCorrect!\n");
				score[1][2] = 1;
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nComplete: A, C, E, G, ? \n1.F \n2.B \n3.D \n4.\nI");
	  	   scanf("%d", &e);
	  	   if(e == 4){
	  	      	printf("\nCorrect!\n");
				score[1][3] = 1;
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nHow many legs do 3 cats have? \n1.3 \n2.6 \n3.9 \n4.12\n");
	  	   scanf("%d", &e);
	  	   if(e == 4){
	  	      	printf("\nCorrect!\n");
				score[1][4] = 1;
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nHow many months are in two years? \n1.6 \n2.24 \n3.48 \n4.52\n");
	  	   scanf("%d", &e);
	  	   if(e == 2){
	  	      	printf("\nCorrect!\n");
				score[1][5] = 1;
				}
				else
				printf("\n\aIncorrect!\n");
			
			printf("\nWhich number is odd? \n1.91 \n2.7 \n3.23 \n4.39\n");
	  	   scanf("%d", &e);
	  	   if(e == 3){
	  	      	printf("\nCorrect!\n");
				score[1][6] = 1;
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nComplete: Z, Y, X, W, ?  \n1.V \n2.U \n3.T \n4.S\n");
	  	   scanf("%d", &e);
	  	   if(e == 1){
	  	      	printf("\nCorrect!\n");
				score[1][7] = 1;
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nWhich is a pair of opposites? \n1.Big and large \n2.Hot and cold \n3.Fast and quick \n4.Small and tiny\n");
	  	   scanf("%d", &e);
	  	   if(e == 2){
	  	      	printf("\nCorrect!\n");
				score[1][8] = 1;
				}
				else
				printf("\n\aIncorrect!\n");	
				
			printf("\nWhich is the lightest? \n1.Elephant \n2.Car \n3.Feather \n4.Bus\n");
	  	   scanf("%d", &e);
	  	   if(e == 3){
	  	      	printf("\nCorrect!\n");
				score[1][9] = 1;
				}
				else
				printf("\n\aIncorrect!\n");									
		  }
		  
		else  if (b == 2){
	  	   printf("\nWhat comes next: 3, 6, 12, 24, ?. \n136. \n242. \n3.48 \n4.54\n");
	  	   scanf("%d", &e);
	  	   if(e == 3){
	  	      	printf("\nCorrect!\n");
				score[1][0] = 1;
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nFive workers make 5 chairs in 5 days. How long do 10 workers take to make 10 chairs at the same rate? \n1.5 days \n2.10 days \n3.15 days \n4.20 days\n");
	  	   scanf("%d", &e);
	  	   if(e == 1){
	  	      	printf("\nCorrect!\n");
				score[1][1] = 1;
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nComplete: 1, 4, 9, 16, ? \n1.42 \n2.25 \n3.48 \n4.35\n");
	  	   scanf("%d", &e);
	  	   if(e == 2){
	  	      	printf("\nCorrect!\n");
				score[1][2] = 1;
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nIf BOOK becomes CPPL, TREE becomes: \n1.USFF \n2.UQFF \n3.USFE \n4.TSDD \n");
	  	   scanf("%d", &e);
	  	   if(e == 1){
	  	      	printf("\nCorrect!\n");
				score[1][3] = 1;
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nAli is taller than Bilal. Bilal is taller than Ahmed. \nWho is shortest? \n1.Ali \n2.Bilal \n3.Ahmed \n4.Everyone is equal\n");
	  	   scanf("%d", &e);
	  	   if(e == 3){
	  	      	printf("\nCorrect!\n");
				score[1][4] = 1;
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nComplete: 2, 6, 12, 20, 30, ? \n1.36 \n2.40 \n3.42 \n4.52\n");
	  	   scanf("%d", &e);
	  	   if(e == 3){
	  	      	printf("\nCorrect!\n");
				score[1][5] = 1;
				}
				else
				printf("\n\aIncorrect!\n");
			
			printf("\nWhat is the angle between clock hands at 3:00?  \n1.45 degrees \n2.90 degrees \n3.120 degrees \n4.180 degrees \n");
	  	   scanf("%d", &e);
	  	   if(e == 2){
	  	      	printf("\nCorrect!\n");
				score[1][6] = 1;
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nIf yesterday was Monday, what day is tomorrow?  \n1.Tuesday \n2.Wednesday \n3.Thursday \n4.Friday\n");
	  	   scanf("%d", &e);
	  	   if(e == 2){
	  	      	printf("\nCorrect!\n");
				score[1][7] = 1;
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nComplete: 81, 27, 9, 3, ? \n1.-1 \n2.0 \n3.1 \n4.2\n");
	  	   scanf("%d", &e);
	  	   if(e == 3){
	  	      	printf("\nCorrect!\n");
				score[1][8] = 1;
				}
				else
				printf("\n\aIncorrect!\n");	
				
			printf("\nIf all cats are animals, which statement is true? \n1.All animals are cats \n2.Cats are animals \n3.No cats are animals \n4.All animals are dogs\n");
	  	   scanf("%d", &e);
	  	   if(e == 2){
	  	      	printf("\nCorrect!\n");
				score[1][9] = 1;
				}
				else
				printf("\n\aIncorrect!\n");									
		  }
		  else if(b == 3){
	  	   printf("\nIf 4 pencils cost 20 rupees, what do 8 cost? \n1.30 rupees \n2.35 rupees \n3.40 rupees \n4.45 rupees\n");
	  	   scanf("%d", &e);
	  	   if(e == 3){
	  	      	printf("\nCorrect!\n");
				score[1][0] = 1;
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nComplete the Fibonacci sequence: 1, 1, 2, 3, 5, 8, ? \n1.11 \n2.12 \n3.13 \n4.14\n");
	  	   scanf("%d", &e);
	  	   if(e == 3){
	  	      	printf("\nCorrect!\n");
				score[1][1] = 1;
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nWalking into the room, the lights turned off. \n1. Dangling Modifier \n2. Phrase Modifier \n3.Misplaced Modifier \n4.Complex Modifier\n");
	  	   scanf("%d", &e);
	  	   if(e == 1){
	  	      	printf("\nCorrect!\n");
				score[1][2] = 1;
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nWhich kind of Phrase it has? \nShe spoke very softly during the meeting. \n1.Verb phrase. \n2.Noun phrase. \n3.Adverb phrase. \n4.Adjective phrase.\n");
	  	   scanf("%d", &e);
	  	   if(e == 3){
	  	      	printf("\nCorrect!\n");
				score[1][3] = 1;
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nChoose the correctly punctuated sentence. \n1.However I disagree with you \n2.However, I disagree with you \n3.However I, disagree with you \n4.However; I, disagree with you\n");
	  	   scanf("%d", &e);
	  	   if(e == 2){
	  	      	printf("\nCorrect!\n");
				score[1][4] = 1;
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nChoose the correct agreement. \n1.Neither the teacher nor the students was ready \n2.Neither teacher or students were ready \n3.Neither the teacher nor the students were ready \n4.Neither the teacher nor students is ready yesterday\n");
	  	   scanf("%d", &e);
	  	   if(e == 3){
	  	      	printf("\nCorrect!\n");
				score[1][5] = 1;
				}
				else
				printf("\n\aIncorrect!\n");
			
			printf("\nWhich is the correct spelling?  \n1.Conscientious \n2.Consciencious \n3.Conscentious \n4.Conscientous\n");
	  	   scanf("%d", &e);
	  	   if(e == 1){
	  	      	printf("\nCorrect!\n");
				score[1][6] = 1;
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nWhat does 'mitigate' mean?  \n1.Make worse \n2Make less severe \n3.Ignore completely \n4Measure exactly\n");
	  	   scanf("%d", &e);
	  	   if(e == 2){
	  	      	printf("\nCorrect!\n");
				score[1][7] = 1;
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nWhat does 'loquacious' mean? \n1.Talkative \n2.Silent \n3.Angry \n4.Forgetful\n");
	  	   scanf("%d", &e);
	  	   if(e == 1){
	  	      	printf("\nCorrect!\n");
				score[1][8] = 1;
				}
				else
				printf("\n\aIncorrect!\n");	
				
			printf("\nChoose the correct sentence. \n1.Despite of the rain, we went out \n2.Despite the rain, we went out \n3.Although the rain, we went out \n4.Despite it was raining, we went out\n");
	  	   scanf("%d", &e);
	  	   if(e == 2){
	  	      	printf("\nCorrect!\n");
				score[1][9] = 1;
			}
			else
			{
				printf("\n\aIncorrect!\n");
			}
			printf("\nEnd of IQ section!\n");								
		  }
		  else
		  {
			printf("\nInvalid difficulty choice!\n");
		}
	} else if(a == 3)
	{
		if(b == 1)
		{
			printf("\nQ1. What is 15 + 25?\n1. 35\n2. 40\n3. 45\n4. 50\n");
			scanf("%d", &e);
			if(e == 2){
				printf("\nCorrect!\n");
				score[1][0] = 1;
			}
			else
				{printf("\n\aIncorrect!\n");
				}
			printf("\nQ2. What is 12 x 5?\n1. 50\n2. 55\n3. 60\n4. 65\n");
			scanf("%d", &e);
			if(e == 3){
				printf("\nCorrect!\n");
				score[1][1] = 1;
			}
			else
				{printf("\n\aIncorrect!\n");
				}
			printf("\nQ3. What is the square of 9?\n1. 72\n2. 81\n3. 90\n4. 99\n");
			scanf("%d", &e);
			if(e == 2){
				printf("\nCorrect!\n");
				score[1][2] = 1;
			}
			else
				{printf("\n\aIncorrect!\n");
				}
			printf("\nQ4. What is 100 / 4?\n1. 20\n2. 25\n3. 30\n4. 40\n");
			scanf("%d", &e);
			if(e == 2){
				printf("\nCorrect!\n");
				score[1][3] = 1;
			}
			else
				{printf("\n\aIncorrect!\n");
				}
			printf("\nQ5. How many sides does a triangle have?\n1. 2\n2. 3\n3. 4\n4. 5\n");
			scanf("%d", &e);
			if(e == 2){
				printf("\nCorrect!\n");
				score[1][4] = 1;
			}
			else
				{printf("\n\aIncorrect!\n");
				}
			printf("\nQ6. What is 50 percent of 200?\n1. 50\n2. 75\n3. 100\n4. 150\n");
			scanf("%d", &e);
			if(e == 3){
				printf("\nCorrect!\n");
				score[1][5] = 1;
			}
			else
				{printf("\n\aIncorrect!\n");
				}
			printf("\nQ7. What is the value of 7 + 8 x 2?\n1. 30\n2. 23\n3. 22\n4. 15\n");
			scanf("%d", &e);
			if(e == 2){
				printf("\nCorrect!\n");
				score[1][6] = 1;
			}
			else
				{printf("\n\aIncorrect!\n");
				}
				printf("\nQ8. What is the smallest prime number?\n1. 0\n2. 1\n3. 2\n4. 3\n");
			scanf("%d", &e);
			if(e == 3){
				printf("\nCorrect!\n");
				score[1][7] = 1;
			}
			else
				{printf("\n\aIncorrect!\n");
				}
			printf("\nQ9. What is the perimeter of a square with side 5 cm?\n1. 10 cm\n2. 15 cm\n3. 20 cm\n4. 25 cm\n");
			scanf("%d", &e);
			if(e == 3){
				printf("\nCorrect!\n");
				score[1][8] = 1;
			}
			else
				{printf("\n\aIncorrect!\n");
				}
			printf("\nQ10. What is 3/4 of 100?\n1. 25\n2. 50\n3. 75\n4. 80\n");
			scanf("%d", &e);
			if(e == 3){
				printf("\nCorrect!\n");
				score[1][9] = 1;
			}
			else
				{printf("\n\aIncorrect!\n");
				}
		}
		else if(b == 2){
			printf("\nQ1. Solve: 15 x 4 - 20?\n1. 30\n2. 40\n3. 50\n4. 60\n");
			scanf("%d", &e);
			if(e == 2){
				printf("\nCorrect!\n");
				score[1][0] = 1;
			}
			else
				{printf("\n\aIncorrect!\n");
				}
			printf("\nQ2. What is the square root of 144?\n1. 10\n2. 11\n3. 12\n4. 14\n");
			scanf("%d", &e);
			if(e == 3)
			{
				printf("\nCorrect!\n");
				score[1][1] = 1;
			}
			else
			{
				printf("\n\aIncorrect!\n");
			}
			printf("\nQ3. If x + 7 = 15, what is x?\n1. 6\n2. 7\n3. 8\n4. 9\n");
			scanf("%d", &e);
			if(e == 3){
				printf("\nCorrect!\n");
				score[1][2] = 1;
			}
			else
				{printf("\n\aIncorrect!\n");
				}
			printf("\nQ4. What is the area of a rectangle with length 8 cm and width 5 cm?\n1. 13 cm2\n2. 26 cm2\n3. 40 cm2\n4. 45 cm2\n");
			scanf("%d", &e);
			if(e == 3){
				printf("\nCorrect!\n");
				score[1][3] = 1;
			}
			else
				{printf("\n\aIncorrect!\n");
				}
				printf("\nQ5. What is 20 percent of 350?\n1. 50\n2. 60\n3. 70\n4. 80\n");
			scanf("%d", &e);
			if(e == 3){
				printf("\nCorrect!\n");
				score[1][4] = 1;
			}
			else
				{printf("\n\aIncorrect!\n");
				}
			printf("\nQ6. What is the average of 10, 20, 30 and 40?\n1. 20\n2. 25\n3. 30\n4. 35\n");
			scanf("%d", &e);
			if(e == 2){
				printf("\nCorrect!\n");
				score[1][5] = 1;
			}
			else
				{printf("\n\aIncorrect!\n");
				}
			printf("\nQ7. What is the value of 2 cubed?\n1. 4\n2. 6\n3. 8\n4. 16\n");
			scanf("%d", &e);
			if(e == 3){
				printf("\nCorrect!\n");
				score[1][6] = 1;
			}
			else
				{printf("\n\aIncorrect!\n");
				}
			printf("\nQ8. What is the next number: 2, 6, 18, 54, ?\n1. 108\n2. 126\n3. 162\n4. 216\n");
			scanf("%d", &e);
			if(e == 3)
			{
				printf("\nCorrect!\n");
				score[1][7] = 1;
			}
			else
				{printf("\nIncorrect!\n");
				}
			printf("\nQ9. What is the sum of the interior angles of a quadrilateral?\n1. 180 degrees\n2. 270 degrees\n3. 360 degrees\n4. 540 degrees\n");
			scanf("%d", &e);
			if(e == 3)
			{
				printf("\nCorrect!\n");
				score[1][8] = 1;
			}
			else
			{
				printf("\nIncorrect!\n");
			}
			printf("\nQ10. If 5x = 45, what is x?\n1. 5\n2. 7\n3. 9\n4. 10\n");
			scanf("%d", &e);
			if(e == 3)
			{
				printf("\nCorrect\n");
				score[1][9] = 1;
			}
			else
			{
				printf("\nIncorrect!\n");
			}
		}
		else if(b == 3){
			printf("\nQ1. Solve: 3x + 7 = 25. What is x?\n1. 4\n2. 5\n3. 6\n4. 7\n");
			scanf("%d", &e);
			if(e == 2){
				printf("\nCorrect!\n");
				score[1][0] = 1;
			}
			else
				{printf("\n\aIncorrect!\n");
				}
			printf("\nQ2. What is the value of 15 squared?\n1. 125\n2. 200\n3. 225\n4. 250\n");
			scanf("%d", &e);
			if(e == 3){
				printf("\nCorrect!\n");
				score[1][1] = 1;
			}
			else
				{printf("\n\aIncorrect!\n");
				}
			printf("\nQ3. What is the value of 2 to the power of 5?\n1. 16\n2. 24\n3. 32\n4. 64\n");
			scanf("%d", &e);
			if(e == 3){
				printf("\nCorrect!\n");
				score[1][2] = 1;
			}
			else
				{printf("\n\aIncorrect!\n");
				}
			printf("\nQ4. What is the area of a circle with radius 7 cm? Use pi = 22/7.\n1. 144 cm2\n2. 154 cm2\n3. 164 cm2\n4. 174 cm2\n");
			scanf("%d", &e);
			if(e == 2){
				printf("\nCorrect!\n");
				score[1][3] = 1;
			}
			else
				{printf("\n\aIncorrect!\n");
				}
			printf("\nQ5. What is the HCF of 36 and 48?\n1. 6\n2. 8\n3. 12\n4. 16\n");
			scanf("%d", &e);
			if(e == 3){
				printf("\nCorrect!\n");
				score[1][4] = 1;
			}
			else
				{printf("\n\aIncorrect!\n");
				}
			printf("\nQ6. What is the LCM of 12 and 18?\n1. 24\n2. 30\n3. 36\n4. 48\n");
			scanf("%d", &e);
			if(e == 3){
				printf("\nCorrect!\n");
				score[1][5] = 1;
			}
			else
				{printf("\n\aIncorrect!\n");
				}
			printf("\nQ7. If a triangle has angles 50 and 60 degrees, what is its third angle?\n1. 60 degrees\n2. 70 degrees\n3. 80 degrees\n4. 90 degrees\n");
			scanf("%d", &e);
			if(e == 2){
				printf("\nCorrect!\n");
				score[1][6] = 1;
			}
			else
				{printf("\n\aIncorrect!\n");
				}
			printf("\nQ8. What is the value of (5 + 3) squared - 16?\n1. 36\n2. 40\n3. 48\n4. 64\n");
			scanf("%d", &e);
			if(e == 1){
				printf("\nCorrect!\n");
				score[1][7] = 1;
			}
			else
				{printf("\n\aIncorrect!\n");
				}
			printf("\nQ9. A car travels 180 km in 3 hours. What is its average speed?\n1. 40 km/h\n2. 50 km/h\n3. 60 km/h\n4. 70 km/h\n");
			scanf("%d", &e);
			if(e == 3){
				printf("\nCorrect!\n");
				score[1][8] = 1;
			}
			else
				{printf("\n\aIncorrect!\n");
				}
			printf("\nQ10. What is the discriminant of x2 - 5x + 6 = 0?\n1. 0\n2. 1\n3. 5\n4. 25\n");
			scanf("%d", &e);
			if(e == 2){
				printf("\nCorrect!\n");
				score[1][9] = 1;
			}
			else
				{printf("\n\aIncorrect!\n");
				}
		}
		else
		{
			printf("\nInvalid difficulty choice!\n");
		}
	}
	else if(a == 4)
	{
		if(b == 1)
		{
			printf("\nQ1. What is the capital of Pakistan?\n1. Lahore\n2. Islamabad\n3. Karachi\n4. Peshawar\n");
			scanf("%d", &e);
			if(e == 2){
				printf("\nCorrect!\n");
				score[1][0] = 1;
			}
			else
				{printf("\n\aIncorrect!\n");
				}
			printf("\nQ2. How many continents are there in the world?\n1. Five\n2. Six\n3. Seven\n4. Eight\n");
			scanf("%d", &e);
			if(e == 3){
				printf("\nCorrect!\n");
				score[1][1] = 1;
			}
			else
				{printf("\n\aIncorrect!\n");
				}
			printf("\nQ3. Which planet is known as the Red Planet?\n1. Venus\n2. Mars\n3. Jupiter\n4. Saturn\n");
			scanf("%d", &e);
			if(e == 2){
				printf("\nCorrect!\n");
				score[1][2] = 1;
			}
			else
				{printf("\n\aIncorrect!\n");
				}
			printf("\nQ4. What is the national language of Pakistan?\n1. English\n2. Punjabi\n3. Urdu\n4. Sindhi\n");
			scanf("%d", &e);
			if(e == 3){
				printf("\nCorrect!\n");
				score[1][3] = 1;
			}
			else
				{printf("\n\aIncorrect!\n");
				}
			printf("\nQ5. Which is the largest ocean in the world?\n1. Atlantic Ocean\n2. Indian Ocean\n3. Arctic Ocean\n4. Pacific Ocean\n");
			scanf("%d", &e);
			if(e == 4){
				printf("\nCorrect!\n");
				score[1][4] = 1;
			}
			else
				{printf("\n\aIncorrect!\n");
				}
			printf("\nQ6. Who is known as the founder of Pakistan?\n1. Allama Iqbal\n2. Liaquat Ali Khan\n3. Muhammad Ali Jinnah\n4. Sir Syed Ahmed Khan\n");
			scanf("%d", &e);
			if(e == 3){
				printf("\nCorrect!\n");
				score[1][5] = 1;
			}
			else
				{printf("\n\aIncorrect!\n");
				}
			printf("\nQ7. How many days are there in a leap year?\n1. 364\n2. 365\n3. 366\n4. 367\n");
			scanf("%d", &e);
			if(e == 3){
				printf("\nCorrect!\n");
				score[1][6] = 1;
			}
			else
				{printf("\n\aIncorrect!\n");
				}
			printf("\nQ8. Which animal is known as the King of the Jungle?\n1. Tiger\n2. Lion\n3. Elephant\n4. Leopard\n");
			scanf("%d", &e);
			if(e == 2){
				printf("\nCorrect!\n");
				score[1][7] = 1;
			}
			else
				{printf("\n\aIncorrect!\n");
				}
			printf("\nQ9. What is the national flower of Pakistan?\n1. Rose\n2. Jasmine\n3. Sunflower\n4. Tulip\n");
			scanf("%d", &e);
			if(e == 2){
				printf("\nCorrect!\n");
				score[1][8] = 1;
			}
			else
				{printf("\n\aIncorrect!\n");
				}
			printf("\nQ10. Which gas do humans need for breathing?\n1. Carbon dioxide\n2. Nitrogen\n3. Oxygen\n4. Hydrogen\n");
			scanf("%d", &e);
			if(e == 3){
				printf("\nCorrect!\n");
				score[1][9] = 1;
			}
			else
				{printf("\n\aIncorrect!\n");
				}
		}
		else if(b == 2)
		{
			printf("\nQ1. In which year did Pakistan gain independence?\n1. 1940\n2. 1945\n3. 1947\n4. 1950\n");
			scanf("%d", &e);
			if(e == 3){	
				printf("\nCorrect!\n");
				score[1][0] = 1;
			}
			else
				{printf("\n\aIncorrect!\n");
				}
			printf("\nQ2. Which is the largest continent by area?\n1. Africa\n2. Asia\n3. Europe\n4. North America\n");
			scanf("%d", &e);
			if(e == 2){
				printf("\nCorrect!\n");
				score[1][1] = 1;
			}
			else
				{printf("\n\aIncorrect!\n");
				}
			printf("\nQ3. Who was the first Governor-General of Pakistan?\n1. Liaquat Ali Khan\n2. Muhammad Ali Jinnah\n3. Ayub Khan\n4. Iskander Mirza\n");
			scanf("%d", &e);
			if(e == 1){
				printf("\nCorrect!\n");
				score[1][2] = 1;
			}
			else
				{printf("\n\aIncorrect!\n");
				}
			printf("\nQ4. Which country is known as the Land of the Rising Sun?\n1. China\n2. Thailand\n3. Japan\n4. South Korea\n");
			scanf("%d", &e);
			if(e == 3){
				printf("\nCorrect!\n");
				score[1][3] = 1;
			}
			else
				{printf("\n\aIncorrect!\n");
				}
			printf("\nQ5. What is the currency of Japan?\n1. Yuan\n2. Yen\n3. Won\n4. Ringgit\n");
			scanf("%d", &e);
			if(e == 2){
				printf("\nCorrect!\n");
				score[1][4] = 1;
			}
			else
				{printf("\n\aIncorrect!\n");
				}
			printf("\nQ6. Which is the longest river in Pakistan?\n1. Ravi\n2. Chenab\n3. Jhelum\n4. Indus\n");
			scanf("%d", &e);
			if(e == 4){
				printf("\nCorrect!\n");
				score[1][5] = 1;
			}
			else
				{printf("\n\aIncorrect!\n");
				}
			printf("\nQ7. Which organ pumps blood throughout the human body?\n1. Brain\n2. Liver\n3. Heart\n4. Lungs\n");
			scanf("%d", &e);
			if(e == 3){
				printf("\nCorrect!\n");
				score[1][6] = 1;
			}
			else
				{printf("\n\aIncorrect!\n");
				}
			printf("\nQ8. Who wrote the national anthem of Pakistan?\n1. Hafeez Jalandhari\n2. Allama Iqbal\n3. Faiz Ahmed Faiz\n4. Ahmed G. Chagla\n");
			scanf("%d", &e);
			if(e == 1){
				printf("\nCorrect!\n");
				score[1][7] = 1;
			}
			else
				{printf("\n\aIncorrect!\n");
				}
			printf("\nQ9. Which planet is the largest in our solar system?\n1. Earth\n2. Saturn\n3. Jupiter\n4. Neptune\n");
			scanf("%d", &e);
			if(e == 3){
				printf("\nCorrect!\n");
				score[1][8] = 1;
			}
			else
				{printf("\n\aIncorrect!\n");
				}
			printf("\nQ10. Where is the headquarters of the United Nations located?\n1. London\n2. New York\n3. Paris\n4. Geneva\n");
			scanf("%d", &e);
			if(e == 2){
				printf("\nCorrect!\n");
				score[1][9] = 1;
			}
			else
				{printf("\n\aIncorrect!\n");
				}
		}
		else if(b == 3)
		{
			printf("\nQ1. In which year was the Lahore Resolution passed?\n1. 1930\n2. 1940\n3. 1942\n4. 1947\n");
			scanf("%d", &e);
			if(e == 2){
				printf("\nCorrect!\n");
				score[1][0] = 1;
			}
			else
				{printf("\n\aIncorrect!\n");
				}
			printf("\nQ2. Which is the deepest ocean in the world?\n1. Atlantic Ocean\n2. Indian Ocean\n3. Pacific Ocean\n4. Arctic Ocean\n");
			scanf("%d", &e);
			if(e == 3){
				printf("\nCorrect!\n");
				score[1][1] = 1;
			}
			else
				{printf("\n\aIncorrect!\n");
				}
			printf("\nQ3. Who was the first woman Prime Minister of Pakistan?\n1. Fatima Jinnah\n2. Benazir Bhutto\n3. Hina Rabbani Khar\n4. Maryam Nawaz\n");
			scanf("%d", &e);
			if(e == 2){
				printf("\nCorrect!\n");
				score[1][2] = 1;
			}
			else
				{printf("\n\aIncorrect!\n");
				}
			printf("\nQ4. Which strait separates Asia from North America?\n1. Strait of Hormuz\n2. Strait of Malacca\n3. Bering Strait\n4. Gibraltar Strait\n");
			scanf("%d", &e);
			if(e == 3){
				printf("\nCorrect!\n");
				score[1][3] = 1;
			}
			else
				{printf("\n\aIncorrect!\n");
				}
			printf("\nQ5. What is the chemical symbol for tungsten?\n1. T\n2. Tu\n3. W\n4. Tg\n");
			scanf("%d", &e);
			if(e == 3){
				printf("\nCorrect!\n");
				score[1][4] = 1;
			}
			else
				{printf("\n\aIncorrect!\n");
				}
			printf("\nQ6. Which scientist formulated the three laws of motion?\n1. Albert Einstein\n2. Isaac Newton\n3. Galileo Galilei\n4. Nikola Tesla\n");
			scanf("%d", &e);
			if(e == 2){
				printf("\nCorrect!\n");
				score[1][5] = 1;
			}
			else
				{printf("\n\aIncorrect!\n");
				}
			printf("\nQ7. Which is the largest desert in the world, including polar deserts?\n1. Sahara Desert\n2. Arabian Desert\n3. Gobi Desert\n4. Antarctic Desert\n");
			scanf("%d", &e);
			if(e == 4){
				printf("\nCorrect!\n");
				score[1][6] = 1;
			}
			else
				{printf("\n\aIncorrect!\n");
				}
			printf("\nQ8. In which year was the United Nations established?\n1. 1919\n2. 1939\n3. 1945\n4. 1950\n");
			scanf("%d", &e);
			if(e == 3){
				printf("\nCorrect!\n");
				score[1][7] = 1;
			}
			else
				{printf("\n\aIncorrect!\n");
				}
			printf("\nQ9. Which Pakistani mountain is the second-highest peak in the world?\n1. Nanga Parbat\n2. K2\n3. Broad Peak\n4. Gasherbrum I\n");
			scanf("%d", &e);
			if(e == 2){
				printf("\nCorrect!\n");
				score[1][8] = 1;
			}
			else
				{printf("\n\aIncorrect!\n");
				}
			printf("\nQ10. Which treaty formally ended World War I between Germany and the Allied Powers?\n1. Treaty of Paris\n2. Treaty of Versailles\n3. Treaty of Vienna\n4. Treaty of Rome\n");
			scanf("%d", &e);
			if(e == 2){
				printf("\nCorrect!\n");
				score[1][9] = 1;
			}
			else
				{printf("\n\aIncorrect!\n");
				}
		}
		else
		{
			printf("\nInvalid difficulty choice!\n");
		}
	}
	else if(a == 5)
	{
		if(b == 1)
		{
			printf("\nQ1. What does CPU stand for?\n1. Central Processing Unit\n2. Computer Personal Unit\n3. Central Program Utility\n4. Control Processing User\n");
			scanf("%d", &e);
			if(e == 1)
			{
				printf("\nCorrect!\n");
				score[1][0] = 1;
			}
			else
			{
				printf("\nIncorrect!\n");
			}
			printf("\nQ2. Which device is used to enter text into a computer?\n1. Monitor\n2. Keyboard\n3. Speaker\n4. Printer\n");
			scanf("%d", &e);
			if(e == 2)
			{
				printf("\nCorrect!\n");
				score[1][1] = 1;
			}
			else
			{
				printf("\nIncorrect!\n");
			}
			printf("\nQ3. What does RAM stand for?\n1. Read Access Memory\n2. Random Access Memory\n3. Run Access Module\n4. Remote Access Memory\n");
			scanf("%d", &e);
			if(e == 2)
			{
				printf("\nCorrect!\n");
				score[1][2]= 1;
			}
			else
			{
				printf("\nIncorrect!\n");
			}
			printf("\nQ4. Which of these is an operating system?\n1. Microsoft Word\n2. Google Chrome\n3. Windows\n4. Photoshop\n");
			scanf("%d", &e);
			if(e == 3)
			{
				printf("\nCorrect!\n");
				score[1][3] = 1;
			}
			else
			{
				printf("\nIncorrect!\n");
			}
			printf("\nQ5. Which language is primarily used to structure web pages?\n1. HTML\n2. C\n3. Python\n4. SQL\n");
			scanf("%d", &e);
			if(e == 1)
			{
				printf("\nCorrect!\n");
				score[1][4] = 1;
			}
			else
			{
				printf("\nIncorrect!\n");
			}
			printf("\nQ6. What is the brain of a computer commonly called?\n1. Hard Disk\n2. CPU\n3. RAM\n4. Monitor\n");
			scanf("%d", &e);
			if(e == 2)
			{
				printf("\nCorrect!\n");
				score[1][5] = 1;
			}
			else
			{
				printf("\nIncorrect!\n");
			}
			printf("\nQ7. Which device displays visual output?\n1. Keyboard\n2. Mouse\n3. Monitor\n4. Scanner\n");
			scanf("%d", &e);
			if(e == 3)
			{
				printf("\nCorrect!\n");
				score[1][6] = 1;
			}
			else
			{
				printf("\nIncorrect!\n");
			}
			printf("\nQ8. What does WWW stand for?\n1. World Wide Web\n2. World Web Window\n3. Wide World Wire\n4. Web World Work\n");
			scanf("%d", &e);
			if(e == 1)
			{
				printf("\nCorrect!\n");
				score[1][7] = 1;
			}
			else
			{
				printf("\nIncorrect!\n");
			}
			printf("\nQ9. Which of these is an example of an input device?\n1. Printer\n2. Monitor\n3. Speaker\n4. Mouse\n");
			scanf("%d", &e);
			if(e == 4)
			{
				printf("\nCorrect!\n");
				score[1][8] = 1;
			}
			else
			{
				printf("\nIncorrect!\n");
			}
			printf("\nQ10. Which number system does a computer fundamentally use?\n1. Decimal\n2. Binary\n3. Octal\n4. Roman\n");
			scanf("%d", &e);
			if(e == 2)
			{
				printf("\nCorrect!\n");
				score[1][9] = 1;
			}
			else
			{
				printf("\nIncorrect!\n");
			}
		}
		else if(b == 2)
		{
			printf("\nQ1. What is the purpose of a compiler?\n1. To browse websites\n2. To translate source code into machine code or another target form\n3. To store files\n4. To manage computer hardware\n");
			scanf("%d", &e);
			if(e == 2)
			{
				printf("\nCorrect!\n");
				score[1][0] = 1;
			}
			else
			{
				printf("\nIncorrect!\n");
			}
			printf("\nQ2. Which of these is a volatile memory?\n1. ROM\n2. Hard Disk\n3. RAM\n4. SSD\n");
			scanf("%d", &e);
			if(e == 3)
			{
				printf("\nCorrect!\n");
				score[1][1] = 1;
			} else
			{
				printf("\nIncorrect!\n");
			}
			printf("\nQ3. What does HTML stand for?\n1. HyperText Markup Language\n2. HighText Machine Language\n3. Hyper Transfer Main Language\n4. Home Tool Markup Language\n");
			scanf("%d", &e);
			if(e == 1)
			{
				printf("\nCorrect!\n");
				score[1][2] = 1;
			} else
			{
				printf("\nIncorrect!\n");
			}
			printf("\nQ4. Which data type is commonly used to store whole numbers in C?\n1. float\n2. int\n3. char\n4. double\n");
			scanf("%d", &e);
			if(e == 2)
			{
				printf("\nCorrect!\n");
				score[1][3] = 1;
			} else
			{
				printf("\nIncorrect!\n");
			}
			printf("\nQ5. What is the extension of a C source file?\n1. .cpp\n2. .java\n3. .c\n4. .py\n");
			scanf("%d", &e);
			if(e == 3)
			{
				printf("\nCorrect!\n");
				score[1][4] = 1;
			} else
			{
				printf("\nIncorrect!\n");
			}
			printf("\nQ6. Which loop executes its body at least once?\n1. for loop\n2. while loop\n3. do-while loop\n4. None of these\n");
			scanf("%d", &e);
			if(e == 3)
			{
				printf("\nCorrect!\n");
				score[1][5] = 1;
			} else
			{
				printf("\nIncorrect!\n");
			}
			printf("\nQ7. What does LAN stand for?\n1. Large Area Network\n2. Local Area Network\n3. Long Access Network\n4. Linked Area Node\n");
			scanf("%d", &e);
			if(e == 2)
			{
				printf("\nCorrect!\n");
				score[1][6] = 1;
			} else
			{
				printf("\nIncorrect!\n");
			}
			printf("\nQ8. Which operator is used to find the remainder in C?\n1. /\n2. *\n3. %\n4. //\n");
			scanf("%d", &e);
			if(e == 3)
			{
				printf("\nCorrect!\n");
				score[1][7] = 1;
			} else
			{
				printf("\nIncorrect!\n");
			}
			printf("\nQ9. Which data structure follows the LIFO principle?\n1. Queue\n2. Stack\n3. Array\n4. Linked List\n");
			scanf("%d", &e);
			if(e == 2)
			{
				printf("\nCorrect!\n");
				score[1][8] = 1;
			}
			else
			{
				printf("\nIncorrect!\n");
			}
			printf("\nQ10. Which protocol is commonly used for secure web browsing?\n1. HTTP\n2. FTP\n3. HTTPS\n4. SMTP\n");
			scanf("%d", &e);
			if(e == 3)
			{
				printf("\nCorrect!\n");
				score[1][9]= 1;
			}
			else
			{
				printf("\nIncorrect!\n");
			}
		}
else if(b == 3)
		{
			printf("\nQ1. What is the time complexity of binary search in a sorted array?\n1. O(n)\n2. O(log n)\n3. O(n2)\n4. O(1)\n");
			scanf("%d", &e);
			if(e == 2)
			{
				printf("\nCorrect!\n");
				score[1][0] = 1;
			}
			else
			{
				printf("\nIncorrect!\n");
			}
			printf("\nQ2. What does a pointer store in C?\n1. A character\n2. An integer only\n3. A memory address\n4. A floating-point value only\n");
			scanf("%d", &e);
			if(e == 3)
			{
				printf("\nCorrect!\n");
				score[1][1] = 1;
			}
			else
			{
				printf("\nIncorrect!\n");
			}
			printf("\nQ3. Which function is used to dynamically allocate memory in C?\n1. printf()\n2. scanf()\n3. malloc()\n4. strlen()\n");
			scanf("%d", &e);
			if(e == 3)
			{
				printf("\nCorrect!\n");
				score[1][2] = 1;
			}
			else
			{
				printf("\nIncorrect!\n");
			}
			printf("\nQ4. What is the output of printf(\"%d\", 10 / 3) in C?\n1. 3.33\n2. 3\n3. 4\n4. 3.0\n");
			scanf("%d", &e);
			if(e == 2)
			{
				printf("\nCorrect!\n");
				score[1][3] = 1;
			}
			else
			{
				printf("\nIncorrect!\n");
			}
			printf("\nQ5. Which sorting algorithm has an average time complexity of O(n log n)?\n1. Bubble Sort\n2. Selection Sort\n3. Merge Sort\n4. Linear Search\n");
			scanf("%d", &e);
			if(e == 3)
			{
				printf("\nCorrect!\n");
				score[1][4] = 1;
			}
			else
			{
				printf("\nIncorrect!\n");
			}
			
			printf("\nQ6. What does NULL represent when used as a pointer value in C?\n1. A pointer to the first array element\n2. A pointer that does not point to a valid object or function\n3. An integer with value 1\n4. The address of the last memory location\n");
			scanf("%d", &e);
			if(e == 2)
			{
				printf("\nCorrect!\n");
				score[1][5] = 1;
			}
			else
			{
				printf("\nIncorrect!\n");
			}
			printf("\nQ7. Which data structure is commonly used to implement recursion?\n1. Queue\n2. Stack\n3. Graph\n4. Hash Table\n");
			scanf("%d", &e);
			if(e == 2)
			{
				printf("\nCorrect!\n");
				score[1][6] = 1;
			}
			else
			{
				printf("\nIncorrect!\n");
			}
			printf("\nQ8. What is the main purpose of an operating system?\n1. To design websites\n2. To manage hardware and software resources\n3. To compile every programming language\n4. To create databases only\n");
			scanf("%d", &e);
			if(e == 2)
			{
				printf("\nCorrect!\n");
				score[1][7] = 1;
			}
			else
			{
				printf("\nIncorrect!\n");
			}
			printf("\nQ9. Which of the following is a correct declaration of a pointer to an integer in C?\n1. int p;\n2. pointer int p;\n3. int *p;\n4. *int p;\n");
			scanf("%d", &e);
			if(e == 3)
			{
				printf("\nCorrect!\n");
				score[1][8] = 1;
			}
			else
			{
				printf("\nIncorrect!\n");
			}
			printf("\nQ10. What is the main purpose of a database index?\n1. To increase image quality\n2. To speed up data retrieval\n3. To delete duplicate files automatically\n4. To encrypt all records\n");
			scanf("%d", &e);
			if(e == 2)
			{
				printf("\nCorrect!\n");
				score[1][9] = 1;
			}
			else
			{
				printf("\nIncorrect!\n");
			}
		}
		else
		{
			printf("\nInvalid difficulty choice!\n");
		}
	}
	else
	{
		printf("\nInvalid subject choice!\n");
	}
	
	//Result Calculation
	for(int i = 0; i < 10; i++)
	{
    	totals = totals + score[1][i];
	}

	percentage = (totals / 10.0) * 100;

	printf("\n\n========== QUIZ RESULT ==========\n");
	printf("Total Questions: 10\n");
	printf("Correct Answers: %d\n", totals);
	printf("Wrong Answers: %d\n", 10 - totals);
	printf("Your Score: %d/10\n", totals);
	printf("Percentage: %.2f%%\n", percentage);

	if(percentage >= 80)
	{
	    printf("Performance: Excellent!\n");
	}
	else if(percentage >= 60)
	{
	    printf("Performance: Good!\n");
	}
	else if(percentage >= 40)
	{
    	printf("Performance: Average!\n");
	}
	else
	{
	    printf("Performance: Needs Improvement!\n");
	}

	printf("=================================\n");

	printf("\nDo you want to retry? (Y/N)\n");
	scanf(" %c", &ans);
	} while(ans == 'Y' || ans == 'y');
	
	printf("\nThank you for participating in the quiz!\n");
	printf("Goodbye!   \n...\n...\n .. *whispers (for now)\n");
	return 0;
}
