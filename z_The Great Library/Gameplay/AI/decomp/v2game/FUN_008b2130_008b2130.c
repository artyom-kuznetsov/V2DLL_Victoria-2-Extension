// FUN_008b2130 @ 008b2130 body=[[008b2130, 008b2202] [008b2219, 008b22e7]]


/* WARNING: Removing unreachable block (ram,0x008b21f9) */

void FUN_008b2130(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int in_ECX;
  char *pcVar4;
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bbc108;
  local_14 = ExceptionList;
  if (param_2 < 0x296) {
    if (param_2 == 0x295) {
      ExceptionList = &local_14;
      puVar3 = (undefined4 *)FUN_0055c6c0();
      *(undefined4 *)(in_ECX + 0xa0) = *puVar3;
      *(undefined4 *)(in_ECX + 0xa4) = puVar3[1];
      ExceptionList = local_14;
      return;
    }
    if (param_2 == 0xd9) {
      pcVar4 = (char *)(param_1 + 0x22c);
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      ExceptionList = &local_14;
      FUN_00409350();
      local_c = 0;
      FUN_008b0000();
      uVar2 = FUN_005c2ad0();
      *(undefined4 *)(in_ECX + 8) = uVar2;
    }
    else if (param_2 == 0x1aa) {
      ExceptionList = &local_14;
      (**(code **)(*(int *)(in_ECX + 0xc) + 0xc))();
      ExceptionList = pvStack_18;
      return;
    }
  }
  else if (param_2 == 0x339) {
    pcVar4 = (char *)(param_1 + 0x22c);
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    ExceptionList = &local_14;
    FUN_00409350((char *)(param_1 + 0x22c),(int)pcVar4 - (param_1 + 0x22d));
    FUN_0043bb10();
  }
  else if (param_2 == 0x759) {
    ExceptionList = &local_14;
    (**(code **)(*(int *)(in_ECX + 0x54) + 0xc))();
    *(int *)(in_ECX + 0x30) = in_ECX + 0x54;
    ExceptionList = pvStack_18;
    return;
  }
  ExceptionList = local_14;
  return;
}

