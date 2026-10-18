// FUN_005c0160 @ 005c0160  (requested 005C0160, first bytes: 55 8B EC 83 E4 F8 64 A1)


undefined4 * FUN_005c0160(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int *unaff_EDI;
  undefined8 uVar8;
  undefined1 auStack_24 [4];
  int iStack_20;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b5a850;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (unaff_EDI[0xf] < unaff_EDI[0x1b]) {
    ExceptionList = &pvStack_14;
    unaff_EDI[0x1b] = unaff_EDI[0xf];
  }
  unaff_EDI[0xf] = unaff_EDI[0xf] - unaff_EDI[0x1b];
  if (unaff_EDI[0x10] < unaff_EDI[0x1c]) {
    unaff_EDI[0x1c] = unaff_EDI[0x10];
  }
  unaff_EDI[0x10] = unaff_EDI[0x10] - unaff_EDI[0x1c];
  cVar3 = (**(code **)(*unaff_EDI + 0x24))();
  if ((cVar3 != '\0') && (unaff_EDI[0xc] != 0)) {
    iVar4 = __alldiv((longlong)unaff_EDI[0x1b] *
                     (longlong)*(int *)(*(int *)(DAT_012586dc + 0x20) + 0x14),1000,0);
    piVar5 = (int *)(**(code **)(*unaff_EDI + 0x30))(auStack_24,0);
    iVar6 = *piVar5;
    iStack_20 = unaff_EDI[0x18];
    iVar1 = *(int *)(*(int *)(DAT_012586dc + 0x20) + 0x18);
    iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + unaff_EDI[0x19] * 4) + 0xbcc) +
                    0x44);
    uVar8 = __allmul(iVar4,iVar4 >> 0x1f,1000,0);
    iVar6 = __alldiv(uVar8,iVar6,iVar6 >> 0x1f);
    iVar6 = __alldiv((longlong)iVar6 * (longlong)iVar1,1000,0);
    uVar8 = __allmul(iVar6,iVar6 >> 0x1f,1000,0);
    iVar2 = iVar2 + 1000;
    __alldiv(uVar8,iVar2,iVar2 >> 0x1f);
    FUN_00955fd0();
  }
  piVar5 = (int *)(**(code **)(*unaff_EDI + 0x3c))(auStack_24);
  uVar7 = __alldiv((longlong)unaff_EDI[0x1b] * (longlong)*piVar5,1000,0);
  *param_1 = uVar7;
  unaff_EDI[0x1b] = 0;
  unaff_EDI[0x1c] = 0;
  ExceptionList = pvStack_18;
  return param_1;
}

