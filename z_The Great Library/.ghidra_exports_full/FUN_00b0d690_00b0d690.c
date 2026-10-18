// FUN_00b0d690 @ 00b0d690 body=[[00b0d690, 00b0d6bc] [00b0d6c0, 00b0d716]]


void FUN_00b0d690(uint param_1)

{
  undefined4 *puVar1;
  int *in_ECX;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = in_ECX[1];
  if (param_1 != uVar4) {
    if (uVar4 < param_1) {
      in_ECX[1] = param_1;
      if ((uint)in_ECX[2] < param_1) {
        FUN_00b0d550(param_1);
      }
      if (uVar4 < param_1) {
        iVar2 = uVar4 << 4;
        iVar3 = param_1 - uVar4;
        do {
          puVar1 = (undefined4 *)(*in_ECX + iVar2);
          if (puVar1 != (undefined4 *)0x0) {
            *puVar1 = 0;
            puVar1[1] = 0;
            puVar1[2] = 0;
            *(undefined2 *)(puVar1 + 3) = 1;
          }
          iVar2 = iVar2 + 0x10;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        return;
      }
    }
    else {
      if (param_1 < uVar4) {
        iVar2 = param_1 << 4;
        uVar4 = param_1;
        do {
          if (*(int *)(*in_ECX + iVar2) != 0) {
            (*(code *)PTR__free_00f01b10)(*(int *)(*in_ECX + iVar2));
          }
          uVar4 = uVar4 + 1;
          iVar2 = iVar2 + 0x10;
        } while (uVar4 < (uint)in_ECX[1]);
      }
      in_ECX[1] = param_1;
    }
  }
  return;
}

