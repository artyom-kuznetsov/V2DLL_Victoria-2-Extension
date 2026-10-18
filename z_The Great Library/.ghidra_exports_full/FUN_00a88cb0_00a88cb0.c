// FUN_00a88cb0 @ 00a88cb0 body=[[00a88cb0, 00a88e1f]]


undefined4 FUN_00a88cb0(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  u_long uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int unaff_EDI;
  
  if (*(uint *)(param_3 + 4) < 0x14) {
    return 0;
  }
  uVar2 = ntohl(*(u_long *)(param_3 + 0x10));
  iVar4 = DAT_012586d0;
  uVar7 = DAT_012586d0 - uVar2;
  if (86399999 < uVar7) {
    return 0;
  }
  *(int *)(unaff_EDI + 0x40) = DAT_012586d0;
  *(undefined4 *)(unaff_EDI + 0x48) = 0;
  FUN_00a89f10();
  uVar1 = *(uint *)(unaff_EDI + 0x8c);
  iVar5 = *(uint *)(unaff_EDI + 0x90) - (*(uint *)(unaff_EDI + 0x90) >> 2);
  *(int *)(unaff_EDI + 0x90) = iVar5;
  if (uVar7 < uVar1) {
    iVar3 = uVar1 - (uVar1 - uVar7 >> 3);
    *(int *)(unaff_EDI + 0x8c) = iVar3;
    *(uint *)(unaff_EDI + 0x90) = (iVar3 - uVar7 >> 2) + iVar5;
  }
  else {
    iVar3 = uVar1 + (uVar7 - uVar1 >> 3);
    *(int *)(unaff_EDI + 0x8c) = iVar3;
    *(uint *)(unaff_EDI + 0x90) = (uVar7 - iVar3 >> 2) + iVar5;
  }
  uVar7 = *(uint *)(unaff_EDI + 0x8c);
  if (uVar7 < *(uint *)(unaff_EDI + 0x80)) {
    *(uint *)(unaff_EDI + 0x80) = uVar7;
  }
  uVar1 = *(uint *)(unaff_EDI + 0x90);
  if (*(uint *)(unaff_EDI + 0x88) < uVar1) {
    *(uint *)(unaff_EDI + 0x88) = uVar1;
  }
  iVar5 = *(int *)(unaff_EDI + 0x6c);
  if (iVar5 != 0) {
    uVar6 = iVar4 - iVar5;
    if (86399999 < uVar6) {
      uVar6 = iVar5 - iVar4;
    }
    if (uVar6 < *(uint *)(unaff_EDI + 0x78)) goto LAB_00a88db4;
  }
  *(undefined4 *)(unaff_EDI + 0x7c) = *(undefined4 *)(unaff_EDI + 0x80);
  *(undefined4 *)(unaff_EDI + 0x84) = *(undefined4 *)(unaff_EDI + 0x88);
  *(uint *)(unaff_EDI + 0x80) = uVar7;
  *(uint *)(unaff_EDI + 0x88) = uVar1;
  *(int *)(unaff_EDI + 0x6c) = iVar4;
LAB_00a88db4:
  ntohl(*(u_long *)(param_3 + 0xc));
  iVar4 = FUN_00a88610();
  if (*(int *)(unaff_EDI + 0x18) == 2) {
    if (iVar4 == 3) {
      FUN_00a88520(param_1);
      return 1;
    }
  }
  else if ((*(int *)(unaff_EDI + 0x18) == 5) && (iVar4 == 4)) {
    FUN_00a88550(param_1);
    return 1;
  }
  return 0;
}

