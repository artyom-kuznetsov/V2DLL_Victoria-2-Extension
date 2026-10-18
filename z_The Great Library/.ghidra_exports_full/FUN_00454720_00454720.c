// FUN_00454720 @ 00454720 body=[[00454720, 004547f5] [00454800, 004548df]]


void FUN_00454720(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 **ppuVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  int local_28;
  int local_24;
  int *local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int *local_c;
  int local_8;
  
  if ((param_1 != param_2) && (piVar6 = param_1 + 1, piVar6 != param_2)) {
    local_10 = (int)piVar6 - (int)param_1;
    iVar7 = DAT_012588e8;
    do {
      local_30 = *(undefined4 *)(iVar7 + 0xb5c);
      local_8 = *piVar6;
      iVar2 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar7 + 0xb60) * 4) + 100);
      local_1c = *(int *)(local_8 + 0x20);
      local_14 = iVar2 + 4;
      local_20 = piVar6;
      local_c = piVar6;
      FUN_00445430(&local_1c);
      iVar2 = *(int *)(iVar2 + 8);
      if ((local_24 == iVar2) || (*(char *)(local_24 + 0x10) != '\x01')) {
LAB_00454800:
        while( true ) {
          local_1c = piVar6[-1];
          local_18 = *(undefined4 *)(iVar7 + 0xb5c);
          piVar6 = piVar6 + -1;
          local_14 = *(int *)(local_8 + 0x20);
          iVar2 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar7 + 0xb60) * 4) + 100)
          ;
          puVar5 = (undefined4 *)(*(undefined4 **)(iVar2 + 8))[1];
          cVar1 = *(char *)((int)puVar5 + 0x15);
          local_2c = *(undefined4 **)(iVar2 + 8);
          while (cVar1 == '\0') {
            if ((int)puVar5[3] < local_14) {
              puVar3 = (undefined4 *)puVar5[2];
              puVar5 = local_2c;
            }
            else {
              puVar3 = (undefined4 *)*puVar5;
            }
            local_2c = puVar5;
            puVar5 = puVar3;
            cVar1 = *(char *)((int)puVar3 + 0x15);
          }
          if ((local_2c == *(undefined4 **)(iVar2 + 8)) || (local_14 < (int)local_2c[3])) {
            local_34 = *(undefined4 **)(iVar2 + 8);
            ppuVar4 = &local_34;
          }
          else {
            ppuVar4 = &local_2c;
          }
          puVar5 = *(undefined4 **)(iVar2 + 8);
          if ((*ppuVar4 == puVar5) || (*(char *)(*ppuVar4 + 4) != '\x01')) break;
          local_2c = *(undefined4 **)(local_1c + 0x20);
          FUN_00445430(&local_2c);
          if ((local_38 != puVar5) && (*(char *)(local_38 + 4) != '\0')) break;
          *local_c = local_1c;
          local_c = piVar6;
        }
        *local_c = local_8;
      }
      else {
        local_1c = *(int *)(*param_1 + 0x20);
        FUN_00445430(&local_1c);
        if ((local_28 != iVar2) && (*(char *)(local_28 + 0x10) != '\0')) goto LAB_00454800;
        FID_conflict__memcpy(piVar6 + (1 - (local_10 >> 2)),param_1,(local_10 >> 2) * 4);
        iVar7 = DAT_012588e8;
        *param_1 = local_8;
        local_20 = piVar6;
      }
      local_10 = local_10 + 4;
      piVar6 = local_20 + 1;
    } while (piVar6 != param_2);
  }
  return;
}

