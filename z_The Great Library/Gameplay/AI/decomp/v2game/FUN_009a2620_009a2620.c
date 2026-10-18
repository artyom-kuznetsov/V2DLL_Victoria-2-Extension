// FUN_009a2620 @ 009a2620 body=[[009a2620, 009a2706]]


void FUN_009a2620(int param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  byte *pbVar5;
  bool bVar6;
  
  iVar4 = param_1;
  pbVar2 = (byte *)(in_ECX + 8);
  if (0xf < *(uint *)(in_ECX + 0x1c)) {
    pbVar2 = *(byte **)pbVar2;
  }
  pbVar5 = &DAT_00ded94d;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_009a2660:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_009a2665;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_009a2660;
    pbVar2 = pbVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_009a2665:
  if (iVar3 == 0) {
    FUN_00408ed0(param_1 + 0x32c,0,0xffffffff);
  }
  if (param_2 == 0xc3) {
    iVar4 = FID_conflict__sscanf((char *)(iVar4 + 0x22c),"%u",&param_1);
    if (iVar4 != 0) {
      *(undefined2 *)(in_ECX + 0x34) = (undefined2)param_1;
      return;
    }
    *(undefined2 *)(in_ECX + 0x34) = 0;
    FUN_009a1140();
    return;
  }
  if (param_2 == 200) {
    FUN_009a1bb0(in_ECX + 0x36);
    return;
  }
  if ((param_2 == 0xf3) &&
     (iVar4 = FID_conflict__sscanf((char *)(iVar4 + 0x22c),"%u",in_ECX + 0x38), iVar4 == 0)) {
    FUN_009a1140();
  }
  return;
}

