// FUN_00b00b20 @ 00b00b20 body=[[00b00b20, 00b00b79] [00b00b80, 00b00b9b]]


void FUN_00b00b20(uint param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *in_ECX;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar1 = in_ECX[1];
  if (param_1 != uVar1) {
    if (uVar1 < param_1) {
      in_ECX[1] = param_1;
      if ((uint)in_ECX[2] < param_1) {
        FUN_00adfdb0(param_1);
      }
      if (uVar1 < param_1) {
        iVar3 = uVar1 * 0xc;
        iVar5 = param_1 - uVar1;
        do {
          puVar2 = (undefined4 *)(*in_ECX + iVar3);
          if (puVar2 != (undefined4 *)0x0) {
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar2[2] = 0;
          }
          iVar3 = iVar3 + 0xc;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        return;
      }
    }
    else {
      uVar4 = param_1;
      if (param_1 < uVar1) {
        do {
          FUN_00b13650();
          uVar4 = uVar4 + 1;
        } while (uVar4 < (uint)in_ECX[1]);
      }
      in_ECX[1] = param_1;
    }
  }
  return;
}

