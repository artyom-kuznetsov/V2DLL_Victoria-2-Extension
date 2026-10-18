// FUN_00a3af00 @ 00a3af00 body=[[00a3af00, 00a3af50]]


void FUN_00a3af00(uint *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  piVar2 = DAT_01109b64;
  uVar4 = *param_1 % (uint)DAT_01109b64[1];
  puVar3 = (undefined4 *)FUN_00aae9af(8);
  if (puVar3 != (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)(piVar2[2] + uVar4 * 4);
    *puVar3 = param_1;
    puVar3[1] = uVar1;
    *(undefined4 **)(piVar2[2] + uVar4 * 4) = puVar3;
    *piVar2 = *piVar2 + 1;
    return;
  }
  *(undefined4 *)(piVar2[2] + uVar4 * 4) = 0;
  *piVar2 = *piVar2 + 1;
  return;
}

