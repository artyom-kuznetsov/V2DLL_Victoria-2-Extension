// FUN_00685780 @ 00685780 body=[[00685780, 00685886] [00685890, 006859b0]]


void FUN_00685780(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *in_EAX;
  int iVar5;
  undefined4 local_f8;
  undefined4 local_f4;
  int local_e0;
  int local_d8;
  undefined4 local_a8;
  undefined1 local_a0 [8];
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined2 local_84;
  undefined4 local_80;
  undefined1 *local_7c;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 *local_54;
  undefined1 local_50 [8];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  undefined2 local_34;
  undefined4 local_30;
  undefined1 *local_2c;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_f4 = 0;
  local_f8 = 0x6857a0;
  FUN_008a8650();
  local_f4 = 1;
  local_f8 = 0x6857ab;
  FUN_008a8650();
  iVar1 = *in_EAX;
  for (iVar5 = in_EAX[1]; iVar5 != iVar1; iVar5 = iVar5 + 1) {
    iVar2 = *(int *)(*(int *)*param_1 + iVar5 * 4);
    if (*(int *)(iVar2 + 300) != 0) {
      local_f4 = 0x6857e5;
      FUN_004be000();
      local_74 = 0x2d2d2d;
      local_7c = local_a0;
      local_70 = 0;
      local_90 = 0;
      local_6c = 0;
      local_68 = 0;
      local_64 = 0;
      local_84 = 1;
      local_80 = 0;
      local_8c = 0;
      local_88 = 0;
      local_98 = *(undefined4 *)(iVar2 + 0x128);
      local_94 = *(undefined4 *)(iVar2 + 300);
      local_d8 = 0;
      if (0 < (int)param_1[2]) {
        local_e0 = 0;
        do {
          iVar3 = *(int *)(local_e0 + *(int *)(iVar2 + 0x194));
          while (iVar4 = iVar3, iVar4 != 0) {
            iVar3 = *(int *)(iVar4 + 0x27c);
            local_f4 = 0x6858ab;
            FUN_00957dd0();
            if (param_1[3] == *(uint *)(iVar4 + 0xc) % (uint)param_1[4]) {
              local_44 = 0;
              local_20 = 0;
              local_18 = 0;
              local_48 = 0x2d2d2d;
              local_54 = (undefined1 *)&local_f8;
              local_14 = 0;
              local_24 = 0x2d2d2d;
              local_2c = local_50;
              local_40 = 0;
              local_1c = 0;
              local_34 = 1;
              local_30 = 0;
              local_38 = 0;
              local_f8 = local_a8;
              local_3c = iVar4;
              FUN_00958df0(local_50,local_a0);
            }
          }
          local_e0 = local_e0 + 0x10;
          local_d8 = local_d8 + 1;
        } while (local_d8 < (int)param_1[2]);
      }
    }
  }
  return;
}

