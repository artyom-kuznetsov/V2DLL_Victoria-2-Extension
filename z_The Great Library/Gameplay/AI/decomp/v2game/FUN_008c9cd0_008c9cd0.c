// FUN_008c9cd0 @ 008c9cd0 body=[[008c9cd0, 008c9d7c]]


void FUN_008c9cd0(int param_1,int param_2,char param_3)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  
  if (*(int *)(param_2 + 0x10) != 0) {
    iVar2 = in_ECX[8];
    if ((char)in_ECX[6] == '\0') {
      if (*(char *)((int)in_ECX + 0x19) != '\0') {
        iVar2 = *(int *)(param_2 + 0x30);
      }
    }
    else {
      iVar2 = FUN_008a8dc0();
      iVar2 = *(int *)(iVar2 + 4);
    }
    if (param_3 == '\0') {
      if (iVar2 == *(int *)(param_1 + 0xc)) {
        cVar1 = (**(code **)(*in_ECX + 0x18))(param_2);
        if (cVar1 == '\0') {
          FUN_0085ba40();
          return;
        }
      }
    }
    else if (iVar2 != *(int *)(param_1 + 0xc)) {
      cVar1 = (**(code **)(*in_ECX + 0x18))(param_2);
      if (cVar1 != '\0') {
        FUN_0085ba40();
      }
    }
  }
  return;
}

