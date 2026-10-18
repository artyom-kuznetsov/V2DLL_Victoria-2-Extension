// FUN_009f5290 @ 009f5290 body=[[009f5290, 009f52ca]]


void FUN_009f5290(undefined4 param_1)

{
  code *pcVar1;
  int *in_ECX;
  
  FUN_00409350(&DAT_00ded94d,0);
  in_ECX[0xe] = 0;
  pcVar1 = *(code **)(*in_ECX + 0x54);
  *(undefined1 *)((int)in_ECX + 0xb5) = 1;
  (*pcVar1)(param_1);
  return;
}

