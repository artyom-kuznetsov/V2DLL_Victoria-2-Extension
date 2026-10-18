// FUN_0048c910 @ 0048c910 body=[[0048c910, 0048c98a]]


int FUN_0048c910(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *in_EAX;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  if (param_1 != in_EAX) {
    piVar5 = in_EAX + 0x12;
    do {
      piVar6 = piVar5 + -0x16;
      iVar8 = param_2 + -0x58;
      FID_conflict__memcpy((void *)(param_2 + -0x50),piVar5 + -0x26,DAT_012587f4);
      iVar7 = piVar5[-0x15] - *piVar6 >> 3;
      FUN_0043a880();
      iVar4 = 1;
      if (1 < iVar7) {
        do {
          iVar2 = *piVar6;
          iVar3 = *(int *)(param_2 + -0x10);
          *(undefined4 *)(iVar3 + iVar4 * 8) = *(undefined4 *)(iVar2 + iVar4 * 8);
          *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = *(undefined4 *)(iVar2 + 4 + iVar4 * 8);
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar7);
      }
      piVar1 = piVar5 + -0x28;
      piVar5 = piVar6;
      param_2 = iVar8;
    } while (piVar1 != param_1);
  }
  return param_2;
}

