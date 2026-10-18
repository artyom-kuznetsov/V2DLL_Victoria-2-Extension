// FUN_008490b0 @ 008490b0 body=[[008490b0, 00849115]]


void FUN_008490b0(undefined4 param_1)

{
  int iVar1;
  int in_EAX;
  int in_ECX;
  int iVar2;
  undefined1 local_6c [100];
  int local_8;
  
  iVar1 = (in_EAX - in_ECX) / 100;
  iVar2 = iVar1 / 2;
  if (0 < iVar2) {
    local_8 = iVar2 * 100 + in_ECX;
    do {
      local_8 = local_8 + -100;
      iVar2 = iVar2 + -1;
      FUN_00849680();
      FUN_008497a0(iVar1,local_6c,param_1);
    } while (0 < iVar2);
  }
  return;
}

