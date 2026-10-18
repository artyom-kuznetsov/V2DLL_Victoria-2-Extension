// FUN_008c1c30 @ 008c1c30 body=[[008c1c30, 008c1c57] [008c1c60, 008c1cfc]]


uint FUN_008c1c30(int param_1)

{
  uint uVar1;
  uint *puVar2;
  
  uVar1 = DAT_012588e8;
  puVar2 = *(uint **)(DAT_012588e8 + 0xadc);
  do {
    if ((puVar2 < *(uint **)(DAT_012588e8 + 0xadc)) ||
       (uVar1 = DAT_012588e8, *(uint **)(DAT_012588e8 + 0xae0) <= puVar2)) {
      return uVar1 & 0xffffff00;
    }
    uVar1 = *puVar2;
    puVar2 = puVar2 + 1;
  } while ((((int)(*(int *)(uVar1 + 0x9dc) - *(int *)(uVar1 + 0x9d8) & 0xfffffffcU) < 1) ||
           (((*(char *)(uVar1 + 0x1c) == 'R' && (*(char *)(uVar1 + 0x1d) == 'E')) &&
            (*(char *)(uVar1 + 0x1e) == 'B')))) ||
          (((*(int *)(uVar1 + 0x20) == 0 ||
            (*(int *)(*(int *)(uVar1 + 0xe64) + 0x50) !=
             *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) +
                              0xe64) + 0x50))) ||
           (uVar1 = *(uint *)(uVar1 + 0x142c), uVar1 != *(uint *)(param_1 + 0xc)))));
  return CONCAT31((int3)(uVar1 >> 8),1);
}

