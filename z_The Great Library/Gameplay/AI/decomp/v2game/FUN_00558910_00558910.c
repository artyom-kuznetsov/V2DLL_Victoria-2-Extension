// FUN_00558910 @ 00558910 body=[[00558910, 005589d3] [005589e0, 00558a78]]


void FUN_00558910(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  int *piVar6;
  int *piVar7;
  uint local_60 [5];
  uint local_4c;
  uint local_48 [5];
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  uint local_28;
  undefined4 local_24;
  uint local_20;
  undefined4 local_1c;
  int *local_14;
  int local_10;
  int *local_c;
  
  if (param_1 != param_2) {
    piVar7 = param_1 + 1;
    local_14 = piVar7;
    if (piVar7 != param_2) {
      local_10 = (int)piVar7 - (int)param_1;
      do {
        iVar1 = *piVar7;
        iVar2 = *(int *)(iVar1 + 0xe88);
        iVar3 = *(int *)(*param_1 + 0xe88);
        local_c = piVar7;
        if (iVar2 == 0) {
          local_48[2] = 0;
          local_48[3] = 0;
          puVar4 = local_48 + 2;
        }
        else {
          local_1c = *(undefined4 *)(iVar2 + 0x14);
          local_20 = *(uint *)(iVar2 + 0x10);
          puVar4 = &local_20;
        }
        local_4c = puVar4[1];
        if (iVar3 == 0) {
          local_48[0] = 0;
          local_48[1] = 0;
          puVar5 = local_48;
        }
        else {
          local_24 = *(undefined4 *)(iVar3 + 0x14);
          local_28 = *(uint *)(iVar3 + 0x10);
          puVar5 = &local_28;
        }
        piVar6 = piVar7;
        if (((int)local_4c < (int)puVar5[1]) ||
           (((int)local_4c <= (int)puVar5[1] && (*puVar4 <= *puVar5)))) {
          while( true ) {
            iVar2 = *(int *)(iVar1 + 0xe88);
            iVar3 = *(int *)(piVar6[-1] + 0xe88);
            if (iVar2 == 0) {
              local_60[2] = 0;
              local_60[3] = 0;
              puVar4 = local_60 + 2;
            }
            else {
              local_2c = *(undefined4 *)(iVar2 + 0x14);
              local_30 = *(uint *)(iVar2 + 0x10);
              puVar4 = &local_30;
            }
            if (iVar3 == 0) {
              local_60[0] = 0;
              local_60[1] = 0;
              puVar5 = local_60;
            }
            else {
              local_34 = *(undefined4 *)(iVar3 + 0x14);
              local_48[4] = *(undefined4 *)(iVar3 + 0x10);
              puVar5 = local_48 + 4;
            }
            if (((int)puVar4[1] < (int)puVar5[1]) ||
               (((int)puVar4[1] <= (int)puVar5[1] && (*puVar4 <= *puVar5)))) break;
            *piVar6 = piVar6[-1];
            local_c = piVar6 + -1;
            piVar6 = piVar6 + -1;
          }
          *piVar6 = iVar1;
        }
        else {
          local_14 = piVar7;
          FID_conflict__memcpy(piVar7 + (1 - (local_10 >> 2)),param_1,(local_10 >> 2) * 4);
          *param_1 = iVar1;
        }
        local_10 = local_10 + 4;
        piVar7 = piVar7 + 1;
        local_14 = piVar7;
      } while (piVar7 != param_2);
    }
  }
  return;
}

