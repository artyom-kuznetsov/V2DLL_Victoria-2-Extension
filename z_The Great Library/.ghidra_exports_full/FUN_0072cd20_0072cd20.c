// FUN_0072cd20 @ 0072cd20 body=[[0072cd20, 0072cd81]]


void FUN_0072cd20(int param_1,int param_2)

{
  int in_ECX;
  int iVar1;
  
  if (param_2 == 0x3e5) {
    iVar1 = in_ECX + 0x3c;
  }
  else {
    if (param_2 != 0x42e) {
      FUN_009a2620(param_1,param_2);
      return;
    }
    iVar1 = in_ECX + 0x40;
  }
  iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",iVar1);
  if (iVar1 == 0) {
    FUN_009a1140();
  }
  return;
}

