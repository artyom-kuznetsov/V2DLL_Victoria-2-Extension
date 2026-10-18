// FUN_0085fa60 @ 0085fa60 body=[[0085fa60, 0085fbbc]]


uint FUN_0085fa60(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int unaff_EDI;
  undefined8 uVar7;
  undefined4 local_18 [2];
  undefined4 local_10;
  
  iVar3 = DAT_012588e8;
  local_18[0] = *(undefined4 *)(unaff_EDI + 8);
  puVar1 = *(undefined4 **)
            (*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_EDI + 0xc) * 4) + 0x7b4);
  iVar5 = 0;
  while (puVar1 != (undefined4 *)0x0) {
    piVar4 = (int *)*puVar1;
    puVar1 = (undefined4 *)puVar1[2];
    piVar4 = (int *)(**(code **)(*piVar4 + 0x54))(local_18);
    iVar5 = iVar5 + *piVar4;
  }
  local_10 = *(undefined4 *)(unaff_EDI + 8);
  iVar6 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_EDI + 0xc) * 4) + 0x7bc) *
          1000;
  if (iVar6 == 0) {
    iVar6 = -1;
  }
  else if (iVar5 + 0x189373U < 0x39580e) {
    iVar6 = (iVar5 * 1000) / iVar6;
  }
  else {
    uVar7 = __allmul(iVar5,iVar5 >> 0x1f,1000,0);
    iVar6 = __alldiv(uVar7,iVar6,iVar6 >> 0x1f);
  }
  FUN_00401000(0x443ba000);
  piVar4 = (int *)FUN_00b31c00();
  if ((int)piVar4 <= iVar6) {
    piVar4 = *(int **)(*(int *)(iVar3 + 0xb98) + *(int *)(unaff_EDI + 0xc) * 0x10);
    do {
      if (piVar4 == (int *)0x0) {
        iVar5 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_EDI + 0xc) * 4);
        piVar2 = *(int **)(iVar5 + 0x9d8);
        piVar4 = piVar2;
        do {
          if ((piVar4 < piVar2) || (*(int **)(iVar5 + 0x9dc) <= piVar4)) {
            return CONCAT31((int3)((uint)piVar4 >> 8),1);
          }
          iVar6 = *piVar4;
          piVar4 = piVar4 + 1;
        } while (*(int *)(*(int *)(*(int *)(iVar3 + 0xacc) + iVar6 * 4) + 0x134) ==
                 *(int *)(unaff_EDI + 0xc));
        break;
      }
      iVar5 = *piVar4;
      piVar4 = (int *)piVar4[2];
    } while (*(int *)(iVar5 + 0x88) == 0);
  }
  return (uint)piVar4 & 0xffffff00;
}

