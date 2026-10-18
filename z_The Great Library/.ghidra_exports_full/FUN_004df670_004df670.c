// FUN_004df670 @ 004df670 body=[[004df670, 004df6a9] [004df6b0, 004df738]]


int FUN_004df670(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int in_EAX;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = (in_EAX - param_1) / 0x160;
  if (iVar4 < 1) {
    return param_1;
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  do {
    iVar6 = iVar4 / 2;
    iVar5 = iVar6 * 0x160 + param_1;
    uVar2 = *(uint *)(iVar5 + 0x18);
    uVar3 = uVar2;
    if (uVar1 <= uVar2) {
      uVar3 = uVar1;
    }
    uVar3 = FUN_00414bd0(uVar3);
    if (uVar3 == 0) {
      if (uVar1 <= uVar2) {
        uVar3 = (uint)(uVar2 != uVar1);
        goto LAB_004df70e;
      }
LAB_004df710:
      param_1 = iVar5 + 0x160;
      iVar6 = iVar4 + (-1 - iVar6);
    }
    else {
LAB_004df70e:
      if ((int)uVar3 < 0) goto LAB_004df710;
    }
    iVar4 = iVar6;
    if (iVar6 < 1) {
      return param_1;
    }
  } while( true );
}

