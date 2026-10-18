// FUN_004ca510 @ 004ca510 body=[[004ca510, 004ca593] [004ca597, 004ca663] [004ca667, 004ca679]]


void FUN_004ca510(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int in_ECX;
  char local_148 [256];
  undefined4 local_48 [5];
  uint local_34;
  uint local_2c;
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b456d0;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c = local_2c & 0xffffff00;
  pcVar3 = (char *)(in_ECX + 8);
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_10;
  FUN_00409350((char *)(in_ECX + 8),(int)pcVar3 - (in_ECX + 9));
  local_8 = 0;
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c);
  }
  uVar2 = *(undefined4 *)(in_ECX + 0x10);
  FUN_009a0940(param_1);
  _sprintf(local_148,"%d",uVar2);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  uVar2 = *(undefined4 *)(in_ECX + 0x14);
  FUN_009a0940(param_1);
  _sprintf(local_148,"%d",uVar2);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  if (*(int *)(in_ECX + 0x18) != DAT_01259abc) {
    FUN_0043acd0(in_ECX + 0x18,local_48);
    local_8 = 1;
    FUN_009a0940(param_1);
    FUN_0099f770(param_1,0);
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
  }
  ExceptionList = local_10;
  return;
}

