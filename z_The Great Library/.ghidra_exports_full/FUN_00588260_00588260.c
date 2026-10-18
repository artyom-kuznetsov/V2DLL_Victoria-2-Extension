// FUN_00588260 @ 00588260 body=[[00588260, 00588338] [0058833c, 00588391] [00588395, 005883a4]]


void FUN_00588260(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int in_ECX;
  char local_148 [256];
  uint local_48;
  undefined4 local_38;
  uint local_34;
  uint local_2c;
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b44610;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_009a2520(param_1);
  if (*(int *)(in_ECX + 0x44) == 0) {
    local_34 = 0xf;
    local_38 = 0;
    local_48 = local_48 & 0xffffff00;
    pcVar3 = (char *)(in_ECX + 0x48);
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_00409350((char *)(in_ECX + 0x48),(int)pcVar3 - (in_ECX + 0x49));
    local_8 = 0;
    FUN_009a0940(param_1);
    FUN_0099f770(param_1,0);
    local_8 = 0xffffffff;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48);
    }
  }
  else {
    uVar2 = *(undefined4 *)(*(int *)(in_ECX + 0x44) + 0x50);
    FUN_009a0940(param_1);
    _sprintf(local_148,"%d",uVar2);
    FUN_0099ff90(param_1);
    FUN_004013e0(param_1);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c = local_2c & 0xffffff00;
  pcVar3 = (char *)(in_ECX + 0x3c);
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00409350((char *)(in_ECX + 0x3c),(int)pcVar3 - (in_ECX + 0x3d));
  local_8 = 1;
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c);
  }
  ExceptionList = local_10;
  return;
}

