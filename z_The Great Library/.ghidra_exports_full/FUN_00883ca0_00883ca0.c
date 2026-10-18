// FUN_00883ca0 @ 00883ca0 body=[[00883ca0, 00883d37] [00883d3b, 00883d6c] [00883d70, 00883dc7]]


void FUN_00883ca0(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  int in_ECX;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b696d0;
  local_10 = ExceptionList;
  if (param_2 == 0x344) {
    ExceptionList = &local_10;
    FUN_009a1d40();
    ExceptionList = local_10;
    return;
  }
  if (param_2 == 0x3de) {
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    pcVar4 = (char *)(param_1 + 0x22c);
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    ExceptionList = &local_10;
    FUN_00409350((char *)(param_1 + 0x22c),(int)pcVar4 - (param_1 + 0x22d));
    local_8 = 0;
    iVar5 = FUN_00975ed0(local_48);
    if (iVar5 == 0) {
      iVar5 = FUN_00974850();
    }
    *(int *)(in_ECX + 0x20) = iVar5;
    uVar2 = local_48[0];
    uVar3 = local_34;
  }
  else {
    if (param_2 != 0x3df) {
      return;
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    pcVar4 = (char *)(param_1 + 0x22c);
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    ExceptionList = &local_10;
    FUN_00409350((char *)(param_1 + 0x22c),(int)pcVar4 - (param_1 + 0x22d));
    local_8 = 1;
    iVar5 = FUN_00975ed0(local_2c);
    if (iVar5 == 0) {
      iVar5 = FUN_00974850();
    }
    *(int *)(in_ECX + 0x24) = iVar5;
    uVar2 = local_2c[0];
    uVar3 = local_18;
  }
  if (uVar3 < 0x10) {
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(uVar2);
}

