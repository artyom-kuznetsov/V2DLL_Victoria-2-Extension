// FUN_009112b0 @ 009112b0 body=[[009112b0, 00911375] [00911379, 009113d6] [009113da, 0091141b] [0091141f, 00911457] [0091145b, 0091146d]]


void FUN_009112b0(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int in_ECX;
  char local_148 [256];
  undefined4 local_48 [5];
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b58740;
  local_10 = ExceptionList;
  uVar2 = *(undefined4 *)(in_ECX + 0x24);
  ExceptionList = &local_10;
  FUN_009a0940(param_1);
  _sprintf(local_148,"%d",uVar2);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  pcVar3 = (char *)(in_ECX + 8);
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00409350((char *)(in_ECX + 8),(int)pcVar3 - (in_ECX + 9));
  local_8 = 0;
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  pcVar3 = (char *)(in_ECX + 0x10);
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00409350((char *)(in_ECX + 0x10),(int)pcVar3 - (in_ECX + 0x11));
  local_8 = 1;
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  FUN_0043acd0(in_ECX + 0x18,local_2c);
  local_8 = 2;
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  FUN_0043acd0(in_ECX + 0x1c,local_48);
  local_8 = 3;
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  ExceptionList = local_10;
  return;
}

