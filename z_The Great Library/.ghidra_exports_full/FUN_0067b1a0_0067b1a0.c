// FUN_0067b1a0 @ 0067b1a0 body=[[0067b1a0, 0067b324] [0067b328, 0067b3b4] [0067b3b8, 0067b433] [0067b437, 0067b499] [0067b4a2, 0067b500] [0067b504, 0067b557] [0067b560, 0067b5ab] [0067b5af, 0067b5d0] [0067b5d4, 0067b5e6]]


uint * FUN_0067b1a0(uint *param_1,undefined1 *param_2,undefined1 *param_3,uint param_4)

{
  undefined1 *puVar1;
  char cVar2;
  undefined1 *puVar3;
  uint in_stack_00000024;
  undefined1 local_64 [12];
  undefined4 uStack_58;
  uint *local_54;
  undefined1 *local_50;
  undefined1 *puStack_4c;
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b4c5c0;
  local_10 = ExceptionList;
  local_20 = local_64;
  puVar3 = param_2 + (((int)param_3 - (int)param_2) / 0x38) * 0x1c;
  local_8 = 0;
  uStack_7 = 0;
  local_50 = (undefined1 *)0xf;
  local_54 = (uint *)0x0;
  local_64[0] = 0;
  ExceptionList = &local_10;
  FUN_00408ed0(&param_4,0,0xffffffff);
  FUN_0067bd10(param_2,puVar3,param_3 + -0x1c);
  local_14 = puVar3 + 0x1c;
  if (param_2 < puVar3) {
    while( true ) {
      local_50 = puVar3 + -0x1c;
      local_54 = &param_4;
      uStack_58 = 0x67b241;
      puStack_4c = puVar3;
      local_1c = local_50;
      cVar2 = FUN_006477c0();
      if (cVar2 != '\0') break;
      puStack_4c = local_1c;
      local_54 = &param_4;
      uStack_58 = 0x67b253;
      local_50 = puVar3;
      cVar2 = FUN_006477c0();
      if ((cVar2 != '\0') || (puVar3 = local_1c, local_1c <= param_2)) break;
    }
  }
  puVar1 = local_14;
  local_18 = puVar3;
  if (local_14 < param_3) {
    while( true ) {
      local_50 = local_14;
      local_54 = &param_4;
      uStack_58 = 0x67b274;
      puStack_4c = puVar3;
      cVar2 = FUN_006477c0();
      puVar1 = local_14;
      if (cVar2 != '\0') break;
      puStack_4c = local_14;
      local_54 = &param_4;
      uStack_58 = 0x67b286;
      local_50 = puVar3;
      cVar2 = FUN_006477c0();
      puVar1 = local_14;
      if ((cVar2 != '\0') || (local_14 = local_14 + 0x1c, puVar1 = local_14, param_3 <= local_14))
      break;
    }
  }
joined_r0x0067b2a3:
  do {
    if (param_3 <= puVar1) {
LAB_0067b330:
      if (param_2 < local_18) {
        local_1c = local_18 + -0x1c;
        do {
          local_50 = local_1c;
          local_54 = &param_4;
          uStack_58 = 0x67b350;
          puStack_4c = puVar3;
          cVar2 = FUN_006477c0();
          if (cVar2 == '\0') {
            puStack_4c = local_1c;
            local_54 = &param_4;
            uStack_58 = 0x67b362;
            local_50 = puVar3;
            cVar2 = FUN_006477c0();
            if (cVar2 != '\0') break;
            puStack_4c = (undefined1 *)0xffffffff;
            local_50 = (undefined1 *)0x0;
            puVar3 = puVar3 + -0x1c;
            local_28 = 0xf;
            local_2c = 0;
            local_3c[0] = local_3c[0] & 0xffffff00;
            uStack_58 = 0x67b382;
            local_54 = (uint *)puVar3;
            FUN_00408ed0();
            puStack_4c = (undefined1 *)0xffffffff;
            local_50 = (undefined1 *)0x0;
            local_54 = (uint *)local_1c;
            local_8 = 2;
            uStack_58 = 0x67b394;
            FUN_00408ed0();
            puStack_4c = (undefined1 *)0xffffffff;
            local_50 = (undefined1 *)0x0;
            local_54 = local_3c;
            uStack_58 = 0x67b3a3;
            FUN_00408ed0();
            local_8 = 0;
            if (0xf < local_28) {
              puStack_4c = (undefined1 *)local_3c[0];
                    /* WARNING: Subroutine does not return */
              local_50 = &UNK_0067b3b5;
              FUN_00aae91b();
            }
          }
          local_1c = local_1c + -0x1c;
          local_18 = local_18 + -0x1c;
        } while (param_2 < local_18);
      }
      if (local_18 == param_2) {
        if (puVar1 == param_3) {
          *param_1 = (uint)puVar3;
          param_1[1] = (uint)local_14;
          if (in_stack_00000024 < 0x10) {
            ExceptionList = local_10;
            return param_1;
          }
          puStack_4c = (undefined1 *)param_4;
                    /* WARNING: Subroutine does not return */
          local_50 = &UNK_0067b5d1;
          FUN_00aae91b();
        }
        if (local_14 != puVar1) {
          puStack_4c = (undefined1 *)0xffffffff;
          local_50 = (undefined1 *)0x0;
          local_28 = 0xf;
          local_2c = 0;
          local_3c[0] = local_3c[0] & 0xffffff00;
          uStack_58 = 0x67b401;
          local_54 = (uint *)puVar3;
          FUN_00408ed0();
          puStack_4c = (undefined1 *)0xffffffff;
          local_50 = (undefined1 *)0x0;
          local_54 = (uint *)local_14;
          local_8 = 3;
          uStack_58 = 0x67b413;
          FUN_00408ed0();
          puStack_4c = (undefined1 *)0xffffffff;
          local_50 = (undefined1 *)0x0;
          local_54 = local_3c;
          uStack_58 = 0x67b422;
          FUN_00408ed0();
          local_8 = 0;
          if (0xf < local_28) {
            puStack_4c = (undefined1 *)local_3c[0];
                    /* WARNING: Subroutine does not return */
            local_50 = &UNK_0067b434;
            FUN_00aae91b();
          }
        }
        local_14 = local_14 + 0x1c;
        puStack_4c = (undefined1 *)0xffffffff;
        local_50 = (undefined1 *)0x0;
        local_28 = 0xf;
        local_2c = 0;
        local_3c[0] = local_3c[0] & 0xffffff00;
        uStack_58 = 0x67b462;
        local_54 = (uint *)puVar3;
        local_20 = puVar3;
        local_1c = puVar1;
        FUN_00408ed0();
        puStack_4c = (undefined1 *)0xffffffff;
        local_50 = (undefined1 *)0x0;
        local_54 = (uint *)local_1c;
        local_8 = 4;
        uStack_58 = 0x67b475;
        FUN_00408ed0();
        puStack_4c = (undefined1 *)0xffffffff;
        local_50 = (undefined1 *)0x0;
        local_54 = local_3c;
        uStack_58 = 0x67b484;
        FUN_00408ed0();
        local_8 = 0;
        puVar1 = puVar1 + 0x1c;
        puVar3 = puVar3 + 0x1c;
        if (0xf < local_28) {
          puStack_4c = (undefined1 *)local_3c[0];
                    /* WARNING: Subroutine does not return */
          local_50 = &UNK_0067b49a;
          FUN_00aae91b();
        }
      }
      else {
        local_18 = local_18 + -0x1c;
        if (puVar1 == param_3) {
          puVar3 = puVar3 + -0x1c;
          if (local_18 != puVar3) {
            puStack_4c = (undefined1 *)0xffffffff;
            local_50 = (undefined1 *)0x0;
            local_28 = 0xf;
            local_2c = 0;
            local_3c[0] = (uint)local_3c[0]._1_3_ << 8;
            uStack_58 = 0x67b4d1;
            local_54 = (uint *)local_18;
            FUN_00408ed0();
            puStack_4c = (undefined1 *)0xffffffff;
            local_50 = (undefined1 *)0x0;
            local_8 = 5;
            uStack_58 = 0x67b4e1;
            local_54 = (uint *)puVar3;
            FUN_00408ed0();
            puStack_4c = (undefined1 *)0xffffffff;
            local_50 = (undefined1 *)0x0;
            local_54 = local_3c;
            uStack_58 = 0x67b4ef;
            FUN_00408ed0();
            local_8 = 0;
            if (0xf < local_28) {
              puStack_4c = (undefined1 *)local_3c[0];
                    /* WARNING: Subroutine does not return */
              local_50 = &UNK_0067b501;
              FUN_00aae91b();
            }
          }
          local_14 = local_14 + -0x1c;
          puStack_4c = (undefined1 *)0xffffffff;
          local_50 = (undefined1 *)0x0;
          local_28 = 0xf;
          local_2c = 0;
          local_3c[0] = local_3c[0] & 0xffffff00;
          uStack_58 = 0x67b521;
          local_54 = (uint *)puVar3;
          FUN_00408ed0();
          puStack_4c = (undefined1 *)0xffffffff;
          local_50 = (undefined1 *)0x0;
          local_54 = (uint *)local_14;
          local_8 = 6;
          uStack_58 = 0x67b533;
          FUN_00408ed0();
          puStack_4c = (undefined1 *)0xffffffff;
          local_50 = (undefined1 *)0x0;
          local_54 = local_3c;
          uStack_58 = 0x67b542;
          FUN_00408ed0();
          local_8 = 0;
          if (0xf < local_28) {
            puStack_4c = (undefined1 *)local_3c[0];
                    /* WARNING: Subroutine does not return */
            local_50 = &UNK_0067b558;
            FUN_00aae91b();
          }
        }
        else {
          puStack_4c = (undefined1 *)0xffffffff;
          local_50 = (undefined1 *)0x0;
          local_28 = 0xf;
          local_2c = 0;
          local_3c[0] = (uint)local_3c[0]._1_3_ << 8;
          uStack_58 = 0x67b579;
          local_54 = (uint *)puVar1;
          FUN_00408ed0();
          puStack_4c = (undefined1 *)0xffffffff;
          local_50 = (undefined1 *)0x0;
          local_54 = (uint *)local_18;
          local_8 = 7;
          uStack_58 = 0x67b58b;
          FUN_00408ed0();
          puStack_4c = (undefined1 *)0xffffffff;
          local_50 = (undefined1 *)0x0;
          local_54 = local_3c;
          uStack_58 = 0x67b59a;
          FUN_00408ed0();
          local_8 = 0;
          if (0xf < local_28) {
            puStack_4c = (undefined1 *)local_3c[0];
                    /* WARNING: Subroutine does not return */
            local_50 = &UNK_0067b5ac;
            FUN_00aae91b();
          }
          puVar1 = puVar1 + 0x1c;
        }
      }
      goto joined_r0x0067b2a3;
    }
    local_54 = &param_4;
    uStack_58 = 0x67b2bb;
    local_50 = puVar3;
    puStack_4c = puVar1;
    cVar2 = FUN_006477c0();
    if (cVar2 == '\0') {
      local_54 = &param_4;
      uStack_58 = 0x67b2ca;
      local_50 = puVar1;
      puStack_4c = puVar3;
      cVar2 = FUN_006477c0();
      if (cVar2 != '\0') goto LAB_0067b330;
      puStack_4c = (undefined1 *)0xffffffff;
      local_50 = (undefined1 *)0x0;
      local_1c = local_14;
      local_54 = (uint *)local_14;
      local_28 = 0xf;
      local_2c = 0;
      local_3c[0] = local_3c[0] & 0xffffff00;
      uStack_58 = 0x67b2f5;
      local_14 = local_14 + 0x1c;
      FUN_00408ed0();
      puStack_4c = (undefined1 *)0xffffffff;
      local_50 = (undefined1 *)0x0;
      local_8 = 1;
      uStack_58 = 0x67b305;
      local_54 = (uint *)puVar1;
      FUN_00408ed0();
      puStack_4c = (undefined1 *)0xffffffff;
      local_50 = (undefined1 *)0x0;
      local_54 = local_3c;
      uStack_58 = 0x67b313;
      FUN_00408ed0();
      local_8 = 0;
      if (0xf < local_28) {
        puStack_4c = (undefined1 *)local_3c[0];
                    /* WARNING: Subroutine does not return */
        local_50 = &UNK_0067b325;
        FUN_00aae91b();
      }
    }
    puVar1 = puVar1 + 0x1c;
  } while( true );
}

