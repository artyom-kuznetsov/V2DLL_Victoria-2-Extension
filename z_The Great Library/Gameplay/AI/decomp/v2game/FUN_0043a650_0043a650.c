// FUN_0043a650 @ 0043a650 body=[[0043a650, 0043a673]]


void FUN_0043a650(void)

{
  undefined4 *in_EAX;
  uint *unaff_ESI;
  undefined8 uVar1;
  
  uVar1 = __alldiv(*unaff_ESI << 0xf,unaff_ESI[1] << 0xf | *unaff_ESI >> 0x11,*in_EAX,in_EAX[1]);
  *(undefined8 *)unaff_ESI = uVar1;
  return;
}

