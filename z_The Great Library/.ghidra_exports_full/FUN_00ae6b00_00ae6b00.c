// FUN_00ae6b00 @ 00ae6b00 body=[[00ae6b00, 00ae6c68]]


uint FUN_00ae6b00(char *param_1,uint param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  uint *puVar4;
  char *pcVar5;
  uint uVar6;
  int in_ECX;
  uint uVar7;
  uint uVar8;
  
  if (param_2 != 0xffffffff) {
    iVar3 = FUN_00ae6a40(param_1);
    if (iVar3 == -1) {
      uVar6 = 0;
      if (*(uint *)(in_ECX + 8) != 0) {
        puVar4 = (uint *)(*(int *)(in_ECX + 4) + 0xc);
        do {
          if (*puVar4 == param_2) {
            return 0xffffffff;
          }
          uVar6 = uVar6 + 1;
          puVar4 = puVar4 + 4;
        } while (uVar6 < *(uint *)(in_ECX + 8));
      }
      FUN_00ae6ed0();
      *(uint *)(*(int *)(in_ECX + 4) + -4 + *(int *)(in_ECX + 8) * 0x10) = param_2;
      pcVar5 = param_1;
      do {
        cVar2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      FUN_00b137d0(param_1,(int)pcVar5 - (int)(param_1 + 1));
    }
    else if (*(uint *)(*(int *)(in_ECX + 4) + 0xc + iVar3 * 0x10) != param_2) {
      return 0xffffffff;
    }
    return param_2;
  }
  iVar3 = FUN_00ae6a40(param_1);
  if (iVar3 != -1) {
    return *(uint *)(*(int *)(in_ECX + 4) + 0xc + iVar3 * 0x10);
  }
  uVar6 = *(uint *)(in_ECX + 8);
  if (uVar6 != 0) {
    uVar8 = *(int *)(*(int *)(in_ECX + 4) + -4 + uVar6 * 0x10) + 1;
    cVar2 = FUN_00ae6980(uVar8);
    if ((cVar2 == '\0') && (uVar8 != 0xffffffff)) goto LAB_00ae6b78;
  }
  uVar8 = 0;
  while (uVar7 = 0, uVar6 != 0) {
    puVar4 = (uint *)(*(int *)(in_ECX + 4) + 0xc);
    while (*puVar4 != uVar8) {
      uVar7 = uVar7 + 1;
      puVar4 = puVar4 + 4;
      if (uVar6 <= uVar7) goto LAB_00ae6b78;
    }
    uVar8 = uVar8 + 1;
    if (0x7fffffff < uVar8) break;
  }
LAB_00ae6b78:
  *(uint *)(in_ECX + 8) = uVar6 + 1;
  if (*(uint *)(in_ECX + 0xc) < uVar6 + 1) {
    FUN_00b0d550(uVar6 + 2);
  }
  puVar1 = (undefined4 *)(*(int *)(in_ECX + 4) + -0x10 + *(int *)(in_ECX + 8) * 0x10);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
  }
  *(uint *)(*(int *)(in_ECX + 4) + -4 + *(int *)(in_ECX + 8) * 0x10) = uVar8;
  pcVar5 = param_1;
  do {
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  FUN_00b137d0(param_1,(int)pcVar5 - (int)(param_1 + 1));
  return uVar8;
}

