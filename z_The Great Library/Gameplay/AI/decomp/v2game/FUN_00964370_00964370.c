// FUN_00964370 @ 00964370 body=[[00964370, 009644d8]]


void FUN_00964370(int param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int unaff_EDI;
  undefined8 uVar7;
  undefined8 uVar8;
  uint local_24;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b5b6e0;
  local_14 = ExceptionList;
  uVar4 = 0;
  if (*(int *)(unaff_EDI + 0x58) + *(int *)(param_1 + 0x58) == 0) {
    ExceptionList = &local_14;
    *(undefined4 *)(unaff_EDI + 300) = 0;
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x58);
    ExceptionList = &local_14;
    uVar7 = __allmul(uVar6 << 0xf,((int)uVar6 >> 0x1f) << 0xf | uVar6 >> 0x11);
    uVar5 = (uint)uVar7 & 0xffff8000;
    uVar6 = *(uint *)(unaff_EDI + 0x58);
    uVar8 = __allmul(uVar6 << 0xf,((int)uVar6 >> 0x1f) << 0xf | uVar6 >> 0x11);
    uVar6 = (uint)uVar8 & 0xffff8000;
    uVar7 = __alldiv(uVar5 + uVar6,
                     (int)((ulonglong)uVar7 >> 0x20) + (int)((ulonglong)uVar8 >> 0x20) +
                     (uint)CARRY4(uVar5,uVar6));
    uVar4 = (undefined4)uVar7;
    *(int *)(unaff_EDI + 300) = (int)((ulonglong)uVar7 >> 0x20);
  }
  *(undefined4 *)(unaff_EDI + 0x128) = uVar4;
  local_24 = 9;
  if (param_2 != '\0') {
    local_24 = 1;
    if (((*(int *)(unaff_EDI + 100) != 0) && (*(int *)(param_1 + 100) != 0)) &&
       (*(int *)(*(int *)(param_1 + 100) + 300) != *(int *)(*(int *)(unaff_EDI + 100) + 300))) {
      local_24 = 2;
    }
  }
  iVar2 = *(int *)(unaff_EDI + 0x58);
  iVar3 = *(int *)(param_1 + 0x58);
  FUN_00955fd0();
  if (local_24 < 9) {
    piVar1 = (int *)(unaff_EDI + 0x158 + local_24 * 4);
    *piVar1 = *piVar1 + ((iVar3 + iVar2) - iVar2);
  }
  FUN_0095a5f0();
  ExceptionList = local_14;
  return;
}

