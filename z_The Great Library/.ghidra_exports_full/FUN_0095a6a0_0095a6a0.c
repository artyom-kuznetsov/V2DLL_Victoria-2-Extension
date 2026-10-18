// FUN_0095a6a0 @ 0095a6a0 body=[[0095a6a0, 0095a772]]


void FUN_0095a6a0(undefined4 param_1,undefined4 param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int unaff_ESI;
  int unaff_EDI;
  undefined8 uVar6;
  longlong lVar7;
  
  iVar5 = *(int *)(*(int *)(unaff_ESI + 0x68) + 0x3c);
  uVar3 = 1000;
  if (iVar5 == 0) {
    iVar5 = *(int *)(*(int *)(*(int *)(unaff_ESI + 100) + 0x9c) + 0x2c8);
  }
  else if (iVar5 == 1) {
    iVar5 = *(int *)(*(int *)(*(int *)(unaff_ESI + 100) + 0x9c) + 0x2c0);
  }
  else {
    if (iVar5 != 2) goto LAB_0095a6ef;
    iVar5 = *(int *)(*(int *)(*(int *)(unaff_ESI + 100) + 0x9c) + 0x2b8);
  }
  uVar3 = iVar5 + 1000;
LAB_0095a6ef:
  if ((int)uVar3 < 0) {
    uVar3 = 0;
  }
  uVar6 = __alldiv(uVar3 << 0x1e,((int)uVar3 >> 0x1f) << 0x1e | uVar3 >> 2,0x1f40000,0);
  lVar7 = __allmul(uVar6,param_1,param_2);
  uVar4 = (uint)(lVar7 >> 0xf);
  iVar5 = (int)((ulonglong)(lVar7 >> 0xf) >> 0x20);
  puVar1 = (uint *)(unaff_ESI + 0x188);
  uVar3 = *puVar1;
  *puVar1 = *puVar1 + uVar4;
  *(int *)(unaff_ESI + 0x18c) = *(int *)(unaff_ESI + 0x18c) + iVar5 + (uint)CARRY4(uVar3,uVar4);
  puVar1 = (uint *)(unaff_ESI + 0x1d8 + unaff_EDI * 8);
  uVar3 = *puVar1;
  *puVar1 = *puVar1 + uVar4;
  piVar2 = (int *)(unaff_ESI + 0x1dc + unaff_EDI * 8);
  *piVar2 = *piVar2 + iVar5 + (uint)CARRY4(uVar3,uVar4);
  puVar1 = (uint *)(unaff_ESI + 0x218);
  uVar3 = *puVar1;
  *puVar1 = *puVar1 + uVar4;
  *(int *)(unaff_ESI + 0x21c) = *(int *)(unaff_ESI + 0x21c) + iVar5 + (uint)CARRY4(uVar3,uVar4);
  if ((*(int *)(unaff_ESI + 0x18c) < 1) && (*(int *)(unaff_ESI + 0x18c) < 0)) {
    *(undefined4 *)(unaff_ESI + 0x188) = 0;
    *(undefined4 *)(unaff_ESI + 0x18c) = 0;
  }
  return;
}

