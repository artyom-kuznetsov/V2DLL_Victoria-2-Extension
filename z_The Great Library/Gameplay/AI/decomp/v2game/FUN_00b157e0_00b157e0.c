// FUN_00b157e0 @ 00b157e0 body=[[00b157e0, 00b15897]]


uint FUN_00b157e0(char *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  int *in_ECX;
  uint uVar6;
  uint local_4;
  
  uVar4 = in_ECX[1];
  uVar6 = 0;
  local_4 = 0xffffffff;
  if (uVar4 != 0) {
    do {
      if (local_4 != 0xffffffff) {
        return local_4;
      }
      cVar3 = FUN_00b147b0(param_1);
      if (cVar3 != '\0') {
        local_4 = uVar6;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar4);
    if (local_4 != 0xffffffff) {
      return local_4;
    }
  }
  iVar2 = in_ECX[1];
  uVar4 = iVar2 + 1;
  in_ECX[1] = uVar4;
  if ((uint)in_ECX[2] < uVar4) {
    FUN_00adfdb0(iVar2 + 2);
  }
  puVar1 = (undefined4 *)(*in_ECX + -0xc + in_ECX[1] * 0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
  }
  pcVar5 = param_1;
  do {
    cVar3 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar3 != '\0');
  FUN_00b137d0(param_1,(int)pcVar5 - (int)(param_1 + 1));
  return in_ECX[1] - 1;
}

