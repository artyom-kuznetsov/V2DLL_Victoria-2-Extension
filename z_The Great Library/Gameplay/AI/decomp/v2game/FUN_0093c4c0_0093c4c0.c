// FUN_0093c4c0 @ 0093c4c0 body=[[0093c4c0, 0093c584]]


uint FUN_0093c4c0(char param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint *puVar4;
  int in_EDX;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int local_10;
  undefined4 local_8;
  
  puVar4 = (uint *)(in_EDX + 0x2c);
  if (param_1 == '\0') {
    puVar4 = (uint *)(in_EDX + 0x3c);
  }
  uVar3 = *puVar4;
  iVar8 = (int)(puVar4[1] - uVar3) >> 3;
  _param_1 = 0;
  if (0 < iVar8) {
    iVar1 = *(int *)(in_EDX + 0xe0);
    puVar6 = (undefined4 *)(uVar3 + 4);
    do {
      local_8 = *puVar6;
      FUN_0093d080(&local_8);
      if ((local_10 != iVar1) &&
         (iVar7 = 0, 0 < (int)(*(int *)(local_10 + 0x14) - *(int *)(local_10 + 0x10) & 0xffffffc0U))
         ) {
        piVar5 = (int *)(*(int *)(local_10 + 0x10) + 0xc);
        do {
          for (piVar2 = *(int **)(*piVar5 + 0x120); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2])
          {
            if (*piVar2 == 0x8da) {
              return CONCAT31((int3)((uint)piVar2 >> 8),1);
            }
          }
          iVar7 = iVar7 + 1;
          piVar5 = piVar5 + 0x10;
        } while (iVar7 < *(int *)(local_10 + 0x14) - *(int *)(local_10 + 0x10) >> 6);
      }
      uVar3 = _param_1 + 1;
      puVar6 = puVar6 + 2;
      _param_1 = uVar3;
    } while ((int)uVar3 < iVar8);
  }
  return uVar3 & 0xffffff00;
}

