// FUN_005d7810 @ 005d7810  (requested 005D7810, first bytes: 8B 07 8B 50 2C 53 8B CF)


void FUN_005d7810(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int unaff_ESI;
  int *unaff_EDI;
  
  iVar2 = (**(code **)(*unaff_EDI + 0x2c))();
  *(int *)(iVar2 + 0x1b4) = unaff_ESI;
  *(undefined4 *)(iVar2 + 0x1a4) = 0;
  if (unaff_ESI == 0) {
    *(undefined4 *)(iVar2 + 0x1a8) = 0;
  }
  for (puVar3 = *(undefined4 **)(unaff_ESI + 0x1a4); puVar3 != (undefined4 *)0x0;
      puVar3 = (undefined4 *)puVar3[2]) {
    if ((int *)*puVar3 == unaff_EDI) goto LAB_005d78b3;
  }
  iVar2 = *(int *)(unaff_ESI + 0x1a8);
  puVar3 = (undefined4 *)FUN_00aae9af(0x10);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = unaff_EDI;
    puVar3[1] = iVar2;
    puVar3[2] = 0;
    *(undefined1 *)(puVar3 + 3) = 0;
  }
  iVar1 = *(int *)(unaff_ESI + 0x1ac);
  *(undefined4 **)(unaff_ESI + 0x1a8) = puVar3;
  *(int *)(unaff_ESI + 0x1ac) = iVar1 + 1;
  if (iVar1 == 0) {
    *(undefined4 **)(unaff_ESI + 0x1a4) = puVar3;
  }
  else {
    *(undefined4 **)(iVar2 + 8) = puVar3;
  }
  uVar4 = (**(code **)(*unaff_EDI + 0x2c))();
  FUN_00859ef0(&LAB_005dafc0,uVar4);
LAB_005d78b3:
  FUN_004c8580(*(undefined4 *)(*(int *)(unaff_ESI + 0xdc) + 0x5c),unaff_EDI);
  return;
}

