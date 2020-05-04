void maind()
{
uchar state = 0; //Digitx unselected
uchar digit = 0;
 while(1)
				{
					digitx = 0;
					while(state == 0) //state0 Select digitx
							{
							 segment(1);	
							 digit(digitx);
							 getkey();
							}
					while(state == 1)//state1 select modifier
							{
							segment(1)
							digit(digitx);
							delay(100);
							seg(2)
							}
					
				}
}
