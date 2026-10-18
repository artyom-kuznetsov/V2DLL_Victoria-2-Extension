// FUN_0048c8a0 @ 0048c8a0 body=[[0048c8a0, 0048c90e]]


void FUN_0048c8a0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *in_EAX;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  if (in_EAX != param_1) {
    piVar6 = in_EAX + 0x12;
    do {
      FID_conflict__memcpy(piVar6 + -0x10,(void *)(param_2 + 8),DAT_012587f4);
      iVar5 = *(int *)(param_2 + 0x4c) - *(int *)(param_2 + 0x48) >> 3;
      FUN_0043a880();
      iVar4 = 1;
      if (1 < iVar5) {
        do {
          iVar2 = *(int *)(param_2 + 0x48);
          iVar3 = *piVar6;
          *(undefined4 *)(iVar3 + iVar4 * 8) = *(undefined4 *)(iVar2 + iVar4 * 8);
          *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = *(undefined4 *)(iVar2 + 4 + iVar4 * 8);
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar5);
      }
      piVar1 = piVar6 + 4;
      piVar6 = piVar6 + 0x16;
    } while (piVar1 != param_1);
  }
  return;
}

