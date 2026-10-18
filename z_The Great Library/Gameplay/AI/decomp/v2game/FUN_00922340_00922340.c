// FUN_00922340 @ 00922340 body=[[00922340, 0092240c]]


undefined4 FUN_00922340(char param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  
  iVar2 = *(int *)(DAT_012587e4 + 4);
  iVar1 = *(int *)(*(int *)(in_ECX + 0x14) * 4 +
                  *(int *)(*(int *)(iVar2 + *(int *)(in_ECX + 0xc) * 4) + 0xbe8));
  if (*(char *)(*(int *)(iVar2 + *(int *)(iVar1 + 0xc) * 4) + 0x31) == '\0') {
    iVar1 = *(int *)(iVar1 + 0x40);
  }
  else {
    iVar1 = 1;
  }
  uVar3 = CONCAT31((int3)((uint)iVar1 >> 8),3 < iVar1);
  if (param_1 == '\0') {
    if (3 < iVar1) {
      if ((*(char *)(*(int *)(iVar2 + *(int *)(in_ECX + 0x2c) * 4) + 0x31) != '\0') &&
         (*(int *)(in_ECX + 0x2c) != *(int *)(in_ECX + 0xc))) {
        iVar2 = FUN_009311f0();
        iVar1 = FUN_009311f0();
        if (iVar2 <= iVar1) {
          return 1;
        }
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}

