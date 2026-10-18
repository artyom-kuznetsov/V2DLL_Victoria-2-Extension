// FUN_00451f10 @ 00451f10 body=[[00451f10, 00451f7f]]


void FUN_00451f10(int *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_1[1] - *param_1 >> 3;
  if (0 < iVar4) {
    iVar1 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4) + 100
                    );
    iVar3 = 0;
    if (0 < iVar4) {
      do {
        puVar2 = (undefined1 *)FUN_0043caa0();
        iVar3 = iVar3 + 1;
        *puVar2 = 1;
        *(undefined1 *)(iVar1 + 0x14) = 1;
      } while (iVar3 < iVar4);
    }
  }
  return;
}

