// FUN_00849e10 @ 00849e10 body=[[00849e10, 00849e27]]


void FUN_00849e10(void)

{
  code *pcVar1;
  int *in_ECX;
  
  pcVar1 = *(code **)(*in_ECX + 0x1c);
  in_ECX[5] = 0;
  (*pcVar1)(0);
  return;
}

