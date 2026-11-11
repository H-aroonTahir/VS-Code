#include<stdio.h>
#include<math.h>
#include<string.h>
#define bold   "\033[1m"
#define reset  "\033[0m"


int main()

{
	int a, b;
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
	    
	   int total  =  sizeof(subjects)/ sizeof(subjects[0]);
	   
	   for(int i = 0; i<total; i++)
	   {
	   	printf("%d. %s: \n", i+1, subjects[i]);
		} 
		
		
      printf("\nEnter your choice: "); 
      scanf("%d", &a);
      
      	printf("\n=====================================================\n");
      		printf("\n"bold"DIFFICULTY LEVEL"reset"\n");
        printf("\n=====================================================\n");	
      
      const char *levels[] = {
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
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nChoose the correct spelling.\n1.Beautifull \n2.Beutiful \n3.Beautiful \n4.Butiful\n");
	  	   scanf("%d", &e);
	  	   if(e == 3){
	  	      	printf("\nCorrect!\n");
				}
				else
				printf("\n\aIncorrect!\n");
			printf("\nOpposite of hot? \n1.Warm \n2.Cold \n3.Dry \n4.Bright\n");
	  	   scanf("%d", &e);
	  	   if(e == 2){
	  	      	printf("\nCorrect!\n");
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nChoose the correct sentence. \n1.She are happy \n2.She is happy \n3.She am happy \n4.She be happy\n");
	  	   scanf("%d", &e);
	  	   if(e == 2){
	  	      	printf("\nCorrect!\n");
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nComplete: I ___ a student. \n1.Is \n2.Are \n3.Am \n4.Be\n");
	  	   scanf("%d", &e);
	  	   if(e == 3){
	  	      	printf("\nCorrect!\n");
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nChoose the correct article: ___ umbrella. \n1.A \n2.An \n3.Thee \n4.No article\n");
	  	   scanf("%d", &e);
	  	   if(e == 2){
	  	      	printf("\nCorrect!\n");
				}
				else
				printf("\n\aIncorrect!\n");
			
			printf("\nWhat is the comparative form of tall? \n1.Tallest \n2.More tall \n3.Taller \n4.Tallful\n");
	  	   scanf("%d", &e);
	  	   if(e == 3){
	  	      	printf("\nCorrect!\n");
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nPast tense of eat?  \n1.Eated \n2.Ate \n3.Eating \n4.Eaten\n");
	  	   scanf("%d", &e);
	  	   if(e == 2){
	  	      	printf("\nCorrect!\n");
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nWhich word is an adverb? \n1.Slowly \n2.Slow \n3.Slowness \n4.Slower\n");
	  	   scanf("%d", &e);
	  	   if(e == 1){
	  	      	printf("\nCorrect!\n");
				}
				else
				printf("\n\aIncorrect!\n");	
				
			printf("\nWhich word is a verb? \n1.Happiness \n2.Slowness \n3.Blue \n4.Jump\n");
	  	   scanf("%d", &e);
	  	   if(e == 4){
	  	      	printf("\nCorrect!\n");
				}
				else
				printf("\n\aIncorrect!\n");									
		  }
		  
		else  if (b == 2){
	  	   printf("\nChoose the past perfect form. \n1.She has left \n2.She had left \n3.She have left \n4.She leaving\n");
	  	   scanf("%d", &e);
	  	   if(e == 2){
	  	      	printf("\nCorrect!\n");
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nChoose the correct preposition: \nShe is interested ___ music. \n1.In \n2.On \n3.At \n4.By\n");
	  	   scanf("%d", &e);
	  	   if(e == 1){
	  	      	printf("\nCorrect!\n");
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nWhat is the synonym of rapid? \n1.Fast \n2.Slow \n3.Weak \n4.Quiet\n");
	  	   scanf("%d", &e);
	  	   if(e == 1){
	  	      	printf("\nCorrect!\n");
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nChoose the correct passive sentence for \"Ali wrote the letter\". \n1.The letter wrote Ali. \n2.The letter was written by Ali. \n3.Ali was written the letter. \n4.The letter is write by Ali. \n");
	  	   scanf("%d", &e);
	  	   if(e == 2){
	  	      	printf("\nCorrect!\n");
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nComplete the sentence: Ali and I _______ studying at Library. \n1.Is \n2.Are \n3.Am \n4.Be\n");
	  	   scanf("%d", &e);
	  	   if(e == 2){
	  	      	printf("\nCorrect!\n");
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nChoose the correct article: He is ____ Honest man. \n1.A \n2.The \n3.An \n4.No article\n");
	  	   scanf("%d", &e);
	  	   if(e == 2){
	  	      	printf("\nCorrect!\n");
				}
				else
				printf("\n\aIncorrect!\n");
			
			printf("\nBy next month, I _____ all my final exams and can finally relax.  \n1. will finish \n2. will have finished \n3. will be finishing \n4. finished\n");
	  	   scanf("%d", &e);
	  	   if(e == 2){
	  	      	printf("\nCorrect!\n");
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nCorrect spelling is?  \n1.Accommodation \n2.Accomodation \n3.Acomodation \n4.Acommodation\n");
	  	   scanf("%d", &e);
	  	   if(e == 1){
	  	      	printf("\nCorrect!\n");
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nFind the mistake, \nShaheer and Hamza are going to university.? \n1.Helping Verb \n2.Noun \n3.Punctuation \n4.None\n");
	  	   scanf("%d", &e);
	  	   if(e == 4){
	  	      	printf("\nCorrect!\n");
				}
				else
				printf("\n\aIncorrect!\n");	
				
			printf("\nThe restaurant _____ we had dinner last night was awarded a Michelin star. \n1.where \n2.whose \n3.who \n4.which\n");
	  	   scanf("%d", &e);
	  	   if(e == 1){
	  	      	printf("\nCorrect!\n");
				}
				else
				printf("\n\aIncorrect!\n");									
		  }
		  else if(b == 3){
	  	   printf("\nShe almost spent 1000$ in herself. \n1. Dangling Modifier \n2. Phrase Modifier \n3.Misplaced Modifier \n4.Complex Modifier\n");
	  	   scanf("%d", &e);
	  	   if(e == 3){
	  	      	printf("\nCorrect!\n");
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nChoose the correct preposition: \nThe agreement is contingent __ approval from the board.. \n1.In \n2.On \n3.At \n4.By\n");
	  	   scanf("%d", &e);
	  	   if(e == 2){
	  	      	printf("\nCorrect!\n");
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nWalking into the room, the lights turned off. \n1. Dangling Modifier \n2. Phrase Modifier \n3.Misplaced Modifier \n4.Complex Modifier\n");
	  	   scanf("%d", &e);
	  	   if(e == 1){
	  	      	printf("\nCorrect!\n");
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nWhich kind of Phrase it has? \nShe spoke very softly during the meeting. \n1.Verb phrase. \n2.Noun phrase. \n3.Adverb phrase. \n4.Adjective phrase.\n");
	  	   scanf("%d", &e);
	  	   if(e == 3){
	  	      	printf("\nCorrect!\n");
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nChoose the correctly punctuated sentence. \n1.However I disagree with you \n2.However, I disagree with you \n3.However I, disagree with you \n4.However; I, disagree with you\n");
	  	   scanf("%d", &e);
	  	   if(e == 2){
	  	      	printf("\nCorrect!\n");
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nChoose the correct agreement. \n1.Neither the teacher nor the students was ready \n2.Neither teacher or students were ready \n3.Neither the teacher nor the students were ready \n4.Neither the teacher nor students is ready yesterday\n");
	  	   scanf("%d", &e);
	  	   if(e == 3){
	  	      	printf("\nCorrect!\n");
				}
				else
				printf("\n\aIncorrect!\n");
			
			printf("\nWhich is the correct spelling?  \n1.Conscientious \n2.Consciencious \n3.Conscentious \n4.Conscientous\n");
	  	   scanf("%d", &e);
	  	   if(e == 1){
	  	      	printf("\nCorrect!\n");
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nWhat does 'mitigate' mean?  \n1.Make worse \n2Make less severe \n3.Ignore completely \n4Measure exactly\n");
	  	   scanf("%d", &e);
	  	   if(e == 2){
	  	      	printf("\nCorrect!\n");
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nWhat does 'loquacious' mean? \n1.Talkative \n2.Silent \n3.Angry \n4.Forgetful\n");
	  	   scanf("%d", &e);
	  	   if(e == 1){
	  	      	printf("\nCorrect!\n");
				}
				else
				printf("\n\aIncorrect!\n");	
				
			printf("\nChoose the correct sentence. \n1.Despite of the rain, we went out \n2.Despite the rain, we went out \n3.Although the rain, we went out \n4.Despite it was raining, we went out\n");
	  	   scanf("%d", &e);
	  	   if(e == 2){
	  	      	printf("\nCorrect!\n");
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
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nWhich one is different? \n1.Apple \n2.Mango \n3.Carrot \n4.Banana\n");
	  	   scanf("%d", &e);
	  	   if(e == 3){
	  	      	printf("\nCorrect!\n");
				}
				else
				printf("\n\aIncorrect!\n");
			printf("\nIf CAT becomes DBU, what does DOG become? \n1.EPH \n2.EOG \n3.FPH \n4.DPI\n");
	  	   scanf("%d", &e);				
	  	   if(e == 1){
	  	      	printf("\nCorrect!\n");
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nComplete: A, C, E, G, ? \n1.F \n2.B \n3.D \n4.\nI");
	  	   scanf("%d", &e);
	  	   if(e == 4){
	  	      	printf("\nCorrect!\n");
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nHow many legs do 3 cats have? \n1.3 \n2.6 \n3.9 \n4.12\n");
	  	   scanf("%d", &e);
	  	   if(e == 4){
	  	      	printf("\nCorrect!\n");
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nHow many months are in two years? \n1.6 \n2.24 \n3.48 \n4.52\n");
	  	   scanf("%d", &e);
	  	   if(e == 2){
	  	      	printf("\nCorrect!\n");
				}
				else
				printf("\n\aIncorrect!\n");
			
			printf("\nWhich number is odd? \n1.91 \n2.7 \n3.23 \n4.39\n");
	  	   scanf("%d", &e);
	  	   if(e == 3){
	  	      	printf("\nCorrect!\n");
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nComplete: Z, Y, X, W, ?  \n1.V \n2.U \n3.T \n4.S\n");
	  	   scanf("%d", &e);
	  	   if(e == 1){
	  	      	printf("\nCorrect!\n");
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nWhich is a pair of opposites? \n1.Big and large \n2.Hot and cold \n3.Fast and quick \n4.Small and tiny\n");
	  	   scanf("%d", &e);
	  	   if(e == 2){
	  	      	printf("\nCorrect!\n");
				}
				else
				printf("\n\aIncorrect!\n");	
				
			printf("\nWhich is the lightest? \n1.Elephant \n2.Car \n3.Feather \n4.Bus\n");
	  	   scanf("%d", &e);
	  	   if(e == 3){
	  	      	printf("\nCorrect!\n");
				}
				else
				printf("\n\aIncorrect!\n");									
		  }
		  
		else  if (b == 2){
	  	   printf("\nWhat comes next: 3, 6, 12, 24, ?. \n136. \n242. \n3.48 \n4.54\n");
	  	   scanf("%d", &e);
	  	   if(e == 3){
	  	      	printf("\nCorrect!\n");
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nFive workers make 5 chairs in 5 days. How long do 10 workers take to make 10 chairs at the same rate? \n1.5 days \n2.10 days \n3.15 days \n4.20 days\n");
	  	   scanf("%d", &e);
	  	   if(e == 1){
	  	      	printf("\nCorrect!\n");
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nComplete: 1, 4, 9, 16, ? \n1.42 \n2.25 \n3.48 \n4.35\n");
	  	   scanf("%d", &e);
	  	   if(e == 2){
	  	      	printf("\nCorrect!\n");
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nIf BOOK becomes CPPL, TREE becomes: \n1.USFF \n2.UQFF \n3.USFE \n4.TSDD \n");
	  	   scanf("%d", &e);
	  	   if(e == 1){
	  	      	printf("\nCorrect!\n");
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nAli is taller than Bilal. Bilal is taller than Ahmed. \nWho is shortest? \n1.Ali \n2.Bilal \n3.Ahmed \n4.Everyone is equal\n");
	  	   scanf("%d", &e);
	  	   if(e == 3){
	  	      	printf("\nCorrect!\n");
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nComplete: 2, 6, 12, 20, 30, ? \n1.36 \n2.40 \n3.42 \n4.52\n");
	  	   scanf("%d", &e);
	  	   if(e == 3){
	  	      	printf("\nCorrect!\n");
				}
				else
				printf("\n\aIncorrect!\n");
			
			printf("\nWhat is the angle between clock hands at 3:00?  \n1.45 degrees \n2.90 degrees \n3.120 degrees \n4.180 degrees \n");
	  	   scanf("%d", &e);
	  	   if(e == 2){
	  	      	printf("\nCorrect!\n");
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nIf yesterday was Monday, what day is tomorrow?  \n1.Tuesday \n2.Wednesday \n3.Thursday \n4.Friday\n");
	  	   scanf("%d", &e);
	  	   if(e == 2){
	  	      	printf("\nCorrect!\n");
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nComplete: 81, 27, 9, 3, ? \n1.-1 \n2.0 \n3.1 \n4.2\n");
	  	   scanf("%d", &e);
	  	   if(e == 3){
	  	      	printf("\nCorrect!\n");
				}
				else
				printf("\n\aIncorrect!\n");	
				
			printf("\nIf all cats are animals, which statement is true? \n1.All animals are cats \n2.Cats are animals \n3.No cats are animals \n4.All animals are dogs\n");
	  	   scanf("%d", &e);
	  	   if(e == 2){
	  	      	printf("\nCorrect!\n");
				}
				else
				printf("\n\aIncorrect!\n");									
		  }
		  else if(b == 3){
	  	   printf("\nIf 4 pencils cost 20 rupees, what do 8 cost? \n1.30 rupees \n2.35 rupees \n3.40 rupees \n4.45 rupees\n");
	  	   scanf("%d", &e);
	  	   if(e == 3){
	  	      	printf("\nCorrect!\n");
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nComplete the Fibonacci sequence: 1, 1, 2, 3, 5, 8, ? \n1.11 \n2.12 \n3.13 \n4.14\n");
	  	   scanf("%d", &e);
	  	   if(e == 3){
	  	      	printf("\nCorrect!\n");
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nWalking into the room, the lights turned off. \n1. Dangling Modifier \n2. Phrase Modifier \n3.Misplaced Modifier \n4.Complex Modifier\n");
	  	   scanf("%d", &e);
	  	   if(e == 1){
	  	      	printf("\nCorrect!\n");
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nWhich kind of Phrase it has? \nShe spoke very softly during the meeting. \n1.Verb phrase. \n2.Noun phrase. \n3.Adverb phrase. \n4.Adjective phrase.\n");
	  	   scanf("%d", &e);
	  	   if(e == 3){
	  	      	printf("\nCorrect!\n");
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nChoose the correctly punctuated sentence. \n1.However I disagree with you \n2.However, I disagree with you \n3.However I, disagree with you \n4.However; I, disagree with you\n");
	  	   scanf("%d", &e);
	  	   if(e == 2){
	  	      	printf("\nCorrect!\n");
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nChoose the correct agreement. \n1.Neither the teacher nor the students was ready \n2.Neither teacher or students were ready \n3.Neither the teacher nor the students were ready \n4.Neither the teacher nor students is ready yesterday\n");
	  	   scanf("%d", &e);
	  	   if(e == 3){
	  	      	printf("\nCorrect!\n");
				}
				else
				printf("\n\aIncorrect!\n");
			
			printf("\nWhich is the correct spelling?  \n1.Conscientious \n2.Consciencious \n3.Conscentious \n4.Conscientous\n");
	  	   scanf("%d", &e);
	  	   if(e == 1){
	  	      	printf("\nCorrect!\n");
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nWhat does 'mitigate' mean?  \n1.Make worse \n2Make less severe \n3.Ignore completely \n4Measure exactly\n");
	  	   scanf("%d", &e);
	  	   if(e == 2){
	  	      	printf("\nCorrect!\n");
				}
				else
				printf("\n\aIncorrect!\n");
				
			printf("\nWhat does 'loquacious' mean? \n1.Talkative \n2.Silent \n3.Angry \n4.Forgetful\n");
	  	   scanf("%d", &e);
	  	   if(e == 1){
	  	      	printf("\nCorrect!\n");
				}
				else
				printf("\n\aIncorrect!\n");	
				
			printf("\nChoose the correct sentence. \n1.Despite of the rain, we went out \n2.Despite the rain, we went out \n3.Although the rain, we went out \n4.Despite it was raining, we went out\n");
	  	   scanf("%d", &e);
	  	   if(e == 2){
	  	      	printf("\nCorrect!\n");
				}
				else
				printf("\n\aIncorrect!\n");									
		  }
		  else
		  {
		  	printf("\nEnd of English!\n");
		  }
		  
	  }
	  
}