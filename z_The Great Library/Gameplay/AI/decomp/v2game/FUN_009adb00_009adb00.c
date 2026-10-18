// FUN_009adb00 @ 009adb00 body=[[009adb00, 009adb6e]]


void FUN_009adb00(undefined4 *param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int *unaff_EDI;
  
  puVar4 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar4 = (undefined4 *)*param_1;
  }
  uVar3 = 0;
  iVar5 = 0;
  if (0 < (int)param_1[4]) {
    do {
      pcVar1 = (char *)(iVar5 + (int)puVar4);
      iVar5 = iVar5 + 1;
      uVar3 = (uVar3 + (int)*pcVar1) * 0x3d;
    } while (iVar5 < (int)param_1[4]);
  }
  uVar3 = uVar3 % (uint)unaff_EDI[1];
  puVar4 = (undefined4 *)FUN_00aae9af(8);
  if (puVar4 == (undefined4 *)0x0) {
    *(undefined4 *)(unaff_EDI[2] + uVar3 * 4) = 0;
    *unaff_EDI = *unaff_EDI + 1;
    return;
  }
  uVar2 = *(undefined4 *)(unaff_EDI[2] + uVar3 * 4);
  *puVar4 = param_1;
  puVar4[1] = uVar2;
  *(undefined4 **)(unaff_EDI[2] + uVar3 * 4) = puVar4;
  *unaff_EDI = *unaff_EDI + 1;
  return;
}

