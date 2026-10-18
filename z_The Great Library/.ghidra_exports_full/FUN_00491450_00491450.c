// FUN_00491450 @ 00491450 body=[[00491450, 004914ca] [004914ce, 0049150e] [00491512, 004915c5] [004915c9, 00491609]]


void FUN_00491450(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
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
  puStack_c = &LAB_00b62728;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_009a0940(param_1);
  FUN_0099f020(in_ECX + 8);
  FUN_0043acd0(in_ECX + 0x38,local_48);
  local_8 = 0;
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  local_8 = 0xffffffff;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  FUN_0043acd0(in_ECX + 0x3c,local_48);
  local_8 = 1;
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  local_8 = 0xffffffff;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  if (*(int *)(in_ECX + 0x48) != 0) {
    uVar2 = *(undefined4 *)(*(int *)(in_ECX + 0x48) + 0x58);
    FUN_009a0940(param_1);
    _sprintf(local_148,"%d",uVar2);
    FUN_0099ff90(param_1);
    FUN_004013e0(param_1);
  }
  if (*(int *)(in_ECX + 0x50) != 0) {
    local_18 = 0xf;
    local_1c = 0;
    local_2c = local_2c & 0xffffff00;
    pcVar4 = (char *)(in_ECX + 0x4c);
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_00409350((char *)(in_ECX + 0x4c),(int)pcVar4 - (in_ECX + 0x4d));
    local_8 = 2;
    FUN_009a0940(param_1);
    FUN_0099f770(param_1,0);
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c = local_2c & 0xffffff00;
  }
  piVar3 = *(int **)(in_ECX + 0x54);
  if (piVar3 != (int *)0x0) {
    FUN_009a0940(param_1);
    (**(code **)(*piVar3 + 4))(param_1);
  }
  ExceptionList = local_10;
  return;
}

