// FUN_009d9d80 @ 009d9d80 body=[[009d9d80, 009da0bc] [009da0c0, 009da171]]


void FUN_009d9d80(int *param_1)

{
  int iVar1;
  int in_ECX;
  int unaff_ESI;
  int unaff_EDI;
  int iVar2;
  undefined4 uStack_74;
  undefined2 *puStack_70;
  undefined4 uStack_6c;
  undefined2 *puStack_68;
  undefined4 uStack_64;
  int iVar3;
  int iStack_54;
  undefined2 local_40;
  int local_3e;
  undefined2 local_3a;
  undefined2 local_38;
  undefined4 local_36;
  undefined4 local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  iVar3 = *(int *)(in_ECX + 0x10);
  local_2c = *(int *)(in_ECX + 4);
  local_36 = 0x36;
  local_30 = 0x28;
  local_20 = 0;
  local_1c = 0;
  local_10 = 0;
  local_c = 0;
  uStack_64 = 0xe;
  if (iVar3 == 8) {
    local_40 = 0x4d42;
    local_28 = *(int *)(in_ECX + 8);
    local_3e = local_28 * 3 + 0x6e + local_2c;
    local_3a = 0;
    local_38 = 0;
    local_18 = 0xb12;
    local_14 = 0xb12;
    puStack_68 = &local_40;
    local_24 = 0x80001;
    uStack_6c = 0x9d9e3c;
    (**(code **)(*param_1 + 0x20))();
    uStack_6c = 0x28;
    puStack_70 = &local_38;
    uStack_74 = 0x9d9e4c;
    (**(code **)(*param_1 + 0x20))();
    iVar3 = *(int *)(in_ECX + 8);
    if (0 < iVar3) {
      iVar1 = *(int *)(in_ECX + 4);
      do {
        iVar2 = 0;
        if (0 < iVar1) {
          do {
            uStack_74 = 1;
            uStack_64 = CONCAT31(uStack_64._1_3_,
                                 *(undefined1 *)
                                  (*(int *)(in_ECX + 0xc) * iVar2 +
                                  *(int *)(in_ECX + 0x18) * unaff_EDI + iStack_54));
            (**(code **)(*param_1 + 0x20))();
            iVar1 = *(int *)(in_ECX + 4);
            iVar2 = iVar2 + 1;
          } while (iVar2 < iVar1);
        }
        unaff_EDI = unaff_EDI + unaff_ESI;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      return;
    }
  }
  else {
    local_40 = 0x4d42;
    if (iVar3 == 0x10) {
      local_28 = *(int *)(in_ECX + 8);
      local_3e = local_28 * 3 + 0x6e + local_2c;
      local_3a = 0;
      local_38 = 0;
      local_18 = 0xb12;
      local_14 = 0xb12;
      puStack_68 = &local_40;
      local_24 = 0x100001;
      uStack_6c = 0x9d9f14;
      (**(code **)(*param_1 + 0x20))();
      uStack_6c = 0x28;
      puStack_70 = &local_38;
      uStack_74 = 0x9d9f24;
      (**(code **)(*param_1 + 0x20))();
      iVar3 = *(int *)(in_ECX + 8);
      if (0 < iVar3) {
        iVar1 = *(int *)(in_ECX + 4);
        do {
          iVar2 = 0;
          if (0 < iVar1) {
            do {
              iVar1 = *(int *)(in_ECX + 0x18) * unaff_EDI + *(int *)(in_ECX + 0xc) * iVar2;
              uStack_64._0_2_ =
                   CONCAT11(*(undefined1 *)(iStack_54 + 1 + iVar1),
                            *(undefined1 *)(iVar1 + iStack_54));
              uStack_74 = 1;
              (**(code **)(*param_1 + 0x20))();
              (**(code **)(*param_1 + 0x20))((int)&uStack_6c + 1,1);
              iVar1 = *(int *)(in_ECX + 4);
              iVar2 = iVar2 + 1;
            } while (iVar2 < iVar1);
          }
          unaff_EDI = unaff_EDI + unaff_ESI;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        return;
      }
    }
    else {
      local_28 = *(int *)(in_ECX + 8);
      local_3e = local_28 * 3 + 0x6e + local_2c;
      local_18 = 0xb12;
      local_14 = 0xb12;
      if (iVar3 == 0x18) {
        local_3a = 0;
        local_38 = 0;
        puStack_68 = &local_40;
        local_24 = 0x180001;
        uStack_6c = 0x9d9ffa;
        (**(code **)(*param_1 + 0x20))();
        uStack_6c = 0x28;
        puStack_70 = &local_38;
        uStack_74 = 0x9da00a;
        (**(code **)(*param_1 + 0x20))();
        iVar3 = *(int *)(in_ECX + 8);
        if (0 < iVar3) {
          iVar1 = *(int *)(in_ECX + 4);
          do {
            iVar2 = 0;
            if (0 < iVar1) {
              do {
                uStack_74 = 3;
                (**(code **)(*param_1 + 0x20))();
                iVar1 = *(int *)(in_ECX + 4);
                iVar2 = iVar2 + 1;
              } while (iVar2 < iVar1);
            }
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
          return;
        }
      }
      else {
        iVar3 = *(int *)(in_ECX + 0x20);
        local_3a = 0;
        local_38 = 0;
        puStack_68 = &local_40;
        local_24 = 0x200001;
        uStack_6c = 0x9da091;
        (**(code **)(*param_1 + 0x20))();
        uStack_6c = 0x28;
        puStack_70 = &local_38;
        uStack_74 = 0x9da0a1;
        (**(code **)(*param_1 + 0x20))();
        iStack_54 = *(int *)(in_ECX + 8);
        if (0 < iStack_54) {
          iVar1 = *(int *)(in_ECX + 4);
          do {
            iVar2 = 0;
            if (0 < iVar1) {
              do {
                iVar1 = *(int *)(in_ECX + 0xc) * iVar2 + *(int *)(in_ECX + 0x18) * unaff_EDI;
                uStack_64 = CONCAT13(*(undefined1 *)(iVar3 + 3 + iVar1),
                                     CONCAT12(*(undefined1 *)(iVar3 + 2 + iVar1),
                                              CONCAT11(*(undefined1 *)(iVar1 + iVar3),
                                                       *(undefined1 *)(iVar3 + 1 + iVar1))));
                uStack_74 = 1;
                (**(code **)(*param_1 + 0x20))();
                (**(code **)(*param_1 + 0x20))(&uStack_6c,1);
                (**(code **)(*param_1 + 0x20))((int)&uStack_74 + 2,1);
                (**(code **)(*param_1 + 0x20))(&stack0xffffff87,1);
                iVar1 = *(int *)(in_ECX + 4);
                iVar2 = iVar2 + 1;
              } while (iVar2 < iVar1);
            }
            unaff_EDI = unaff_EDI + unaff_ESI;
            iStack_54 = iStack_54 + -1;
          } while (iStack_54 != 0);
        }
      }
    }
  }
  return;
}

