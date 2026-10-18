// FUN_00a32140 @ 00a32140 body=[[00a32140, 00a321bc] [00a321c0, 00a32246] [00a3224a, 00a32270] [00a32274, 00a322c6] [00a322ca, 00a322e0]]


void FUN_00a32140(int param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  char *pcVar5;
  int _Value;
  uint local_90 [4];
  undefined4 local_80;
  uint local_7c;
  uint local_74;
  undefined4 local_64;
  uint local_60;
  undefined4 local_58;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  char local_38 [36];
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b9e826;
  local_14 = ExceptionList;
  local_58 = *param_2;
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  ExceptionList = &local_14;
  FUN_00408ed0(param_3,0,0xffffffff);
  local_c = 0;
  _Value = 1;
  iVar2 = FUN_00a32930(param_1,local_54,0);
  while( true ) {
    if (iVar2 == -1) {
      FUN_00a36520();
      FUN_00a330d0(*(undefined4 *)(param_1 + 200));
      if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_54[0]);
      }
      ExceptionList = local_14;
      return;
    }
    local_7c = 0xf;
    local_80 = 0;
    local_90[0] = local_90[0] & 0xffffff00;
    local_c._1_3_ = (uint3)((uint)local_c >> 8);
    local_c._0_1_ = 1;
    pcVar3 = __itoa(_Value,local_38,10);
    pcVar5 = pcVar3;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcVar3,(int)pcVar5 - (int)(pcVar3 + 1));
    local_c._0_1_ = 2;
    uVar4 = FUN_00988f20(local_90);
    local_c._0_1_ = 3;
    FUN_00408ed0(uVar4,0,0xffffffff);
    if (0xf < local_60) break;
    local_c = (uint)local_c._1_3_ << 8;
    local_60 = 0xf;
    local_64 = 0;
    local_74 = local_74 & 0xffffff00;
    if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_90[0]);
    }
    _Value = _Value + 1;
    iVar2 = FUN_00a32930(param_1,local_54,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_74);
}

