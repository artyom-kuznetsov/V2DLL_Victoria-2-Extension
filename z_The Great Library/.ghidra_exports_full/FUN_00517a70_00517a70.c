// FUN_00517a70 @ 00517a70 body=[[00517a70, 00517ae9]]


void FUN_00517a70(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int *in_EAX;
  int iVar5;
  int *piVar6;
  
  if (in_EAX[1] != *(int *)(param_1 + 0x20)) {
    iVar1 = *(int *)(DAT_012588e8 + 0xb0c);
    iVar5 = FUN_00aae9af(0x28);
    if (iVar5 == 0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)FUN_0092d0a0();
    }
    iVar5 = in_EAX[1];
    iVar2 = *(int *)(param_1 + 0x1c);
    iVar3 = *(int *)(param_1 + 0x20);
    piVar6[4] = *in_EAX;
    piVar6[2] = iVar2;
    piVar6[5] = iVar5;
    piVar6[6] = iVar1;
    pcVar4 = *(code **)(*piVar6 + 0x28);
    piVar6[3] = iVar3;
    (*pcVar4)();
    FUN_004a7bc0(piVar6);
  }
  return;
}

