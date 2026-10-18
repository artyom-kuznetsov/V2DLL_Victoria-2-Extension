// FUN_00491280 @ 00491280 body=[[00491280, 0049144f]]


void FUN_00491280(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  char *pcVar5;
  int in_ECX;
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4bc6b;
  local_14 = ExceptionList;
  if (param_2 < 0x2f1) {
    if (param_2 == 0x2f0) {
      ExceptionList = &local_14;
      puVar3 = (undefined4 *)FUN_0055c6c0();
      *(undefined4 *)(in_ECX + 0x4c) = *puVar3;
      *(undefined4 *)(in_ECX + 0x50) = puVar3[1];
      ExceptionList = local_14;
      return;
    }
    if (param_2 == 0x2a1) {
      ExceptionList = &local_14;
      FUN_009885d0();
LAB_00491437:
      FUN_0043bb10();
      ExceptionList = local_14;
      return;
    }
    if (param_2 == 0x2c9) {
      ExceptionList = &local_14;
      iVar2 = FUN_00aaf0c5();
      *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(*(int *)(DAT_0125870c + 0x2238) + iVar2 * 4);
      ExceptionList = local_14;
      return;
    }
  }
  else {
    if (param_2 == 0x339) {
      pcVar5 = (char *)(param_1 + 0x22c);
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      ExceptionList = &local_14;
      FUN_00409350((char *)(param_1 + 0x22c),(int)pcVar5 - (param_1 + 0x22d));
      goto LAB_00491437;
    }
    if (param_2 == 0xa91) {
      ExceptionList = &local_14;
      iVar2 = FUN_00aae9af();
      local_c = 0;
      if (iVar2 == 0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)FUN_00860390();
      }
      local_c = 0xffffffff;
      *(int **)(in_ECX + 0x54) = piVar4;
      (**(code **)(*piVar4 + 0xc))();
      ExceptionList = pvStack_18;
      return;
    }
  }
  if (param_2 != 0xb) {
    ExceptionList = &local_14;
    FUN_009a0f40();
    ExceptionList = local_14;
    return;
  }
  ExceptionList = &local_14;
  FUN_009a19f0();
  ExceptionList = local_14;
  return;
}

