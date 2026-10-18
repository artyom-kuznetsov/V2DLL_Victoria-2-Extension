// FUN_00b22120 @ 00b22120 body=[[00b22120, 00b221da]]


undefined4 FUN_00b22120(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *unaff_ESI;
  longlong lVar6;
  
  puVar4 = (undefined4 *)*param_1;
  puVar3 = (undefined4 *)0x0;
  while( true ) {
    puVar2 = puVar4;
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    if (puVar2 == unaff_ESI) break;
    puVar4 = (undefined4 *)puVar2[8];
    puVar3 = puVar2;
  }
  iVar1 = unaff_ESI[4];
  if (*(char *)(unaff_ESI + 1) == '\0') {
    iVar5 = unaff_ESI[7];
    if (iVar5 != unaff_ESI[6]) {
      lVar6 = (**(code **)(unaff_ESI[3] + 0x3c))(*unaff_ESI,iVar5 + iVar1,unaff_ESI[6] - iVar5,1);
      if (lVar6 < 0) {
        return 0xffffffff;
      }
      if ((lVar6 < 0x100000000) && ((int)lVar6 == 0)) {
        return 0xffffffff;
      }
      unaff_ESI[6] = 0;
      unaff_ESI[7] = 0;
    }
  }
  iVar5 = (**(code **)(unaff_ESI[3] + 0x50))(*unaff_ESI);
  if (iVar5 == 0) {
    return 0xffffffff;
  }
  if (iVar1 != 0) {
    (*DAT_013f3ab0)(iVar1);
  }
  if (puVar3 == (undefined4 *)0x0) {
    *param_1 = unaff_ESI[8];
    (*DAT_013f3ab0)();
    return 1;
  }
  puVar3[8] = unaff_ESI[8];
  (*DAT_013f3ab0)();
  return 1;
}

