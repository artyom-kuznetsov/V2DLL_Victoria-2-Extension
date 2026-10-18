// FUN_009ee610 @ 009ee610 body=[[009ee610, 009ee623]]


void FUN_009ee610(void)

{
  code *pcVar1;
  int *in_ECX;
  
  pcVar1 = *(code **)(*in_ECX + 0x114);
  in_ECX[0x1c] = 3;
  (*pcVar1)(0);
  return;
}

