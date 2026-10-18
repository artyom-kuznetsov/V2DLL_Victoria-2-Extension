// FUN_0048c820 @ 0048c820 body=[[0048c820, 0048c895]]


int FUN_0048c820(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *in_EAX;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  if (in_EAX != param_1) {
    piVar5 = in_EAX + 0x12;
    do {
      FID_conflict__memcpy((void *)(param_2 + 8),piVar5 + -0x10,DAT_012587f4);
      iVar6 = piVar5[1] - *piVar5 >> 3;
      FUN_0043a880();
      iVar4 = 1;
      if (1 < iVar6) {
        do {
          iVar2 = *piVar5;
          iVar3 = *(int *)(param_2 + 0x48);
          *(undefined4 *)(iVar3 + iVar4 * 8) = *(undefined4 *)(iVar2 + iVar4 * 8);
          *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = *(undefined4 *)(iVar2 + 4 + iVar4 * 8);
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar6);
      }
      param_2 = param_2 + 0x58;
      piVar1 = piVar5 + 4;
      piVar5 = piVar5 + 0x16;
    } while (piVar1 != param_1);
  }
  return param_2;
}

