// FUN_005d5ef0 @ 005d5ef0 body=[[005d5ef0, 005d6046] [005d604a, 005d6065] [005d6069, 005d6087] [005d608b, 005d6116] [005d611a, 005d6186] [005d618a, 005d619e]]


undefined1 * FUN_005d5ef0(undefined1 *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int _Value;
  char *pcVar4;
  int in_ECX;
  char *pcVar5;
  int _Value_00;
  undefined *puVar6;
  undefined4 uVar7;
  char local_90 [32];
  uint local_70;
  undefined4 local_60;
  uint local_5c;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  uint local_38;
  undefined4 local_28;
  uint local_24;
  undefined4 local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = ExceptionList;
  puStack_c = &LAB_00b45d79;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_8 = 0;
  piVar2 = *(int **)(in_ECX + 0x38);
  local_1c = 1;
  local_14 = 0;
  while (piVar2 != (int *)0x0) {
    piVar3 = (int *)*piVar2;
    piVar2 = (int *)piVar2[2];
    (**(code **)(*piVar3 + 0x3c))(&local_18);
    local_18 = __alldiv((longlong)piVar3[0xf] * (longlong)local_18,1000,0);
    local_14 = local_14 + local_18;
  }
  _Value = local_14 / 1000;
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  if (_Value < 1000) {
    local_8 = 7;
    pcVar4 = __itoa(_Value,local_90,10);
    pcVar5 = pcVar4;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcVar4,(int)pcVar5 - (int)(pcVar4 + 1));
    local_8 = 8;
    FUN_00448aa0();
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_54[0]);
    }
    ExceptionList = local_10;
    return param_1;
  }
  _Value_00 = _Value % 1000;
  FUN_00409350(&DAT_00defdf8,1);
  local_24 = 0xf;
  local_28 = 0;
  local_38 = local_38 & 0xffffff00;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  pcVar4 = __itoa(_Value / 1000,local_90,10);
  pcVar5 = pcVar4;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar4,(int)pcVar5 - (int)(pcVar4 + 1));
  local_8._0_1_ = 3;
  FUN_00988f20(local_54);
  local_8._0_1_ = 4;
  FUN_00448aa0();
  if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_70);
  }
  local_5c = 0xf;
  local_60 = 0;
  local_70 = local_70 & 0xffffff00;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_24 = 0xf;
  local_28 = 0;
  local_38 = local_38 & 0xffffff00;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_54[0]);
  }
  if (_Value_00 < 10) {
    uVar7 = 2;
    puVar6 = &DAT_00e02994;
  }
  else {
    if (99 < _Value_00) goto LAB_005d60ac;
    uVar7 = 1;
    puVar6 = &DAT_00df8144;
  }
  FUN_00448740(puVar6,uVar7);
LAB_005d60ac:
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  local_8 = 5;
  pcVar4 = __itoa(_Value_00,local_90,10);
  pcVar5 = pcVar4;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar4,(int)pcVar5 - (int)(pcVar4 + 1));
  local_8 = 6;
  FUN_00448aa0();
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_54[0]);
  }
  ExceptionList = local_10;
  return param_1;
}

