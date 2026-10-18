// FUN_004c3ee0 @ 004c3ee0 body=[[004c3ee0, 004c3f2f]]


void FUN_004c3ee0(undefined4 param_1,int param_2)

{
  int iVar1;
  int in_EAX;
  int *piVar2;
  int iVar3;
  
  iVar1 = (*(int *)(in_EAX + 0xcc) - *(int *)(in_EAX + 200)) / 0x24;
  iVar3 = 0;
  if (0 < iVar1) {
    piVar2 = (int *)(*(int *)(in_EAX + 200) + 4);
    do {
      if (*piVar2 == param_2) {
        return;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 9;
    } while (iVar3 < iVar1);
  }
  FUN_004c98f0();
  return;
}

