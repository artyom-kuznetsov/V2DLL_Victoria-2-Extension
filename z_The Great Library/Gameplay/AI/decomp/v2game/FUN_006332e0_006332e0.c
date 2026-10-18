// FUN_006332e0 @ 006332e0 body=[[006332e0, 00633356] [0063335a, 00633476] [0063347a, 006334a0] [006334a4, 00633506]]


void FUN_006332e0(undefined4 *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  short *psVar5;
  char *pcVar6;
  undefined4 uVar7;
  char *pcVar8;
  int _Value;
  char local_8c [32];
  uint local_6c;
  undefined4 local_5c;
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  int local_34;
  undefined4 local_30;
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  int local_20;
  uint local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4c780;
  local_10 = ExceptionList;
  _Value = 0;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("diplomessageicon_offset",0x17);
  local_8 = 0;
  piVar3 = (int *)(**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x34))();
  iVar4 = (**(code **)(*piVar3 + 0x48))(local_50);
  local_8 = 0xffffffff;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  local_34 = *(int *)(iVar4 + 100);
  local_30 = *(undefined4 *)(iVar4 + 0x68);
  (**(code **)(*(int *)*param_1 + 0x8c))();
  piVar3 = (int *)param_1[1];
  local_18 = 0;
  do {
    if (piVar3 == (int *)0x0) {
      ExceptionList = local_10;
      return;
    }
    psVar5 = (short *)(**(code **)(*(int *)*param_1 + 0x60))(local_24);
    if (local_18 <= *psVar5) {
      piVar2 = *(int **)*piVar3;
      psVar5 = (short *)(**(code **)(*piVar2 + 0x60))(local_28);
      local_1c = (uint)(ushort)((*psVar5 + (short)local_34) * (short)_Value);
      (**(code **)(*piVar2 + 0x18))(local_1c);
      if (*(int *)*piVar3 == 0) {
        local_20 = 0;
      }
      else {
        local_20 = *(int *)*piVar3 + 0x18;
      }
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
      local_8 = 1;
      pcVar6 = __itoa(_Value,local_8c,10);
      pcVar8 = pcVar6;
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      FUN_00409350(pcVar6,(int)pcVar8 - (int)(pcVar6 + 1));
      local_8 = 2;
      uVar7 = FUN_00988fa0(local_50);
      local_8 = CONCAT31(local_8._1_3_,3);
      (**(code **)(*(int *)*param_1 + 0x58))(uVar7,local_20);
      _Value = _Value + 1;
      if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_6c);
      }
      local_8 = 0xffffffff;
      local_58 = 0xf;
      local_5c = 0;
      local_6c = local_6c & 0xffffff00;
      if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_50[0]);
      }
      (**(code **)(*(int *)(*(int *)*piVar3 + 0x18) + 0x34))();
      (**(code **)(*(int *)(*(int *)*piVar3 + 0x18) + 0x90))();
      *(undefined1 *)(*piVar3 + 0x99) = 1;
    }
    psVar5 = (short *)(**(code **)(**(int **)*piVar3 + 0x60))(local_2c);
    piVar3 = (int *)piVar3[2];
    local_18 = local_18 + *psVar5 + local_34;
  } while( true );
}

