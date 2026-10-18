// FUN_0041d780 @ 0041d780 body=[[0041d780, 0041d997] [0041d99b, 0041d9bc] [0041d9c0, 0041d9e4] [0041d9e8, 0041da03] [0041da07, 0041da19]]


undefined1 * FUN_0041d780(undefined1 *param_1,undefined4 *param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  uint _Value;
  char *pcVar5;
  undefined4 uVar6;
  uint uVar7;
  char *pcVar8;
  int *piVar9;
  byte *pbVar10;
  char local_bc [32];
  uint local_9c;
  undefined4 local_8c;
  uint local_88;
  uint local_80;
  undefined4 local_70;
  uint local_6c;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  undefined4 local_2c;
  int *local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4da34;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[4] = 0;
  local_8 = 0;
  piVar9 = (int *)*param_2;
  local_2c = 1;
  if ((param_2[1] - (int)piVar9) / 0x1c < 1) {
    *param_1 = 0;
    FUN_00409350("Please specify the amount of goods.",0x23);
    ExceptionList = local_10;
    return param_1;
  }
  if (0xf < (uint)piVar9[5]) {
    piVar9 = (int *)*piVar9;
  }
  _Value = FUN_00aaf0c5(piVar9);
  local_18 = *(uint *)(DAT_012588e8 + 0xb5c);
  iVar4 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
  if (0 < DAT_012587f4) {
    local_14 = ((int)_Value >> 0x1f) << 0xf | _Value >> 0x11;
    uVar7 = _Value << 0xf;
    piVar9 = (int *)(iVar4 + 0x11cc);
    local_24 = -8 - (iVar4 + 0x1184);
    pbVar10 = (byte *)(iVar4 + 0x118c);
    local_28 = piVar9;
    local_18 = uVar7;
    do {
      local_1c = local_14;
      local_20 = uVar7;
      if (*pbVar10 == 0) {
        *pbVar10 = (byte)(piVar9[1] - *piVar9 >> 3);
        FUN_00423920();
        uVar7 = local_18;
        piVar9 = local_28;
      }
      else {
        puVar1 = (uint *)(*piVar9 + (uint)*pbVar10 * 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 + uVar7;
        puVar1[1] = puVar1[1] + local_14 + (uint)CARRY4(uVar2,uVar7);
      }
      pbVar10 = pbVar10 + 1;
    } while ((int)(pbVar10 + local_24) < DAT_012587f4);
  }
  uVar7 = *(uint *)(iVar4 + 0xe78);
  *(uint *)(iVar4 + 0xe78) = uVar7 + _Value * 0x8000;
  *(uint *)(iVar4 + 0xe7c) =
       *(int *)(iVar4 + 0xe7c) + (((int)_Value >> 0x1f) << 0xf | _Value >> 0x11) +
       (uint)CARRY4(uVar7,_Value * 0x8000);
  *param_1 = 1;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  FUN_00409350(" of goods.",10);
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  pcVar5 = __itoa(_Value,local_bc,10);
  pcVar8 = pcVar5;
  do {
    cVar3 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar3 != '\0');
  FUN_00409350(pcVar5,(int)pcVar8 - (int)(pcVar5 + 1));
  local_8._0_1_ = 3;
  FUN_00988fa0(local_48);
  local_8._0_1_ = 4;
  uVar6 = FUN_00988f20(local_64);
  local_8 = CONCAT31(local_8._1_3_,5);
  FUN_00408ed0(uVar6,0,0xffffffff);
  if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_80);
  }
  local_6c = 0xf;
  local_70 = 0;
  local_80 = local_80 & 0xffffff00;
  if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_9c);
  }
  local_88 = 0xf;
  local_8c = 0;
  local_9c = local_9c & 0xffffff00;
  if (local_34 < 0x10) {
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    if (local_50 < 0x10) {
      ExceptionList = local_10;
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_64[0]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_48[0]);
}

