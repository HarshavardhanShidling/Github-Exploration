;Program to add two 32bit numbers
;R1 = num1, R2 = num2, result = R1 + R2

		AREA add32bit,CODE,READONLY
		ENTRY
		
		
		MOV R1,#0X02; ;02 is loaded into R1
		MOV R2,#0X04; ;04 is loaded into R2
		
		ADDS R3,R1,R2; :R1 and R2 is added store result into R3
		
		NOP	        ;stand for No operation
			
STOP    B STOP	;goto branch loop

		END