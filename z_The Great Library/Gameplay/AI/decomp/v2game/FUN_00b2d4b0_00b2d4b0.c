// FUN_00b2d4b0 @ 00b2d4b0 body=[[00b2d4b0, 00b2d516] [00b2d520, 00b2d793]]


void FUN_00b2d4b0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  undefined4 *local_28;
  uint local_24;
  int local_20;
  int local_1c;
  uint local_18;
  char local_11;
  char local_10 [8];
  uint local_8;
  
  local_8 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  local_40 = param_3;
  local_28 = param_4;
  local_3c = param_2;
  local_18 = 0;
  iVar2 = (*(code *)*param_1)(param_1,local_10,6,&local_2c);
  if (iVar2 == 0) {
    if (local_2c != 6) {
LAB_00b2d4fd:
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    uVar3 = 0;
    do {
      if (local_10[uVar3] != (&DAT_00f05eb0)[uVar3]) goto LAB_00b2d611;
      uVar3 = uVar3 + 1;
    } while (uVar3 < 6);
    iVar2 = (*(code *)*param_1)(param_1,&local_11,1,&local_2c);
    if (iVar2 == 0) {
      if (local_2c != 1) goto LAB_00b2d4fd;
      if (local_11 != '\0') {
LAB_00b2d611:
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      iVar2 = FUN_00b2b5f0(param_1,&local_11);
      if ((iVar2 == 0) && (iVar2 = FUN_00b2b620(param_1,&local_2c,&local_18), iVar2 == 0)) {
        local_18 = 0xffffffff;
        iVar2 = FUN_00b2b6a0(param_1,&local_50,&local_18);
        if ((iVar2 == 0) &&
           ((iVar2 = FUN_00b2b6a0(param_1,&local_48,&local_18), iVar2 == 0 &&
            (iVar2 = FUN_00b2b620(param_1,&local_20,&local_18), iVar2 == 0)))) {
          *(undefined4 *)(param_2 + 0x20) = 0x20;
          *(undefined4 *)(param_2 + 0x24) = 0;
          if (~local_18 != local_2c) goto LAB_00b2d611;
          if (local_48 == 0 && local_44 == 0) {
            __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
            return;
          }
          iVar2 = (*(code *)param_1[1])
                            (param_1,local_50 + 0x20,local_4c + (uint)(0xffffffdf < local_50));
          if (iVar2 == 0) {
            iVar2 = FUN_00b2f980(&local_38,local_48,*local_28);
            if (iVar2 == 0) {
              __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
              return;
            }
            iVar2 = FUN_00b2b5c0(param_1,local_34,local_48);
            if ((iVar2 == 0) && (iVar2 = FUN_00b2d8f0(), iVar2 == local_20)) {
              local_24 = local_34;
              local_20 = local_38;
              iVar2 = FUN_00b2b7e0(&local_24,&local_30);
              puVar1 = local_28;
              while (local_28 = puVar1, iVar2 == 0) {
                if ((local_30 == 1) && (local_2c == 0)) {
                  FUN_00b2d220(&local_24,local_3c,local_40,puVar1);
                  break;
                }
                if ((local_30 != 0x17) || (local_2c != 0)) break;
                iVar2 = FUN_00b2d410(param_1,&local_24,&local_1c,*(undefined4 *)(local_3c + 0x20),
                                     *(undefined4 *)(local_3c + 0x24),puVar1);
                if (iVar2 != 0) {
                  FUN_00b2f9c0(&local_1c,puVar1[1]);
                  break;
                }
                FUN_00b2f9c0(&local_38,puVar1[1]);
                local_38 = local_1c;
                local_20 = local_1c;
                local_34 = local_18;
                local_24 = local_18;
                iVar2 = FUN_00b2b7e0(&local_24,&local_30);
                puVar1 = local_28;
              }
            }
            FUN_00b2f9c0(&local_38,local_28[1]);
          }
        }
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

