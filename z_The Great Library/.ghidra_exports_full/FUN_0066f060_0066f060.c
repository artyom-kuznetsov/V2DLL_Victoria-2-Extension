// FUN_0066f060 @ 0066f060 body=[[0066f060, 0066f164] [0066f168, 0066f197] [0066f19b, 0066f236]]


void FUN_0066f060(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *in_ECX;
  uint uStack_58;
  uint local_54 [4];
  undefined4 uStack_44;
  uint uStack_40;
  uint uStack_38;
  undefined1 local_34 [12];
  undefined4 uStack_28;
  uint local_24;
  undefined4 local_20;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b9e432;
  pvStack_14 = ExceptionList;
  local_54[0] = 0;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = 0;
  ExceptionList = &pvStack_14;
  FUN_00409350("menu_save",9);
  local_c = 0;
  local_54[0] = 1;
  iVar3 = (**(code **)(*(int *)in_ECX[0x749] + 0x6c))(local_34);
  if (*(char *)(iVar3 + 0x67) == '\0') {
    uStack_40 = 0xf;
    uStack_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    FUN_00409350("menu_message_settings",0x15);
    puStack_10 = (undefined1 *)0x1;
    uStack_58 = 3;
    iVar3 = (**(code **)(*(int *)in_ECX[0x749] + 0x6c))(local_54);
    if ((*(char *)(iVar3 + 0x67) == '\0') &&
       ((in_ECX[0x1c6] == 0 || (*(char *)(*(int *)(in_ECX[0x1c6] + 0x30) + 0x67) == '\0')))) {
      if (in_ECX[0x75a] != 0) {
        cVar2 = (**(code **)(*(int *)in_ECX[0x75a] + 0xc))();
        if (cVar2 != '\0') goto LAB_0066f143;
      }
      bVar1 = false;
      goto LAB_0066f148;
    }
  }
LAB_0066f143:
  bVar1 = true;
LAB_0066f148:
  if ((uStack_58 & 2) != 0) {
    uStack_58 = uStack_58 & 0xfffffffd;
    if (0xf < uStack_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_54[0]);
    }
    uStack_40 = 0xf;
    uStack_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
  }
  puStack_10 = (undefined1 *)0xffffffff;
  if ((uStack_58 & 1) != 0) {
    if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_38);
    }
    local_24 = 0xf;
    uStack_28 = 0;
    uStack_38 = uStack_38 & 0xffffff00;
  }
  if (bVar1) {
    (**(code **)(*(int *)(in_ECX[0x749] + 0x18) + 0x38))();
    (**(code **)(*(int *)in_ECX[0x75a] + 8))();
    FUN_0066eee0();
    ExceptionList = pvStack_18;
    return;
  }
  if ((((char)in_ECX[0x54e] != '\0') && ((char)in_ECX[0x17] == '\0')) &&
     ((char)in_ECX[0x781] == '\0')) {
    (**(code **)(*in_ECX + 0x15c))();
  }
  (**(code **)(*(int *)(in_ECX[0x749] + 0x18) + 0x38))();
  (**(code **)(*(int *)in_ECX[0x75a] + 8))();
  ExceptionList = pvStack_18;
  return;
}

